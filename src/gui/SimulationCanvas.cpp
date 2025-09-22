#include "SimulationCanvas.h"
#include <QPainter>

namespace defense {
namespace gui {

SimulationCanvas::SimulationCanvas(QWidget* parent) : QWidget(parent) {}

void SimulationCanvas::paintEvent(QPaintEvent*) {
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    // Placeholder graphics
    painter.setPen(Qt::blue);
    painter.drawEllipse(rect().center(), 100, 100);
}

} // namespace gui
} // namespace defense
