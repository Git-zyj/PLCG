/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = ((min((arr_5 [i_1 - 1] [i_1 + 2] [i_0]), (((669983141 == (arr_2 [i_0])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                var_15 = (arr_7 [i_1 + 2] [i_3 + 3] [i_3] [5]);
                                var_16 = (min(var_16, ((((arr_4 [14] [i_2]) && -60)))));
                                var_17 ^= ((-(~1363296056)));
                                var_18 -= (((arr_12 [i_1 + 1] [i_2] [i_3 + 3] [i_4]) | (arr_5 [i_4] [i_3 - 1] [i_1 + 2])));
                                arr_16 [1] [i_1] [i_2] [i_3] [1] = ((var_12 ? (arr_14 [i_0] [i_1 + 1] [10] [11] [i_1 + 1]) : var_6));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 15;i_5 += 1)
                            {
                                var_19 = (min(var_19, var_11));
                                var_20 = ((-(!var_12)));
                                var_21 |= ((-(arr_7 [i_0] [i_0] [i_0] [i_0])));
                            }

                            for (int i_6 = 4; i_6 < 14;i_6 += 1)
                            {
                                var_22 = ((+(min((arr_14 [i_0] [i_1 + 1] [i_1] [i_3 - 1] [i_6 - 4]), var_5))));
                                var_23 = (((arr_8 [i_3] [i_3 - 1] [2]) && (((arr_8 [i_3] [i_3 + 2] [i_3]) && var_7))));
                                var_24 += ((-((((var_3 != var_11) == var_7)))));
                            }
                            for (int i_7 = 0; i_7 < 15;i_7 += 1)
                            {
                                var_25 = (max(var_25, (((((-var_12 | ((var_1 ? var_13 : var_8))))) ? var_10 : (!3624984161)))));
                                var_26 = ((var_8 ? (min(((min(2536906105, -9))), ((var_2 ? 5053611194363369451 : var_6)))) : -2699994158514024303));
                                var_27 *= (!4294967286);
                                var_28 = (max(var_28, -var_11));
                            }
                        }
                    }
                }
                arr_23 [1] = -var_11;
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        {
                            var_29 = (max(var_29, ((+(((arr_19 [i_0] [i_0] [i_8] [i_8] [i_9] [i_8] [12]) ? var_11 : var_3))))));
                            var_30 = ((-5 + (((var_9 && (1 || var_12))))));
                            var_31 = (-((~(var_12 || var_4))));
                            var_32 = (arr_6 [i_1 - 1] [i_1] [12] [i_9]);
                        }
                    }
                }
                var_33 += (max((((~((((arr_25 [i_0] [i_1 + 2] [i_1] [i_1]) || var_12)))))), ((var_4 ? var_7 : var_12))));
            }
        }
    }
    var_34 -= ((((((var_7 || var_1) ? var_12 : var_9))) ? (max(((-999412657 ? -3 : var_1)), ((max(var_9, 2692750429))))) : var_11));
    var_35 = -var_3;
    #pragma endscop
}
