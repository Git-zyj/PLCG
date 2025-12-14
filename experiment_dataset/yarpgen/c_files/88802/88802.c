/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] = 10043;
        arr_4 [i_0] [i_0 + 3] = (~var_17);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] |= var_10;
        arr_9 [i_1] [i_1] = (55499 && ((max(85, 6535536506814906505))));
        var_18 = (min(var_18, ((max((max(var_0, var_1)), (((17691 ? (arr_7 [10]) : 47844))))))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        var_19 |= ((47845 ? -7522881237958528815 : (12500638696758153432 / 2738560289405629090)));
        arr_12 [i_2] = (arr_6 [i_2 + 2]);
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 24;i_3 += 1)
    {
        arr_16 [i_3] = 105;
        var_20 = 8;
        arr_17 [i_3] [8] = 16298;
        arr_18 [i_3] [i_3] = (!0);

        for (int i_4 = 2; i_4 < 23;i_4 += 1) /* same iter space */
        {
            arr_21 [i_3 + 1] = (arr_15 [i_3 + 1] [1]);
            var_21 = -13097;
            var_22 = ((((((arr_13 [i_3]) ? 0 : 3))) ? 0 : -6202118123498785989));
            var_23 ^= (arr_20 [i_3] [i_3 - 1] [i_4]);
        }
        for (int i_5 = 2; i_5 < 23;i_5 += 1) /* same iter space */
        {
            arr_26 [4] = -0;

            for (int i_6 = 2; i_6 < 22;i_6 += 1)
            {
                arr_30 [i_3] [i_5 - 1] = var_11;
                arr_31 [i_6] = (var_11 ? ((10043 ? var_12 : var_1)) : var_0);
            }
        }
    }
    var_24 -= (((min((~1), var_0)) >= (((var_9 == ((-117 ? var_3 : var_17)))))));
    var_25 |= var_7;
    #pragma endscop
}
