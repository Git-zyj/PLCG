/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_14 *= ((((15445001412614136557 ? (((arr_0 [i_0]) ^ var_10)) : ((var_12 ? (arr_0 [i_0]) : 18)))) > (((((0 ? 63 : (arr_1 [i_0])))) ? ((max(205, 0))) : 345395195816174075))));
        var_15 = var_8;
        var_16 = (max(var_16, ((max((((((arr_1 [8]) && var_9)) ? (arr_0 [i_0]) : (arr_1 [i_0]))), (((((min((arr_0 [2]), 0))) && (((-24 ? 4071 : -63)))))))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_17 = ((((!(-127 - 1))) ? ((16075947710966468994 ? 16779758173509071440 : var_4)) : 0));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_18 = var_6;
                            var_19 = (max(var_19, (arr_10 [i_3 + 1] [i_1])));
                            var_20 = (min(var_20, (arr_11 [i_1] [i_2])));
                        }
                    }
                }
            }
            var_21 = (min(var_21, (~1)));
            var_22 = (max(var_22, (arr_8 [i_1] [i_1] [i_2 + 2])));
            arr_18 [i_1] [2] [i_2 + 1] = var_11;
            var_23 += (!7304);
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
    {
        arr_22 [0] = (arr_15 [i_6] [i_6] [11] [i_6] [i_6]);
        var_24 = (!0);
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
    {
        var_25 = var_9;
        arr_25 [i_7] = ((!((min((arr_20 [i_7] [i_7]), (arr_0 [i_7]))))));
    }
    #pragma endscop
}
