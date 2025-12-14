/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_1 - 1] [i_2] = (((((max(var_3, (arr_4 [i_0] [i_0] [i_1]))))) < ((max(var_10, var_4)))));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_17 = (((((((max(var_14, 17187))) ? (var_8 == var_9) : -var_9))) ? ((min((!var_3), ((var_9 || (arr_3 [i_0] [i_1] [i_2])))))) : (((((max(var_16, var_10))) < (arr_4 [i_0 + 1] [i_0 + 1] [i_1 - 1]))))));
                        var_18 = (!(((~(arr_5 [i_0] [i_0])))));
                        arr_9 [i_0] = ((((min(((((-115 + 2147483647) << (arr_4 [i_3] [0] [i_1])))), 1))) ? 62784 : (((((min((arr_4 [i_0 - 1] [i_2] [i_3]), 0))) >= 1625477240)))));
                        var_19 = (max(var_19, ((((((1 >= ((3871532969339886003 ? var_6 : (arr_2 [i_0] [i_1] [i_2])))))) << (((arr_5 [i_2] [i_2]) - 55347)))))));
                    }
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        var_20 += (max(((min((min(var_1, -3871532969339886003)), ((min(var_14, (arr_10 [i_0] [i_0] [i_2] [i_4] [i_1]))))))), -11));
                        var_21 = (~var_1);
                        var_22 = ((var_3 ? (min(5885684441011197773, -17205)) : (((-(arr_10 [i_0] [i_4] [i_2] [i_1 + 2] [i_0]))))));
                    }
                    var_23 -= ((arr_11 [i_0] [i_0 - 1] [i_1] [i_0] [17]) ? ((max(var_3, (((1 || (arr_4 [i_2] [1] [1]))))))) : 15622877);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_17 [i_1] [i_0] [i_2] [i_0] [i_0] = var_5;
                                var_24 = (~1);
                            }
                        }
                    }
                    var_25 = arr_13 [i_1 + 2];
                }
            }
        }
    }
    var_26 = (min(var_26, var_6));
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        {
                            arr_30 [i_7] [i_7] [i_7] [i_10] = var_13;
                            var_27 = (max((max((arr_7 [i_7 - 1] [i_8] [3] [1]), 17)), (arr_7 [i_7 + 1] [i_8] [14] [14])));
                        }
                    }
                }
                arr_31 [10] [i_8] |= ((((!((!(arr_13 [i_8]))))) ? (((var_3 / 2740) ? ((-118 ? 122 : 251)) : (min(var_12, var_5)))) : var_16));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        {
                            var_28 += var_16;
                            var_29 = ((!((var_10 == ((var_6 ? (arr_25 [i_8] [9] [i_8]) : var_5))))));
                            var_30 -= ((((min(201, 62765))) >= (((((min((arr_23 [i_12] [i_8]), 1))) <= ((min(58, var_11))))))));
                            arr_37 [i_7] [i_7] [i_7] [i_11] [10] [i_7] = (((((((max((arr_35 [i_7] [i_7] [i_8] [i_8] [i_11] [2]), var_0))) ? ((min(245, (arr_23 [i_7] [i_7])))) : (arr_32 [8] [8] [8])))) ? 2835893415 : var_11));
                            var_31 = (arr_36 [i_7] [i_7] [i_7] [i_12] [i_7] [i_7]);
                        }
                    }
                }
                arr_38 [i_7] [i_7] [i_7] = (max((!4), (122 == 37048)));
            }
        }
    }
    #pragma endscop
}
