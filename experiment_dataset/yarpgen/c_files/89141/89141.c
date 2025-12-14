/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0 - 3] [i_0 + 2] = ((-(((~var_10) ? var_6 : var_3))));
                    var_16 = (((((min((arr_0 [i_2 + 1] [i_0 - 3]), (arr_0 [i_2 + 2] [i_0 - 2]))))) / (min((arr_3 [i_2 + 2]), var_12))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            {
                var_17 *= (max(((((!var_2) ? var_0 : (!var_9)))), 1229616712));
                var_18 -= (0 > 15);

                /* vectorizable */
                for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    var_19 = ((0 && ((((arr_2 [i_5]) ? (arr_3 [i_3]) : var_6)))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_20 &= var_0;
                                var_21 = var_8;
                            }
                        }
                    }
                    var_22 = ((-(arr_18 [i_5] [i_4] [i_3])));
                }
                for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 20;i_10 += 1)
                        {
                            {
                                arr_31 [i_10] [i_4] [i_9] = (((!var_7) ? (((~var_9) ? (arr_16 [i_3] [i_3] [i_4] [i_8] [i_9] [i_9]) : var_9)) : (-271040218 == 728320642)));
                                var_23 = var_13;
                                var_24 = (((~-271040207) ? (((min(32739, (arr_17 [i_3] [i_9]))))) : 5505589273056129294));
                                arr_32 [i_3] [i_9] [i_3] [i_9] [i_3] = (arr_9 [i_3]);
                                var_25 = (arr_21 [i_3]);
                            }
                        }
                    }
                    arr_33 [i_3] = var_0;
                    var_26 = (min(var_26, var_7));
                    arr_34 [i_8] = (max(((var_13 ? var_10 : var_9)), (arr_15 [i_3] [1])));
                    var_27 = (min(var_27, ((min(((((arr_16 [i_3] [i_3] [i_3] [i_4] [i_8] [i_8]) <= (arr_17 [i_4] [i_3])))), ((((var_3 != (arr_25 [i_3] [i_3] [i_3]))) ? (arr_28 [i_3] [i_4] [i_4] [18] [i_8]) : (((max((arr_0 [i_3] [i_3]), var_10)))))))))));
                }
                for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 21;i_13 += 1)
                        {
                            {
                                var_28 = ((((((((var_4 ? var_0 : (arr_1 [i_3] [i_4])))) ? ((var_10 ? (arr_4 [i_3] [i_3] [i_13]) : var_9)) : ((min(var_12, (arr_13 [i_4]))))))) ? (~-271040207) : (max((arr_29 [i_3] [i_3] [i_11] [i_4] [i_3]), (arr_29 [i_3] [16] [i_3] [i_3] [i_3])))));
                                arr_43 [i_3] [i_4] [i_11] [i_12] [i_13] [i_13] = (max(-271040218, ((((arr_17 [i_3] [i_3]) > (max((arr_8 [i_3]), var_3)))))));
                                var_29 = (arr_28 [i_3] [i_4] [i_11] [i_12] [10]);
                            }
                        }
                    }
                    var_30 = (((-(arr_18 [i_3] [i_4] [i_4]))));
                    var_31 += ((var_14 > (((((min((arr_24 [i_4] [i_3] [i_3] [i_3] [i_4] [18]), var_1)) <= (arr_21 [i_11])))))));
                    var_32 = (arr_35 [i_11] [i_3] [i_3]);
                    var_33 = (min(((max(15, 32256))), ((var_3 ? 96 : (arr_12 [i_4] [i_11])))));
                }
                arr_44 [i_3] [i_3] [i_4] = (max(var_6, ((((min(271040226, 9223372036854775807)) / (max((arr_1 [i_4] [i_3]), var_12)))))));
            }
        }
    }
    #pragma endscop
}
