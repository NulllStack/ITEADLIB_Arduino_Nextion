#include "Nextion.h"

NexCheckbox c0 = NexCheckbox(0, 1, "c0");
NexCheckbox c1 = NexCheckbox(0, 2, "c1");
NexCheckbox c2 = NexCheckbox(0, 3, "c2");
NexText t0 = NexText(0, 4, "t0");
bool cbStatus[3] = {0};
String btnName[] = {"c0 ","c1 ","c2 "};

void c0callback(void *ptr)
{
    NexCheckbox *cb = (NexCheckbox *)ptr;
    uint32_t status;
    cb->getValue(&status);
    cbStatus[0] = status;
    changeTxt();
}

void c1callback(void *ptr)
{
    NexCheckbox *cb = (NexCheckbox *)ptr;
    uint32_t status;
    cb->getValue(&status);
    cbStatus[1] = status;
    changeTxt();
}

void c2callback(void *ptr)
{
    NexCheckbox *cb = (NexCheckbox *)ptr;
    uint32_t status;
    cb->getValue(&status);
    cbStatus[2] = status;
    changeTxt();
}

void changeTxt()
{
    t0.setText("");
    String text;
    for(int i=0; i<3; i++)
    {
        if (cbStatus[i])
        {
            text += btnName[i];
        }
    }
    if (text == "")
    {
        t0.setText("Not selected");
    }
    else
    {
        text += "selected";
        t0.setText(text.c_str());
    }
    
}

NexTouch *nex_listen_list[] =
{
    &c0,
    &c1,
    &c2,
    NULL
};

void setup(void)
{
    nexInit(Serial1);
    c0.attachPop(c0callback, &c0);
    c1.attachPop(c1callback, &c1);
    c2.attachPop(c2callback, &c2);
    dbSerialPrintln("Init Finish");
}

void loop(void)
{
    nexLoop(nex_listen_list);
}
