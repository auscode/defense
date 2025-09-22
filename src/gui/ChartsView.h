#pragma once

#include <QWidget>
#include <QVector>
#include <QPointF>

QT_BEGIN_NAMESPACE
class QChartView;
class QChart;
QT_END_NAMESPACE

namespace defense {
namespace gui {

class ChartsView : public QWidget {
    Q_OBJECT

public:
    explicit ChartsView(QWidget* parent = nullptr);

    // Load data points into chart
    void setData(const QVector<QPointF>& points);

private:
    QChart* chart_;
    QChartView* chartView_;
};

} // namespace gui
} // namespace defense
