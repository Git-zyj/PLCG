/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_14 ^= (((arr_3 [i_0 - 1] [i_0 - 1]) ? (arr_0 [i_0 - 1] [i_0 - 1]) : 8589764885188410811));
                        var_15 = var_8;

                        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_0 [i_0] [i_0]) || ((((arr_3 [i_4] [i_4]) ? var_3 : var_10)))));
                            arr_15 [i_0] [i_0] = (-2000367496 ? (((arr_13 [i_0] [i_0] [i_0 + 2] [i_3] [i_3]) ? var_13 : (arr_2 [i_1 + 4]))) : 65528);
                            var_16 = var_1;
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            var_17 = (arr_11 [i_1 + 1] [i_1 + 1] [i_0 + 2] [i_0 - 1] [i_0 + 1]);
                            var_18 = (arr_8 [i_0] [i_2] [i_5] [i_3]);
                            arr_20 [i_0] [i_1] [i_5] [i_3] [i_5] = (((!-9733) || var_5));
                            var_19 = var_4;
                        }
                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            arr_24 [i_0] [i_3] [i_6] = var_0;
                            var_20 = 2000367497;
                        }
                        for (int i_7 = 3; i_7 < 15;i_7 += 1)
                        {
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((65528 ? 4263764360898101811 : 65532));
                            arr_28 [i_0 + 1] [i_1] [i_0 + 1] = 0;
                        }
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        arr_31 [i_0] [i_8] [i_8] [i_0] [i_0] = (!var_1);
                        arr_32 [i_8] [i_8] = ((!(((65532 ? var_8 : -2000367496)))));
                        arr_33 [i_0] [i_1] [i_8] [i_8] [i_8] = (((arr_6 [i_0 + 1]) ? (arr_6 [i_0 + 1]) : var_5));
                    }
                    var_21 = (((21 <= 6) ? 198 : ((var_2 ? 592900887 : var_1))));
                }
                var_22 = arr_0 [i_0 + 2] [i_1 - 2];
            }
        }
    }
    var_23 = (min(var_23, var_0));
    var_24 |= var_7;
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 8;i_10 += 1)
        {
            {
                var_25 = var_0;
                arr_38 [i_10 - 3] [i_9] [i_10] = ((((max((((var_10 ? (arr_18 [i_9] [i_9] [i_9] [i_9] [i_9]) : (arr_8 [i_9] [i_9] [i_9] [i_9])))), (max(0, var_6))))) ? var_1 : (~5911138773161869077)));
                arr_39 [i_9] [i_9] = var_11;
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 11;i_12 += 1)
                    {
                        {
                            var_26 &= (min(-2000367494, (((arr_1 [i_10 + 1] [i_11 - 1]) ? (arr_1 [i_10 + 2] [i_11 + 1]) : (arr_1 [i_10 - 3] [i_11 + 1])))));
                            var_27 = var_11;
                            arr_45 [i_9] [i_10] [i_11] [i_9] = (((~(arr_44 [i_9] [i_9] [i_9] [i_9]))));
                            var_28 = (max(22169, 9223372036854775807));
                        }
                    }
                }
                arr_46 [i_9] = (arr_12 [i_9] [i_9] [i_9] [i_9] [i_9]);
            }
        }
    }
    var_29 = ((min(var_10, ((17294879636844818369 ? var_5 : var_9)))));
    #pragma endscop
}
