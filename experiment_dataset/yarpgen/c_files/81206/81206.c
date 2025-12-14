/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        arr_9 [18] [i_1] [6] [i_3] = -86731732;
                        var_15 = 36;

                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            var_16 = (arr_7 [i_2] [i_4 + 2]);
                            var_17 = (var_11 - 6);
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_18 = (min(var_18, 0));
                            arr_16 [i_0 + 4] [0] [i_2] [i_2] [i_5] [i_5] [13] = (max(((max((((arr_13 [i_0] [i_1] [i_2] [i_3 + 2] [i_5]) * 1)), -21780))), (min((((var_4 ? 156 : (arr_4 [i_1])))), (max(84137317, 174))))));
                            var_19 = ((!(arr_13 [i_0 - 2] [i_0 + 2] [i_0 + 1] [i_3 - 3] [i_3 - 3])));
                        }
                    }
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        arr_20 [i_0] [i_6] [i_2] [i_2] = -21780;
                        var_20 = ((((min(1, 77))) && (((((min(var_11, (arr_11 [i_0] [i_6 - 1] [i_2] [16] [1])))) * (var_6 | var_9))))));
                    }

                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        var_21 = (max((max(146, (min(4210829984, 21778)))), (arr_19 [i_7] [i_7 - 1] [0] [i_7 - 1])));
                        var_22 = (max((((~(arr_8 [i_2] [i_2] [i_2] [i_2] [i_2])))), ((min(1, (arr_22 [19] [i_1] [17] [i_2] [17] [7]))))));
                        var_23 = ((min((~var_14), (min(4494714218332426898, 36028659580010496)))));
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_24 = var_11;
                            var_25 *= ((-(arr_27 [i_9] [i_9] [i_9] [i_8 + 2] [i_0 - 1] [i_0 - 1])));
                            arr_29 [i_8] [i_8 + 2] [i_1] [i_1] [i_8] = ((arr_7 [i_0] [i_0]) ? (arr_17 [i_0 + 2] [i_0 + 2] [i_2] [i_2] [i_8] [i_9]) : (arr_7 [9] [i_2]));
                        }
                        arr_30 [i_0 + 2] [i_1] [i_8] = (arr_0 [19]);
                    }
                    arr_31 [8] [i_1] = (((((arr_12 [i_0] [i_1]) ? ((~(arr_25 [0] [11] [i_2] [i_2] [i_2] [i_2]))) : (arr_23 [i_0] [17] [i_0] [0] [i_0] [i_0 + 4]))) ^ (((((((arr_2 [i_0] [3] [i_2]) | var_4))) ? ((var_9 ? var_12 : var_14)) : ((var_13 ? var_6 : 1)))))));

                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        arr_34 [i_0] [i_0] [i_10] = (min(((min((arr_19 [i_0 - 1] [i_0 + 4] [14] [0]), (arr_19 [i_0 - 2] [i_0 + 1] [2] [i_0 + 1])))), (max((arr_25 [i_0 + 4] [i_0] [i_0 + 2] [i_0 + 4] [i_0 + 4] [i_0 + 4]), var_6))));
                        var_26 = (max(var_26, (((5916337653141884973 ? 36028659580010500 : -8628)))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_27 -= 5725;
                        arr_39 [i_0] [i_0] [i_1] [i_2] [i_11] = (((arr_14 [i_0] [i_0 + 3] [17] [i_0] [i_0 + 3]) ? (arr_14 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_11] [15]) : (arr_1 [i_0])));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_28 = ((47 ? 4259240333117829807 : -2147483637));
                        var_29 -= (arr_41 [i_0 - 2] [6] [i_2] [i_12]);
                        arr_43 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0] = ((var_14 ? (arr_33 [i_2] [i_0] [i_0 + 3] [i_0] [i_0 - 1]) : (arr_15 [i_2] [i_2] [i_0] [i_0] [i_0 - 2] [i_0 + 2])));
                        var_30 = (arr_21 [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 1]);
                        arr_44 [11] [i_2] [i_1] [0] |= (!1710639387);
                    }
                    arr_45 [0] [0] [9] = (((((arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) | (arr_23 [i_0] [i_0] [i_0 + 1] [i_0 + 4] [i_0 + 4] [i_0]))) + (min((arr_23 [i_2] [i_1] [i_2] [i_0] [i_1] [11]), var_0))));
                }
            }
        }
    }
    var_31 = ((-var_14 > ((max(-120, -108)))));
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        for (int i_14 = 4; i_14 < 9;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {
                {
                    var_32 = var_5;
                    var_33 = (((((~(arr_52 [i_14 - 3] [i_14 + 1] [i_14 - 3] [i_14 - 2])))) ? 7251665641874176844 : ((min(30222, 4294967295)))));
                }
            }
        }
    }
    var_34 = (var_10 != var_11);
    #pragma endscop
}
