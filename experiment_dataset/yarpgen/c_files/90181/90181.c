/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_8);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_18 *= ((((1 ? var_14 : var_0)) > ((((arr_2 [i_0] [i_0]) || var_0)))));
        arr_3 [i_0] = -883915168;
        var_19 = ((((((arr_0 [i_0 + 1]) ^ 0))) % ((-883915168 ? var_11 : (arr_1 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        var_20 = (((arr_4 [i_1 + 2]) != (arr_5 [i_1 - 2])));
        arr_6 [i_1 - 2] [i_1 + 2] = (arr_5 [i_1 - 3]);
        var_21 = ((-(1 | var_0)));
    }
    var_22 = (~var_16);
    var_23 += 1;
    #pragma endscop
}
