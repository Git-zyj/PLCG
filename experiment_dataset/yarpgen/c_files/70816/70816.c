/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_8;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((max(var_18, (arr_0 [i_0] [i_0])))) >> (-1564904329965004716 + 1564904329965004729)));
        var_21 = (!-3236540077794269005);
        arr_4 [i_0] = (((arr_1 [i_0]) ? -15565 : (~47288072)));
        arr_5 [i_0] = (((((!((min(5668119369484408220, -1014356789)))))) + (((!-5420) << ((((2147483647 ? (arr_2 [i_0]) : -97)) - 190))))));
        var_22 = 32750;
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        var_23 = (max((-32767 - 1), ((32750 ? (((((arr_6 [i_1 + 1] [i_1]) != (arr_2 [i_1]))))) : (((arr_8 [i_1]) ? var_3 : var_5))))));
        var_24 = ((((arr_6 [i_1 + 1] [i_1]) ? (arr_6 [i_1 - 2] [i_1]) : 5414)) * var_2);
    }
    var_25 = (max(var_25, var_13));
    var_26 = (max(var_26, var_4));
    #pragma endscop
}
