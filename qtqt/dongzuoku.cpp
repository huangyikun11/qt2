#include "dongzuoku.h"
#include "ui_dongzuoku.h"
#include <QInputDialog>

dongzuoku::dongzuoku(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::dongzuoku)
{
    ui->setupUi(this);
    connect(ui->addNewAction,SIGNAL(clicked()),this,SLOT(addNewActionclicked()));
    ui->actions->setColumnWidth(0,200);

    //背
    QTreeWidgetItem *bei = new QTreeWidgetItem(ui->actions,QStringList(QString("背")));
    bei->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate);

    QTreeWidgetItem *glfshc = new QTreeWidgetItem(bei);
    glfshc->setText(0,"杠铃俯身划船");
    glfshc->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    glfshc->setIcon(0,QIcon(":/info/glfshc.ico"));

    QTreeWidgetItem *gwxl = new QTreeWidgetItem(bei);
    gwxl->setText(0,"高位下拉");
    gwxl->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    gwxl->setIcon(0,QIcon(":/info/gwxl.ico"));

    QTreeWidgetItem *qxfshc = new QTreeWidgetItem(bei);
    qxfshc->setText(0,"器械俯身划船");
    qxfshc->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    qxfshc->setIcon(0,QIcon(":/info/qxfshc.ico"));

    QTreeWidgetItem *qxxl = new QTreeWidgetItem(bei);
    qxxl->setText(0,"器械下拉");
    qxxl->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    qxxl->setIcon(0,QIcon(":/info/qxxl.ico"));

    QTreeWidgetItem *ylhc = new QTreeWidgetItem(bei);
    ylhc->setText(0,"哑铃划船");
    ylhc->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    ylhc->setIcon(0,QIcon(":/info/ylhc.ico"));

    QTreeWidgetItem *ytxs = new QTreeWidgetItem(bei);
    ytxs->setText(0,"引体向上");
    ytxs->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    ytxs->setIcon(0,QIcon(":/info/ytxs.ico"));

    QTreeWidgetItem *zwqxhc = new QTreeWidgetItem(bei);
    zwqxhc->setText(0,"窄握器械划船");
    zwqxhc->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    zwqxhc->setIcon(0,QIcon(":/info/zwqxhc.ico"));

    //肩后束
    QTreeWidgetItem *jianhoushu = new QTreeWidgetItem(ui->actions,QStringList(QString("肩后束")));
    jianhoushu->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate);

    QTreeWidgetItem *hdjfxfn = new QTreeWidgetItem(jianhoushu);
    hdjfxfn->setText(0,"蝴蝶机反向飞鸟");
    hdjfxfn->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    hdjfxfn->setIcon(0,QIcon(":/info/hdjfxfn.ico"));

    QTreeWidgetItem *ylfsfn = new QTreeWidgetItem(jianhoushu);
    ylfsfn->setText(0,"哑铃俯身飞鸟");
    ylfsfn->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    ylfsfn->setIcon(0,QIcon(":/info/ylfsfn.ico"));

    //胸
    QTreeWidgetItem *xiong = new QTreeWidgetItem(ui->actions,QStringList(QString("胸")));
    xiong->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate);

    QTreeWidgetItem *fwc = new QTreeWidgetItem(xiong);
    fwc->setText(0,"俯卧撑");
    fwc->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    fwc->setIcon(0,QIcon(":/info/fwc.ico"));

    QTreeWidgetItem *glwt = new QTreeWidgetItem(xiong);
    glwt->setText(0,"杠铃卧推");
    glwt->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    glwt->setIcon(0,QIcon(":/info/glwt.ico"));

    QTreeWidgetItem *hdjjx = new QTreeWidgetItem(xiong);
    hdjjx->setText(0,"蝴蝶机夹胸");
    hdjjx->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    hdjjx->setIcon(0,QIcon(":/info/hdjjx.ico"));

    QTreeWidgetItem *lmjywfn = new QTreeWidgetItem(xiong);
    lmjywfn->setText(0,"龙门架仰卧飞鸟");
    lmjywfn->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    lmjywfn->setIcon(0,QIcon(":/info/lmjywfn.ico"));

    QTreeWidgetItem *pbbqs = new QTreeWidgetItem(xiong);
    pbbqs->setText(0,"平板臂屈伸");
    pbbqs->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    pbbqs->setIcon(0,QIcon(":/info/pbbqs.ico"));

    QTreeWidgetItem *sgbqs = new QTreeWidgetItem(xiong);
    sgbqs->setText(0,"双杠臂屈伸");
    sgbqs->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    sgbqs->setIcon(0,QIcon(":/info/sgbqs.ico"));

    QTreeWidgetItem *ylywfn = new QTreeWidgetItem(xiong);
    ylywfn->setText(0,"哑铃仰卧飞鸟");
    ylywfn->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    ylywfn->setIcon(0,QIcon(":/info/ylywfn.ico"));

    QTreeWidgetItem *zzqxtx = new QTreeWidgetItem(xiong);
    zzqxtx->setText(0,"坐姿器械推胸");
    zzqxtx->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    zzqxtx->setIcon(0,QIcon(":/info/zzqxtx.ico"));

    //肩前中束
    QTreeWidgetItem *jianqianzhongshu = new QTreeWidgetItem(ui->actions,QStringList(QString("肩前中束")));
    jianqianzhongshu->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate);

    QTreeWidgetItem *glqpj = new QTreeWidgetItem(jianqianzhongshu);
    glqpj->setText(0,"杠铃前平举");
    glqpj->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    glqpj->setIcon(0,QIcon(":/info/glqpj.ico"));

    QTreeWidgetItem *gltj = new QTreeWidgetItem(jianqianzhongshu);
    gltj->setText(0,"杠铃推举");
    gltj->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    gltj->setIcon(0,QIcon(":/info/gltj.ico"));

    QTreeWidgetItem *gltl = new QTreeWidgetItem(jianqianzhongshu);
    gltl->setText(0,"杠铃提拉");
    gltl->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    gltl->setIcon(0,QIcon(":/info/gltl.ico"));

    QTreeWidgetItem *lmjcpj = new QTreeWidgetItem(jianqianzhongshu);
    lmjcpj->setText(0,"龙门架侧平举");
    lmjcpj->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    lmjcpj->setIcon(0,QIcon(":/info/lmjcpj.ico"));

    QTreeWidgetItem *lmjqpj = new QTreeWidgetItem(jianqianzhongshu);
    lmjqpj->setText(0,"龙门架前平举");
    lmjqpj->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    lmjqpj->setIcon(0,QIcon(":/info/lmjqpj.ico"));

    QTreeWidgetItem *lmjtl = new QTreeWidgetItem(jianqianzhongshu);
    lmjtl->setText(0,"龙门架提拉");
    lmjtl->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    lmjtl->setIcon(0,QIcon(":/info/lmjtl.ico"));

    QTreeWidgetItem *qxcpj = new QTreeWidgetItem(jianqianzhongshu);
    qxcpj->setText(0,"器械侧平举");
    qxcpj->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    qxcpj->setIcon(0,QIcon(":/info/qxcpj.ico"));

    QTreeWidgetItem *qxtj = new QTreeWidgetItem(jianqianzhongshu);
    qxtj->setText(0,"器械推举");
    qxtj->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    qxtj->setIcon(0,QIcon(":/info/qxtj.ico"));

    QTreeWidgetItem *smstj = new QTreeWidgetItem(jianqianzhongshu);
    smstj->setText(0,"史密斯推举");
    smstj->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    smstj->setIcon(0,QIcon(":/info/smstj.ico"));

    QTreeWidgetItem *ylcpj = new QTreeWidgetItem(jianqianzhongshu);
    ylcpj->setText(0,"哑铃侧平举");
    ylcpj->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    ylcpj->setIcon(0,QIcon(":/info/ylcpj.ico"));

    QTreeWidgetItem *ylqpj = new QTreeWidgetItem(jianqianzhongshu);
    ylqpj->setText(0,"");
    ylqpj->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    ylqpj->setIcon(0,QIcon(":/info/ylqpj.ico"));

    QTreeWidgetItem *yltj = new QTreeWidgetItem(jianqianzhongshu);
    yltj->setText(0,"哑铃推举");
    yltj->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    yltj->setIcon(0,QIcon(":/info/yltj.ico"));

    //肱二头
    QTreeWidgetItem *gongertou = new QTreeWidgetItem(ui->actions,QStringList(QString("肱二头")));
    gongertou->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate);

    QTreeWidgetItem *glwj = new QTreeWidgetItem(gongertou);
    glwj->setText(0,"杠铃弯举");
    glwj->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    glwj->setIcon(0,QIcon(":/info/glwj.ico"));

    QTreeWidgetItem *msywj = new QTreeWidgetItem(gongertou);
    msywj->setText(0,"牧师椅弯举");
    msywj->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    msywj->setIcon(0,QIcon(":/info/msywj.ico"));

    QTreeWidgetItem *qxwj = new QTreeWidgetItem(gongertou);
    qxwj->setText(0,"器械弯举");
    qxwj->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    qxwj->setIcon(0,QIcon(":/info/qxwj.ico"));

    QTreeWidgetItem *ylwj = new QTreeWidgetItem(gongertou);
    ylwj->setText(0,"哑铃弯举");
    ylwj->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    ylwj->setIcon(0,QIcon(":/info/ylwj.ico"));


    //肱三头
    QTreeWidgetItem *gongsantou = new QTreeWidgetItem(ui->actions,QStringList(QString("肱三头")));
    gongsantou->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate);

    QTreeWidgetItem *gdbqs = new QTreeWidgetItem(gongsantou);
    gdbqs->setText(0,"过顶臂屈伸");
    gdbqs->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    gdbqs->setIcon(0,QIcon(":/info/gdbqs.ico"));

    QTreeWidgetItem *glbqs = new QTreeWidgetItem(gongsantou);
    glbqs->setText(0,"杠铃臂屈伸");
    glbqs->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    glbqs->setIcon(0,QIcon(":/info/qlbqs.ico"));

    QTreeWidgetItem *ssbqs = new QTreeWidgetItem(gongsantou);
    ssbqs->setText(0,"绳索臂屈伸");
    ssbqs->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    ssbqs->setIcon(0,QIcon(":/info/ssbqs.ico"));



    //腿
    QTreeWidgetItem *tui = new QTreeWidgetItem(ui->actions,QStringList(QString("腿")));
    tui->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate);

    QTreeWidgetItem *bot = new QTreeWidgetItem(tui);
    bot->setText(0,"北欧挺");
    bot->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    bot->setIcon(0,QIcon(":/info/bot.ico"));

    QTreeWidgetItem *ddj = new QTreeWidgetItem(tui);
    ddj->setText(0,"倒蹬机");
    ddj->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    ddj->setIcon(0,QIcon(":/info/ddj.ico"));

    QTreeWidgetItem *fwkqs = new QTreeWidgetItem(tui);
    fwkqs->setText(0,"俯卧髋屈伸");
    fwkqs->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    fwkqs->setIcon(0,QIcon(":/info/fwkqs.ico"));

    QTreeWidgetItem *fwtwj = new QTreeWidgetItem(tui);
    fwtwj->setText(0,"俯卧腿弯举");
    fwtwj->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    fwtwj->setIcon(0,QIcon(":/info/fwtwj.ico"));

    QTreeWidgetItem *glsd = new QTreeWidgetItem(tui);
    glsd->setText(0,"杠铃深蹲");
    glsd->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    glsd->setIcon(0,QIcon(":/info/glsd.ico"));

    QTreeWidgetItem *hkj = new QTreeWidgetItem(tui);
    hkj->setText(0,"哈克机");
    hkj->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    hkj->setIcon(0,QIcon(":/info/hkj.ico"));

    QTreeWidgetItem *qxtqs = new QTreeWidgetItem(tui);
    qxtqs->setText(0,"器械腿屈伸");
    qxtqs->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    qxtqs->setIcon(0,QIcon(":/info/qxtqs.ico"));

    QTreeWidgetItem *zatqq = new QTreeWidgetItem(tui);
    zatqq->setText(0,"早安体前屈");
    zatqq->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    zatqq->setIcon(0,QIcon(":/info/zatqq.ico"));

    QTreeWidgetItem *ztyl = new QTreeWidgetItem(tui);
    ztyl->setText(0,"直腿硬拉");
    ztyl->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    ztyl->setIcon(0,QIcon(":/info/ztyl.ico"));

    QTreeWidgetItem *zztwj = new QTreeWidgetItem(tui);
    zztwj->setText(0,"坐姿腿弯举");
    zztwj->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    zztwj->setIcon(0,QIcon(":/info/zztwj.ico"));

    //腹肌
    QTreeWidgetItem *fuji = new QTreeWidgetItem(ui->actions,QStringList(QString("腹肌")));
    fuji->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate);

    QTreeWidgetItem *qxjf = new QTreeWidgetItem(fuji);
    qxjf->setText(0,"器械卷腹");
    qxjf->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    qxjf->setIcon(0,QIcon(":/info/qxjf.ico"));

    QTreeWidgetItem *sxjt = new QTreeWidgetItem(fuji);
    sxjt->setText(0,"上斜举腿");
    sxjt->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    sxjt->setIcon(0,QIcon(":/info/sxjt.ico"));

    QTreeWidgetItem *xcjt = new QTreeWidgetItem(fuji);
    xcjt->setText(0,"悬垂举腿");
    xcjt->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    xcjt->setIcon(0,QIcon(":/info/xcjt.ico"));

    QTreeWidgetItem *xxjf = new QTreeWidgetItem(fuji);
    xxjf->setText(0,"下斜卷腹");
    xxjf->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    xxjf->setIcon(0,QIcon(":/info/xxjf.ico"));

    //臀肌
    QTreeWidgetItem *tunji = new QTreeWidgetItem(ui->actions,QStringList(QString("臀肌")));
    tunji->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate);

    QTreeWidgetItem *tldkwz = new QTreeWidgetItem(tunji);
    tldkwz->setText(0,"弹力带髋外展");
    tldkwz->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    tldkwz->setIcon(0,QIcon(":/info/tldkwz.ico"));

    QTreeWidgetItem *gltc = new QTreeWidgetItem(tunji);
    gltc->setText(0,"杠铃臀冲");
    gltc->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    gltc->setIcon(0,QIcon(":/info/gltc.ico"));

    QTreeWidgetItem *gltq = new QTreeWidgetItem(tunji);
    gltq->setText(0,"杠铃臀桥");
    gltq->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    gltq->setIcon(0,QIcon(":/info/gltq.ico"));

    QTreeWidgetItem *qxkwz = new QTreeWidgetItem(tunji);
    qxkwz->setText(0,"器械髋外展");
    qxkwz->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    qxkwz->setIcon(0,QIcon(":/info/qxkwz.ico"));

    QTreeWidgetItem *ssht = new QTreeWidgetItem(tunji);
    ssht->setText(0,"绳索后踢");
    ssht->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
    ssht->setIcon(0,QIcon(":/info/ssht.ico"));

    connect(ui->actions,SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)),ui->actions,SLOT(editItem()));
}

dongzuoku::~dongzuoku()
{
    delete ui;
}

void dongzuoku::addNewActionclicked()
{
    bool ok;
    QString text = QInputDialog::getText(this, "添加新动作", "请输入动作名称: ", QLineEdit::Normal, "", &ok);
    if (ok && !text.isEmpty()){
        QTreeWidgetItem *par;
        par=ui->actions->currentItem();
        if (par!=nullptr){
            QTreeWidgetItem *child = new QTreeWidgetItem;
            child->setText(0,text);
            child->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
            par->addChild(child);
        }
    }
}

