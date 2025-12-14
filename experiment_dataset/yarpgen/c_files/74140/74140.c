/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_8 [8] &= var_11;

                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    arr_13 [i_0] [i_1] [i_1] [4] |= min((((((arr_5 [i_0] [11]) ? (arr_11 [i_0] [i_0] [i_0]) : 10661)))), (((((var_8 ? 3817869060 : 112))) ? -506727764 : var_6)));
                    arr_14 [15] [i_0] = (arr_5 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_16 = ((~(~var_15)));
                                arr_20 [i_0] [i_0] = -1;
                                arr_21 [i_4] [i_0] [i_2] [i_0] [i_4] [i_4] [i_4] = ((!(((((max(var_11, var_4))) ? 111 : ((min(1, 1))))))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_30 [i_0] [i_0] [i_5] [12] [i_7] = (15972828603883928383 || 2876778695);
                                arr_31 [i_7] [i_6] [i_5] [i_0] [i_1] [i_0 + 1] [i_0] = ((var_11 ? ((1 ? var_9 : var_10)) : (arr_28 [4] [i_1] [i_1] [8] [2] [i_6] [2])));
                                arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2] = (!var_10);
                                var_17 = (max(var_17, var_12));
                            }
                        }
                    }
                    var_18 *= (arr_10 [i_0] [i_0] [i_0 - 1] [i_0 - 1]);
                }
                for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                {
                    arr_35 [i_0] [i_8] = var_2;
                    arr_36 [i_0] [i_0] [i_0] = (min(((max(506727731, 1418188610))), (((arr_16 [i_0 - 1] [i_0] [i_0 - 1] [i_1]) ? (arr_16 [i_0] [i_0] [i_0 - 1] [i_8]) : var_11))));
                    var_19 = (max(var_19, var_14));
                    var_20 = (((((!((((arr_9 [i_0] [i_1] [3] [i_0]) | (arr_2 [i_1] [i_1]))))))) / (arr_6 [i_0 + 2] [i_0 + 2])));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                {
                    var_21 = (((((arr_5 [i_0] [8]) || 2353880738)) ? var_13 : (15220760244866031782 > var_14)));
                    var_22 ^= var_6;
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        {
                            arr_46 [i_1] [i_0] [11] [i_10] = ((var_6 % ((min((max(-4111395044890734580, var_6)), ((min(-506727753, var_5))))))));

                            for (int i_12 = 1; i_12 < 14;i_12 += 1)
                            {
                                arr_50 [i_10] [i_1] [i_12 + 3] [i_11] [i_11] [i_0] = ((1 >= (arr_3 [i_1])));
                                arr_51 [i_0] = var_15;
                                arr_52 [i_0] [3] [i_0] = (min(var_4, (((!((((arr_29 [6] [i_11] [i_0] [i_11] [i_12] [i_10] [2]) | var_8))))))));
                            }
                            for (int i_13 = 1; i_13 < 1;i_13 += 1)
                            {
                                arr_55 [i_13 - 1] [i_0] [i_11] [i_10] [14] [i_0] [i_0] = var_8;
                                arr_56 [i_0] [i_0] [i_13] = ((arr_48 [i_0] [i_1] [i_10] [i_11] [14]) % (max(((max((arr_6 [i_0] [i_1]), var_6))), (min((arr_53 [i_13] [i_10] [i_1] [i_0]), var_6)))));
                            }
                            var_23 = (min(var_23, (((!((max(25437, 6898))))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 1; i_14 < 22;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 0;i_15 += 1)
        {
            {
                var_24 -= (min((min(var_4, (arr_57 [i_15 + 1]))), var_0));
                arr_61 [i_15] = (((((max(1418188596, var_3)) >= (var_13 > var_2))) ? ((~(((var_13 != (arr_59 [i_14] [i_14])))))) : -16681));
                arr_62 [i_14] [i_15] = ((-(min(17646973003900700531, 1))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 13;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    for (int i_19 = 4; i_19 < 12;i_19 += 1)
                    {
                        {
                            var_25 = (max(var_25, (((1 ? -1 : (max(15693209093477200163, -var_14)))))));
                            arr_76 [i_18] [i_18] [5] [i_18] = ((506727722 ? -var_11 : (min(var_11, (arr_16 [i_19 + 1] [i_18] [i_19 - 4] [i_19 + 1])))));
                            var_26 = (min(var_26, (((~(((!(arr_54 [i_19 + 1] [i_19 - 4] [16] [i_19] [i_19 - 4])))))))));
                        }
                    }
                }
                var_27 = var_13;
            }
        }
    }
    var_28 = var_7;
    #pragma endscop
}
