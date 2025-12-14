/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_13 = ((!(((max(5257932285514791183, 17004113612801762)) < (((min(var_5, (arr_14 [i_3] [i_3] [i_2] [14] [i_0])))))))));
                                arr_16 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] = (!0);
                            }
                        }
                    }
                    var_14 = (!(arr_2 [i_0]));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_15 = ((((((arr_20 [i_6] [i_5]) * 23))) ? ((((arr_22 [i_6]) ? var_1 : var_7))) : (((arr_19 [i_5]) << (2785902341124407371 - 2785902341124407346)))));
            var_16 = ((!(((var_12 ? (arr_22 [i_5]) : var_2)))));
            var_17 = 14;
        }
        var_18 = (((arr_19 [i_5]) ? (arr_19 [i_5]) : (arr_17 [i_5])));
        var_19 = 18729;
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_26 [i_7] [i_7] = (((arr_1 [i_7]) + ((((!(!127)))))));
        var_20 = var_9;
        arr_27 [i_7] = (!0);
        var_21 = (!18729);
    }
    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {
        var_22 = (((arr_21 [20]) ? (arr_31 [i_8]) : var_6));
        arr_32 [16] = (min((-127 - 1), (!var_6)));
        arr_33 [i_8] [1] = 2785902341124407371;
    }
    /* LoopNest 3 */
    for (int i_9 = 1; i_9 < 16;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    arr_40 [i_9] [i_11] [i_9] [i_9] = (max(0, 1));
                    var_23 = (!var_0);
                }
            }
        }
    }
    var_24 = 15872;
    #pragma endscop
}
