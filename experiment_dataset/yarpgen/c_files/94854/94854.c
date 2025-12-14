/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((((((!(var_17 + var_2)))) <= ((var_11 ? 60 : (!var_17))))))));
    var_21 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    var_22 *= ((76 != (max((arr_3 [i_1]), ((var_18 ? (arr_1 [i_0]) : (arr_6 [i_0] [i_1] [i_2])))))));
                    var_23 = (max(var_23, var_10));
                    arr_10 [i_2] = ((((max((arr_9 [i_2] [i_1] [i_0] [i_0]), (arr_9 [i_0 - 1] [i_1 + 1] [i_1 + 1] [i_2])))) ^ (((((var_7 * (arr_1 [13])))) ? 8192 : var_8))));
                }
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {

                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        var_24 = (min(var_24, (((~((((max(var_15, (arr_5 [2] [i_1] [i_3 + 2])))) ? (!1) : (((arr_1 [i_0]) ? var_14 : (arr_3 [i_0]))))))))));
                        var_25 = (((((arr_1 [13]) ? ((~(arr_11 [i_0] [i_1 + 2]))) : (arr_6 [i_3 + 1] [i_1] [i_0 - 1]))) < var_13));
                    }

                    for (int i_5 = 3; i_5 < 14;i_5 += 1)
                    {
                        arr_19 [i_3] [1] [i_3 + 1] [i_3 + 1] = (((arr_11 [i_3] [i_5]) + ((-(arr_11 [i_5 + 1] [i_1 + 1])))));
                        var_26 = (max(var_26, (((((max(2557152859, (arr_7 [i_0 - 1] [i_1 - 1] [i_3] [i_5 + 2])))) - (arr_16 [4] [i_1]))))));
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_27 = (max(var_27, (((max((arr_4 [0] [1]), var_9))))));
                                var_28 = (max((((var_0 ? var_12 : var_17))), ((~(arr_0 [i_0])))));
                                var_29 = (((((var_18 ? (arr_4 [i_0] [i_8]) : (arr_4 [i_1 - 1] [i_1 - 1])))) ? var_16 : ((-(((arr_11 [i_6] [i_6]) ? 1 : (arr_13 [i_7 - 1])))))));
                                var_30 = (arr_16 [i_8] [i_1]);
                            }
                        }
                    }
                }
                var_31 = ((!(((((arr_21 [i_1 - 2] [i_0] [i_0 - 1] [i_0]) ? var_9 : var_14))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            {
                var_32 = (min(var_32, ((min((((arr_30 [4] [i_10]) ? (arr_33 [i_9] [0] [i_9]) : ((-(arr_32 [i_9] [i_10]))))), (arr_28 [i_9] [i_9]))))));
                var_33 = (min(var_33, (arr_30 [14] [i_10])));
                var_34 ^= (arr_31 [1]);
                arr_35 [i_9] [i_9] = ((max(((max(var_5, var_11)), (max(var_17, (arr_31 [i_9])))))));
                var_35 = (((arr_30 [i_9] [i_9]) ? (((~(arr_30 [i_9] [i_10])))) : (((arr_30 [i_9] [i_9]) ? (arr_30 [i_9] [i_10]) : var_18))));
            }
        }
    }
    #pragma endscop
}
