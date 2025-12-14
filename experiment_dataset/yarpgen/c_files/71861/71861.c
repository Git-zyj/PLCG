/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    var_17 = ((4503599627368448 ? 246 : (((((11421585495482926205 ? var_14 : 886338398))) ? ((-6050 ? 27 : var_12)) : var_3))));
    var_18 = (32767 && 6969052300407926311);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = ((!(((var_7 ? 536870912 : (arr_1 [i_0] [i_0]))))));
        arr_4 [i_0] = (max(-14588, -8));
        arr_5 [i_0] = ((max((arr_1 [i_0] [i_0]), (arr_0 [i_0] [i_0]))));
        arr_6 [i_0] = var_4;
    }
    var_19 |= var_9;
    #pragma endscop
}
