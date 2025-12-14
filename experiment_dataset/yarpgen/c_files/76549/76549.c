/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_11 = ((((((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_2))) ? 1 : (((arr_1 [i_0 + 1] [i_0]) - var_3)))) - (arr_1 [i_0] [i_0])));
        var_12 = ((-((((max(13, (arr_1 [i_0] [i_0])))) ? 25 : var_7))));
    }
    var_13 = (~var_0);
    var_14 = ((19610 ? 1 : 4294967295));
    var_15 = var_5;
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 18;i_2 += 1)
        {
            {
                arr_7 [i_1] = 40;

                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    arr_10 [7] [i_1] [i_2] = ((~(min(((67581198 ? (arr_8 [i_1] [i_1] [i_2] [i_1]) : (arr_4 [i_1 - 1]))), ((-(arr_6 [i_1] [i_1] [i_1])))))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] = (max(((-(arr_11 [i_1] [1] [i_1] [i_1]))), -19610));
                                var_16 = (min((((max(12533, var_8)))), (((arr_9 [i_5] [i_5] [i_1 + 1] [i_1]) ? (arr_3 [i_1]) : (arr_1 [i_1] [i_1])))));
                                arr_17 [i_1] [i_4] [i_3] [i_2] [i_1] = ((204567400602654219 ? (arr_13 [i_5] [i_4] [i_3] [i_2 - 4]) : (max(18446744073709551615, var_3))));
                            }
                        }
                    }
                    arr_18 [i_1] [i_2] = ((-31 > (((((var_6 ? var_2 : 511)) <= var_6)))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    arr_21 [i_6] [i_1] [i_1] [i_1] = -var_6;
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_17 = ((!(arr_12 [i_1] [i_1] [i_6] [i_7] [i_8] [i_8])));
                                arr_28 [i_1] [i_1] [i_2] [i_1] [i_1] [i_1] [i_8] = ((-(var_8 & 1321391534)));
                                arr_29 [i_1] [i_1 + 1] [i_1] = (var_1 - var_3);
                                var_18 = (arr_14 [i_7] [i_2 - 1] [i_6] [i_7] [i_7 + 2] [i_2 - 3] [i_8]);
                                var_19 = (!var_9);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
