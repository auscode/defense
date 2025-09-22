#include "ChartsView.h"
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QChart>
#include <QVBoxLayout>

QT_CHARTS_USE_NAMESPACE

namespace defense {
namespace gui {

ChartsView::ChartsView(QWidget* parent)
    : QWidget(parent),
      chart_(new QChart()),
      chartView_(new QChartView(chart_)) {
    auto* layout = new QVBoxLayout(this);
    layout->addWidget(chartView_);
    setLayout(layout);

    chart_->setTitle("Simulation Data");
    chartView_->setRenderHint(QPainter::Antialiasing);
}

void ChartsView::setData(const QVector<QPointF>& points) {
    chart_->removeAllSeries();

    auto* series = new QLineSeries();
    for (const auto& p : points) {
        series->append(p);
    }

    chart_->addSeries(series);
    chart_->createDefaultAxes();
}

} // namespace gui
} // namespace defense
