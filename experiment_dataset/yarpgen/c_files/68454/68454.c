/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((((max((-7900110592015127890 == var_13), (max(-1105085141, 1485526016))))) ? 194 : -24980));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = ((!((min(((62 ? var_13 : var_12)), (((var_15 ? 8 : -7900110592015127881))))))));
        arr_3 [i_0] = (((((~((-851760540129534229 ? 1 : 114))))) ? (((max(144, 16178579255797160696)) - -70)) : -var_9));
        var_20 &= (((((var_4 ? var_8 : var_10))) ? (((var_7 ? ((var_12 ? -473119207 : var_17)) : 30392))) : (((((0 ? 62 : 239))) ? ((227 ? var_10 : var_15)) : var_2))));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        var_21 = (((!var_7) ? (max(var_2, -1617774485)) : (!var_9)));
        var_22 = max(((((max(32756, var_9))) ? (min(2640625211927358217, 13805789071881929060)) : 8)), (((var_8 ? (((-124 ? 153 : 70))) : var_5))));
    }
    #pragma endscop
}
