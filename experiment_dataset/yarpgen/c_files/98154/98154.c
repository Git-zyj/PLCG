/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0 + 1]);
        arr_3 [i_0] = 1;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_1] = (arr_6 [i_1] [i_1]);

                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            var_10 = -var_8;
                            arr_17 [i_1] = (((arr_6 [i_1] [i_1]) ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_3])));
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_11 = ((var_8 ? (arr_0 [i_0 - 1]) : var_2));
                            var_12 &= (arr_8 [i_0 - 1]);
                            var_13 -= 14836487882318384092;
                        }

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_14 = (((arr_10 [18] [i_1] [i_2] [i_3]) ? (arr_14 [i_0 + 2] [i_0 + 2] [i_0 + 3] [i_0] [i_3]) : (arr_15 [i_0] [i_1] [3] [i_1] [i_3] [i_6])));
                            arr_23 [i_0] [i_1] [i_2] [i_1] [4] = (arr_8 [i_0]);
                            arr_24 [i_0] [i_0] [i_0] [i_2] [i_0] |= (arr_0 [5]);
                            arr_25 [i_0] [i_3] [i_1] [i_3] [i_0] = ((50350 ^ (arr_10 [i_1] [i_1] [0] [i_3])));
                        }
                        for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            var_15 ^= ((109 ? (arr_1 [i_0 + 1]) : (arr_27 [13] [11] [i_2] [i_1] [i_1] [i_0])));
                            var_16 = (min(var_16, ((((arr_11 [i_7] [i_7] [i_2] [i_2] [i_0 + 3] [i_0]) ? var_9 : (arr_22 [i_7] [11] [i_7 + 2] [i_7 + 1] [i_0 - 1] [0]))))));
                            var_17 = 89;
                            var_18 = ((-(!5813896518604962419)));
                            var_19 = var_1;
                        }
                        for (int i_8 = 1; i_8 < 16;i_8 += 1) /* same iter space */
                        {
                            arr_34 [i_0] [i_1] [i_2] [i_3] [i_0] = (((arr_30 [i_0 + 2] [i_0 + 1] [8] [i_0 - 1] [i_0] [i_0] [0]) | 4003410750));
                            arr_35 [i_0] [i_0] [1] [i_1] [i_8] = (135 / 8880602508489483797);
                            var_20 = -8622288995289019104;
                        }
                    }
                }
            }
        }

        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            arr_38 [i_9] [i_0 + 2] = ((-((-45 ? (-127 - 1) : -64))));
            var_21 &= (arr_26 [i_0 + 3] [i_0] [i_0 + 3] [i_0] [i_0 + 3]);
        }
        arr_39 [i_0 + 1] = (((((arr_31 [10] [10] [1] [i_0] [i_0 + 1] [10] [8]) ? 14932956437819077849 : var_8)) - (arr_4 [2])));
    }
    var_22 = var_4;
    #pragma endscop
}
