/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 ^= -15264604594208205586;

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_15 = (min((((max(var_9, 1)) + 1)), (max(10214139299795513839, var_8))));
                        arr_11 [1] [i_0] = (((((2878572230 == (((((arr_3 [i_0] [14]) && -170108136))))))) - 255));
                        arr_12 [i_0] [i_2] [i_0] = 0;
                        arr_13 [1] [i_0] [i_2] = (max(1, (!36)));
                    }
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        var_16 = var_13;
                        arr_16 [i_0] = (((((-(var_12 <= var_13)))) ? 870955158 : 25));

                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            arr_20 [i_0] [i_0] = 1;
                            var_17 = (max(var_17, (arr_8 [i_0 + 2] [i_2] [i_0 - 1])));
                        }
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        arr_25 [i_0] = ((~(max((arr_7 [i_0 - 1] [i_0 - 1] [i_0]), 1825677370))));

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_18 = (max(var_18, ((min((max((-629580782 / 250), var_8)), (!-0))))));
                            var_19 = min(((var_11 - (arr_22 [i_0] [i_0] [i_0 - 1] [i_1]))), (max(-24, 248)));
                        }
                        arr_29 [i_0] [i_1] [9] = ((((min(var_9, var_0))) ? (((((((arr_10 [i_0] [8] [i_2] [i_0]) ? var_1 : var_4))) && (!var_11)))) : ((((239 || var_6) && 1)))));
                        arr_30 [i_0 - 1] [i_0] [i_2] [1] = (!var_0);
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_20 = (max(var_20, var_10));
                            arr_35 [i_0] [i_0 + 1] [13] [i_0] [13] [i_0] [i_0] = (((arr_21 [i_0 + 1]) ? (!var_4) : ((1 ? (arr_18 [6] [i_1] [i_0] [i_9] [i_0] [0]) : 36))));
                            var_21 = (min(var_21, (((var_11 ? -133139335 : (arr_27 [i_0] [i_2] [i_0] [i_0 + 2] [8] [i_0]))))));
                            arr_36 [i_8] [i_0] [i_8 - 1] [i_8] [i_8 - 1] [2] [i_8 - 1] = ((arr_15 [i_9] [i_8] [i_8 - 1] [i_2] [i_0 + 1]) ? (arr_15 [i_9] [i_8] [i_8 - 1] [i_2] [i_0 + 2]) : var_3);
                            var_22 = (max(var_22, 65));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_40 [i_0] [i_0 + 2] [i_0] [i_0] [i_0] = arr_19 [i_0 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1];
                            arr_41 [11] [i_1] [i_1] [i_1] [i_0] = (((arr_34 [i_0 - 1] [i_0] [i_0 + 2] [i_0] [i_0 + 1] [i_8 - 1]) ? 14594 : (arr_39 [i_0] [i_0])));
                            arr_42 [i_0] [i_10] = 1;
                            var_23 = (max(var_23, (32767 || var_10)));
                        }
                        for (int i_11 = 3; i_11 < 15;i_11 += 1)
                        {
                            arr_46 [i_0] [7] [i_8 + 1] [i_0] = (((arr_7 [i_8 - 1] [i_8 + 1] [i_0]) ? 0 : (arr_7 [i_8 - 1] [i_8 - 1] [i_0])));
                            var_24 = (max(var_24, var_1));
                        }

                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            arr_49 [10] [10] [i_0] [i_8 - 1] [i_12] = var_2;
                            arr_50 [i_0] [0] [i_2] [i_1] [i_0] = (((arr_48 [i_8 + 1] [i_8] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1]) <= var_3));
                            var_25 = 133693440;
                            var_26 = (max(var_26, ((((arr_2 [i_0 + 2]) >= var_8)))));
                            arr_51 [i_0 - 1] [i_1] [14] [i_0] = (!var_5);
                        }
                        var_27 = 3424012135;
                        arr_52 [i_0] [i_2] [i_2] [i_1] [i_0] [i_0] = -var_10;
                        var_28 = (max(var_28, ((((var_12 + 2147483647) >> (111 - 99))))));
                    }
                    arr_53 [6] [i_0] [i_0 + 2] = (((((var_13 ? 108094434 : var_12)))) ? (arr_23 [i_0 + 1] [1] [i_0 - 1] [i_0 + 2]) : (var_2 << 0));
                }
            }
        }
        arr_54 [i_0] = ((((min((var_6 / 1477964515), ((var_7 ? 182 : var_2))))) * (8796093022207 + var_4)));
    }
    var_29 = ((var_2 ? 32767 : (var_13 / var_8)));
    var_30 = -1743210229;
    #pragma endscop
}
