#ifndef ACGTAGGENERATOR_H
#define ACGTAGGENERATOR_H

#include <QWidget>
#include <QDomDocument>

namespace Ui {
class ACGTagGenerator;
}

class ACGTagGenerator : public QWidget
{
    Q_OBJECT

public:
    explicit ACGTagGenerator(QWidget *parent = 0);
    ~ACGTagGenerator();

private:
    Ui::ACGTagGenerator *ui;
    QStringList m_commonTagList;
    QDomDocument m_dom;

public:
    void Initialize();
    void UpdateWorkCharComboBox(bool bWork = true);
    void findTargetNode(QDomDocument &dom, const QString &tag, const QString &targetTag, QDomNode &targetNode);
    void traverseParent(QDomNode &targetNode, QString &output);

private slots:
    void on_pushButton_clicked();
    void on_itemSelectionChanged();
    void on_pushButtonClear_clicked();
    void on_spinBox_editingFinished();
    void on_comboBoxWork_currentIndexChanged(const QString &arg1);
    void on_comboBoxChar_currentTextChanged(const QString &arg1);
};

#endif // ACGTAGGENERATOR_H
