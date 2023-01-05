#include "operator.h"

    void Operator::setHP(int h)
    {
        HP = h;
    }
    void Operator::setAP(int a)
    {
        AP = a;
    }
    void Operator::set_view_range(int vr)
    {
        view_range = vr;
    }
    void Operator::set_move_range(int mvr)
    {
        move_range = mvr;
    }
    void Operator::setInventoryItem(int index, Item i)
    {
        inventory[index] = i;
    }
    void Operator::setdS(bool c)
    {
        can_dS = c;
    }
