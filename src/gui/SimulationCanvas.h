#pragma once
#include <QWidget>

namespace defense {
namespace gui {

class SimulationCanvas : public QWidget {
    Q_OBJECT
public:
    SimulationCanvas(QWidget* parent = nullptr);
protected:
    void paintEvent(QPaintEvent* event) override;
};

} // namespace gui
} // namespace defense
