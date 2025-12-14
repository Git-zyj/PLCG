/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] |= (((1 ? 173 : (arr_2 [i_1 + 2]))));

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    var_20 = max((arr_8 [i_0] [1] [i_1 + 4]), ((((-(arr_7 [i_2 + 1] [i_1 - 1] [i_1 + 4]))) | (arr_8 [i_0] [i_1 + 2] [i_2]))));
                    var_21 = ((((var_16 ? (arr_0 [i_2 + 1] [i_1 + 2]) : var_0)) | ((min((arr_2 [i_1 + 3]), var_15)))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    var_22 = ((254 ? (arr_5 [i_1 + 4]) : (-2253792991374467069 && -3414666452612524121)));
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 24;i_5 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1 + 3] [i_3] [i_4] [i_5 - 2] = (1 % (255 + 0));
                                arr_18 [i_0] [i_1] [i_0] [i_4] [i_5] = (~-580335401828133573);
                                var_23 = (((var_14 || var_14) | ((1 ? var_9 : var_0))));
                            }
                        }
                    }

                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        arr_21 [i_3] [i_0] [i_1] [i_6] = (4184 ? var_3 : 1);

                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            arr_25 [i_0] = (((arr_8 [i_0] [i_3] [i_1]) || 32767));
                            arr_26 [i_0] [i_0] [i_0] [i_1] [i_3] [i_6 + 2] [i_7] = 104;
                            var_24 = arr_8 [21] [21] [i_6 + 2];
                            var_25 -= -3414666452612524142;
                            var_26 = (min(var_26, var_10));
                        }
                    }
                    var_27 = (max(var_27, var_14));
                }
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 24;i_10 += 1)
                        {
                            {
                                var_28 = (max(var_28, (((((((arr_19 [i_0] [i_1 + 4] [i_9]) ? (arr_19 [i_0] [20] [i_0]) : 173))) ? (((arr_19 [i_8] [i_8] [i_8]) ? (arr_19 [i_0] [i_0] [i_0]) : -4)) : var_19)))));
                                var_29 += 52657;
                                arr_34 [i_0] [i_1] [12] [3] [i_0] |= (144114638320041984 >= 15);
                                arr_35 [i_1] [i_1] [i_8] [i_9] [i_1] = ((((max(((var_12 ? var_19 : var_10)), (((~(arr_28 [i_0] [i_0] [i_0] [i_10]))))))) ? (((min((254 == 8116814169114924406), (-29723 && var_10))))) : var_1));
                                arr_36 [i_0] [21] [i_0] [i_0] = (min((((min(0, 3414666452612524120)) * (min(1, (arr_20 [i_9 - 1]))))), ((max(-1, 3135140924)))));
                            }
                        }
                    }
                    arr_37 [i_8] [i_8] [2] = (((((var_7 << (247 - 247))) - var_6)));
                }
                var_30 = (min(-17115134446538629773, -3634693232));
                var_31 ^= (580335401828133575 - -580335401828133573);
            }
        }
    }
    var_32 = (((var_10 % 580335401828133575) ? ((var_13 ? (1 | 580335401828133572) : (var_7 || var_1))) : ((4611686018427387904 << (3971228019 - 3971228019)))));
    var_33 = (1 ^ ((var_8 / ((var_7 ? var_16 : var_4)))));
    #pragma endscop
}
