#include "ControlPanel.h"
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>

namespace defense {
namespace gui {

ControlPanel::ControlPanel(QWidget* parent) : QWidget(parent) {
    auto* layout = new QVBoxLayout(this);

    m_velocityInput = new QLineEdit(this);
    m_angleInput = new QLineEdit(this);
    m_runButton = new QPushButton("Run Simulation", this);

    layout->addWidget(new QLabel("Velocity:"));
    layout->addWidget(m_velocityInput);
    layout->addWidget(new QLabel("Angle:"));
    layout->addWidget(m_angleInput);
    layout->addWidget(m_runButton);

    connect(m_runButton, &QPushButton::clicked, this, &ControlPanel::runSimulationClicked);
}

} // namespace gui
} // namespace defense
