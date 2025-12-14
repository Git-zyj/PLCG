/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;
    var_18 = var_4;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_19 = (arr_1 [1] [1]);
            var_20 += ((((~(arr_0 [i_0 + 4] [i_0 + 2]))) % (((((var_12 ? -126 : var_13))) ? var_11 : ((39830 ? 52384 : 31155))))));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_21 = (min(var_21, (((((((((arr_5 [i_0] [i_2]) >= 32256)) ? (~var_8) : ((((arr_6 [i_2] [i_0]) && (arr_1 [i_0 - 2] [i_2]))))))) ? 42945 : (((var_0 ^ -5115102214908981822) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (((var_4 + 2147483647) >> (2347358593 - 2347358590))))))))));
            var_22 = (min(var_22, 24163));
            var_23 = arr_5 [i_0] [i_0];
        }
        var_24 = (((((arr_6 [i_0] [i_0]) >= 0)) ? (1 & var_8) : 83));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_25 -= (arr_6 [i_3] [i_3]);
        var_26 = (((arr_8 [i_3]) << 1));
        var_27 = (max(var_27, var_13));
        var_28 = (((((arr_9 [i_3] [i_3]) / var_9))) ? (arr_9 [i_3] [i_3]) : (((arr_9 [i_3] [i_3]) + (arr_9 [i_3] [i_3]))));
    }
    #pragma endscop
}
