/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_2));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_17 = (((((max(var_12, var_5))) ? ((((arr_8 [10] [4] [i_2] [4]) ? (arr_8 [5] [i_1] [5] [4]) : var_14))) : (min(var_1, var_2)))));
                            var_18 = ((~((var_8 ? (((arr_5 [i_0] [i_0] [i_2]) ? var_13 : (arr_3 [i_0] [i_0] [i_2]))) : (arr_1 [i_0])))));
                        }
                    }
                }
                arr_9 [i_0] = ((-(arr_0 [i_0])));

                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    var_19 = ((+((((((arr_12 [i_0] [11] [i_4]) ? var_4 : (arr_10 [4] [i_1] [i_0])))) ? var_6 : ((min((arr_0 [i_0]), (arr_1 [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_20 = ((~((var_3 ? (arr_16 [i_0 + 1]) : (arr_16 [i_0 - 1])))));
                                var_21 = (min((arr_13 [i_0] [i_5]), (arr_13 [i_0] [i_1])));
                                var_22 = (min(var_22, ((((arr_1 [i_4]) ? var_4 : (arr_1 [i_4]))))));
                                arr_18 [i_0] = ((((min(var_11, var_13))) ? (min((arr_10 [7] [7] [i_0]), var_3)) : ((((arr_12 [i_0] [i_1] [1]) ? (arr_6 [i_1] [i_4] [i_0]) : (arr_5 [i_6] [i_0] [i_6]))))));
                            }
                        }
                    }
                    var_23 = (max(var_23, (((+(((arr_8 [i_0] [i_0 + 3] [i_4 - 1] [i_4 - 2]) ? ((((arr_7 [i_4] [i_4] [i_4 - 2] [i_4]) ? var_8 : var_4))) : (((arr_0 [i_0]) ? (arr_16 [3]) : var_13)))))))));
                }
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_27 [i_0] [i_1] [i_0] [9] [i_0] = ((((min(((max(var_15, var_4))), ((var_5 ? var_7 : (arr_21 [4] [i_1] [7] [i_8] [i_0] [10])))))) ? var_14 : (var_1 & -var_12)));
                                arr_28 [i_0] [i_1] [6] = ((+((var_3 ? (arr_5 [i_0] [i_0] [i_9]) : ((~(arr_15 [i_1] [i_8] [i_7 + 1] [12] [1])))))));
                            }
                        }
                    }
                    var_24 = (min(var_24, ((((((max((arr_5 [12] [0] [4]), var_4)))) != (((arr_6 [i_0] [i_0] [1]) ? var_12 : (arr_2 [i_7 + 1]))))))));
                    arr_29 [i_0] = (arr_25 [i_0] [i_7 + 1] [i_7 - 1] [i_7] [4]);
                    arr_30 [i_0] [i_0] [i_0] [i_0] = var_7;
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    var_25 = var_7;
                    var_26 = (max(var_26, (((var_7 ? (arr_19 [6]) : (arr_16 [i_0 + 3]))))));
                    arr_33 [4] [i_1] [i_0] [8] = (((arr_21 [i_0] [i_0] [i_1] [i_0] [i_1] [13]) ? (((arr_11 [i_0] [i_0]) ? var_7 : (arr_12 [i_1] [13] [i_1]))) : (arr_31 [i_0] [i_1] [i_10])));
                }
            }
        }
    }
    var_27 = -var_3;
    #pragma endscop
}
