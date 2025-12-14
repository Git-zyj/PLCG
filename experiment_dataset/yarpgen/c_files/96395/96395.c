/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((((((((max(var_19, 2219790065365779160))) ? 2219790065365779174 : -var_15))) == var_12)))));
    var_21 |= var_12;
    var_22 = ((var_0 ? var_8 : (var_5 <= var_5)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_23 -= -2219790065365779160;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] |= ((1038007310 || (7548700498556272704 <= -1038007329)));
                    arr_9 [2] [i_1] [2] [i_1] = (((-2219790065365779160 + 9223372036854775807) >> (9284142250267475065 - 9284142250267475024)));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        var_24 -= (arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1]);
                        var_25 = (min(var_25, (!var_8)));

                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            arr_16 [i_0 - 1] [12] [i_0] [i_0 + 1] [i_0] = ((678958163236830005 ? var_12 : 197));
                            arr_17 [10] [6] [4] [6] [i_4 - 2] [i_4 - 2] [i_4 + 4] = (!1);
                            arr_18 [8] [i_1] [11] [1] [i_1] [i_1] = (-499062211501275693 ^ 76);
                            var_26 = (min(var_26, (((var_19 && (((180 ? (-127 - 1) : 2219790065365779174))))))));
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            var_27 &= var_8;
                            var_28 = (min(var_28, (((-(-1 >= -28272))))));
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_0] [i_0] [i_0 - 1] [i_0] [1] [i_0] [i_0 - 1] = (!var_10);
                            var_29 = (!var_2);
                            arr_24 [i_0] [i_0] [i_0] [2] [i_0] = 2219790065365779174;
                        }
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                    {
                        var_30 = 48;

                        for (int i_8 = 3; i_8 < 11;i_8 += 1)
                        {
                            arr_30 [i_0] [i_8] [i_0] [i_0 + 1] [i_0] [0] = -8807506978726711262;
                            var_31 = ((var_15 <= (-1657763530 == var_6)));
                        }
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            arr_33 [i_2] [11] [i_2] [i_2] [i_2] = -5476347192661947786;
                            arr_34 [i_0 - 1] [i_0 - 1] [i_0] = (-4726 | (arr_21 [i_0 - 1] [i_0 - 1]));
                            var_32 = ((678958163236829990 << (var_1 - 1222402605)));
                            arr_35 [7] [i_1] [i_1] [i_1] = (-2147483647 - 1);
                        }
                        var_33 -= (((var_6 > var_14) / (arr_26 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
