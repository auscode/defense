#pragma once
#include <QWidget>

class QLineEdit;
class QPushButton;

namespace defense {
namespace gui {

class ControlPanel : public QWidget {
    Q_OBJECT
public:
    ControlPanel(QWidget* parent = nullptr);

signals:
    void runSimulationClicked();

private:
    QLineEdit* m_velocityInput;
    QLineEdit* m_angleInput;
    QPushButton* m_runButton;
};

} // namespace gui
} // namespace defense
