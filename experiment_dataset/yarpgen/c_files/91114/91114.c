/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((3674284941525516437 ? (((-(arr_0 [i_1])))) : (min(-5540, -6923506737222551713))));
                arr_5 [i_1] = (min((((((((arr_0 [i_0]) ? (arr_3 [i_1] [i_0] [i_0]) : (arr_0 [i_1])))) ? ((((arr_3 [i_0] [i_0] [i_0]) ? (arr_0 [i_0]) : var_9))) : -3120361299388562203))), (min((arr_0 [i_0]), (((arr_3 [i_0] [0] [i_1]) ? (arr_1 [i_0] [i_1]) : (arr_0 [1])))))));
            }
        }
    }
    var_20 = (min(-var_16, var_1));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_21 = ((((((arr_7 [i_2 - 2]) ? (min(8, 14050879943204706426)) : (arr_8 [i_2 - 1] [i_2 - 2])))) ? ((((65535 > ((var_9 ? 197 : var_15)))))) : ((((min(var_8, var_8))) ? -1 : (min((arr_6 [i_2]), 2447812465))))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_22 = (((-(arr_10 [i_2] [i_2 + 1] [i_3] [i_4]))));
                            var_23 *= ((((var_19 | (arr_11 [i_4 - 2] [i_5 - 1] [i_2 - 1] [i_5]))) ^ ((180 ? 0 : 1))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_24 = (((8673075105952418467 | var_0) % (~var_16)));
                                var_25 = (((~45167) ^ (((((arr_16 [i_7] [i_6] [i_6 + 1]) ? var_15 : var_8))))));
                                var_26 = (min((arr_12 [i_7] [i_3]), -var_9));
                            }
                        }
                    }
                }

                for (int i_9 = 2; i_9 < 14;i_9 += 1) /* same iter space */
                {
                    var_27 = ((((((arr_16 [2] [i_2] [i_9 - 1]) ? (arr_16 [1] [i_9] [i_9 + 1]) : 1))) ? ((max(28285, -1275759128))) : (max(((((arr_18 [i_9] [i_9] [i_9] [i_2]) - 65441))), (min(var_0, (arr_7 [i_2])))))));
                    var_28 = (((((((~(arr_22 [i_3] [i_9]))) & (((arr_9 [i_2] [i_3] [9]) | var_7))))) || ((!((((arr_13 [i_2 - 2] [i_2] [i_9] [i_3] [i_2 - 2] [i_9]) ? (arr_12 [i_3] [1]) : var_15)))))));
                    var_29 = (min(((((var_15 & var_19) + (arr_25 [i_3] [i_9 - 2] [13])))), (((~(arr_22 [i_9] [i_2]))))));
                }
                /* vectorizable */
                for (int i_10 = 2; i_10 < 14;i_10 += 1) /* same iter space */
                {
                    var_30 = (((arr_7 [i_2 - 2]) ? var_14 : (arr_7 [i_2 - 1])));
                    arr_29 [i_2 - 1] [14] [i_10] = ((arr_24 [i_10]) ? (arr_24 [i_10]) : -360388230);
                }
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        var_31 = (((arr_31 [i_2 - 2] [i_2 - 2] [5]) ? 248 : (arr_31 [i_2 - 1] [i_2 + 1] [i_2])));

                        for (int i_13 = 1; i_13 < 15;i_13 += 1)
                        {
                            arr_38 [i_2] = ((-21979 ? 14981657016072596158 : (!20)));
                            var_32 ^= (var_1 >= var_9);
                            arr_39 [12] [i_12] [i_12] [i_11] [i_11] [i_3] [0] = ((247 ? (1 || 26743) : (var_1 == 20)));
                        }
                        var_33 = (min(var_33, (arr_12 [i_2 - 2] [i_2])));
                    }
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        var_34 = (((((arr_10 [i_14] [6] [i_3] [i_2]) * (((min(1, var_12)))))) > (((((var_5 ? var_13 : (arr_13 [i_2] [i_3] [i_14] [i_3] [i_11] [i_14])))) ? 1 : (var_15 & 1806157972685884096)))));
                        var_35 = (arr_6 [i_2 - 1]);
                    }
                    var_36 = (min((((arr_21 [i_2 + 1] [i_2 - 1] [i_2] [i_2 - 2] [i_2 - 2] [i_2 + 1]) * (arr_21 [i_2] [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_2 - 2]))), (~-14124)));
                    var_37 = (min(var_37, ((min((((arr_16 [i_3] [i_2] [i_2 + 1]) ? (arr_16 [i_11] [i_11] [i_2 - 2]) : var_9)), ((31 ? (arr_16 [i_3] [i_2] [i_2 - 1]) : (arr_16 [i_2] [i_11] [i_2]))))))));
                    var_38 = var_17;
                }
            }
        }
    }
    var_39 = var_13;
    #pragma endscop
}
