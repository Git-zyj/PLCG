/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    var_20 = ((!((!(((var_15 ? 1586603606 : 2400320870)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_21 = ((((((arr_2 [1] [i_2] [i_0]) ? (arr_6 [2] [i_1] [i_2]) : var_14))) ? (((arr_7 [i_0] [i_1] [i_2] [i_3] [9]) ? (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0] [i_0] [i_3]))) : 83));
                            var_22 = var_1;

                            for (int i_4 = 3; i_4 < 16;i_4 += 1)
                            {
                                arr_12 [i_4] [i_2] [i_4] = var_5;
                                var_23 = var_7;
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_24 = (!173);
                                arr_15 [i_5] [i_5] [i_2] [i_5] [i_5] [2] [i_3] = var_12;
                                var_25 = ((~(((~82) ? var_18 : (~var_3)))));
                            }
                            for (int i_6 = 0; i_6 < 18;i_6 += 1)
                            {
                                var_26 = ((~(var_18 ^ 2147483647)));
                                var_27 = 173;
                                var_28 = var_5;
                                arr_19 [i_0] [16] [i_2] [i_2] [i_3] [i_2] = (((arr_9 [i_6] [i_3] [i_2] [i_1] [4] [i_0]) ^ (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])));
                                arr_20 [i_3] [8] = ((-((-28798 ? 1 : 1))));
                            }
                        }
                    }
                }
                var_29 = (max(var_10, (((-(arr_1 [i_1] [i_0]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 8;i_8 += 1)
        {
            {
                var_30 = (arr_22 [1]);
                var_31 = (~var_1);

                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    var_32 = var_1;
                    arr_30 [i_9] [i_7] [i_7] [i_7] = (~var_17);
                    arr_31 [9] [i_8 + 1] [i_8 + 1] [9] = (max((~var_14), 0));
                }
            }
        }
    }
    #pragma endscop
}
