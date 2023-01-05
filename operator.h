#include "entity.h"
#include "item.h"
class Operator : public Entity 
{
public: 
    void setHP(int h);
    void setAP(int a);
    void set_view_range(int vr);
    void set_move_range(int mvr);
    void setInventoryItem(int index, Item i);
    void print_info();
    void setdS(bool c);
protected: 
    int HP;
    int AP;
    int view_range;
    int move_range;
    Item inventory[2];
    bool can_dS;
};