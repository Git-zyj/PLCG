/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = ((~((-var_1 | ((max(0, (arr_2 [i_0]))))))));
                arr_6 [i_0] = (((arr_1 [i_0] [i_1]) <= ((min(1, 57586)))));
                var_20 = (~137438953471);
                var_21 = (((44 > (-127 - 1))));
            }
        }
    }
    var_22 = var_16;

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_9 [i_2] |= (!var_15);
        arr_10 [i_2] = var_2;
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_23 = arr_12 [i_3];
        var_24 = ((-(((var_7 + 2147483647) << (((arr_4 [i_3]) - 122))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 23;i_6 += 1)
            {
                {
                    var_25 = (max(var_25, (~var_13)));
                    var_26 = (min(var_26, (((var_15 ? ((((arr_13 [i_6 + 1]) < (arr_13 [i_6 - 2])))) : (!18446743936270598146))))));
                    arr_20 [i_4] [i_5] [i_5] = (((arr_16 [i_6 - 2] [i_6 - 2] [i_6 + 1]) ? (min(2733030886, (min(1, var_11)))) : ((min(-1, (((!(arr_19 [i_6] [i_4] [i_4] [i_4])))))))));
                }
            }
        }
        arr_21 [24] &= (arr_15 [i_4]);
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        var_27 = (min(var_27, 61));
        arr_26 [i_7] [i_7] = var_4;
        var_28 = 32767;
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            {

                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_29 = ((((min((arr_16 [i_8] [i_9] [i_8]), 1)))) ? (((1023 ? (arr_33 [i_10]) : ((56 + (arr_5 [18] [i_9] [18])))))) : (arr_13 [i_8]));
                                var_30 = (min((arr_35 [9] [9] [5] [i_12]), (arr_14 [i_8] [i_8])));
                                var_31 = (min(var_31, ((min((arr_22 [i_8]), var_5)))));
                            }
                        }
                    }
                    var_32 = (max(var_32, ((((~10709871027047785489) < 2019580964586750393)))));
                }
                var_33 = ((9223372036854775800 ? 236 : 0));
            }
        }
    }
    var_34 = var_5;
    #pragma endscop
}
