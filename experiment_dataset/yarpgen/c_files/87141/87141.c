/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -116;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_12 &= ((!((max((arr_0 [i_0]), (arr_7 [i_0 - 1]))))));

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [i_1] = var_6;

                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        var_13 = (arr_6 [8] [i_1]);
                        arr_14 [i_1] [i_2] = -var_5;
                        arr_15 [i_3] [i_1] [i_1] [i_1] [i_0 - 2] = 1;
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_14 = (((arr_11 [i_0] [i_0] [i_4] [i_5]) ? (((arr_13 [i_0] [i_0] [i_0]) ? var_6 : (((arr_8 [i_1] [i_1]) ? (arr_12 [i_1]) : var_7)))) : (arr_4 [i_0 + 1] [i_1] [i_0 + 1])));
                                var_15 = -100;
                            }
                        }
                    }
                }
                for (int i_6 = 1; i_6 < 14;i_6 += 1)
                {

                    for (int i_7 = 2; i_7 < 14;i_7 += 1)
                    {
                        arr_27 [i_0] [i_6] [i_6] [i_6] [i_6] [i_1] = ((((var_2 ? (((arr_18 [i_1] [i_0 - 2]) ? 0 : (arr_23 [i_1]))) : (arr_21 [i_7] [i_1] [i_1] [i_7 - 1]))) > ((var_6 / (min((arr_16 [i_0] [i_1] [1] [i_7]), var_9))))));
                        var_16 = (min(var_16, ((max((min((arr_23 [4]), (!var_4))), ((min((!0), var_5))))))));
                        var_17 = var_9;
                    }
                    var_18 = (min((((max((arr_3 [i_0] [i_0]), (arr_17 [i_0] [15] [i_1] [15]))))), (max((arr_6 [i_1] [i_1]), (arr_13 [i_0 - 2] [i_1 + 1] [i_6 + 3])))));
                }
                for (int i_8 = 4; i_8 < 15;i_8 += 1)
                {
                    arr_32 [i_0] [12] [i_1] [i_8] = ((((max((!1), (arr_0 [i_0 + 1])))) ? (arr_1 [i_1 - 1]) : ((~(max(var_2, (arr_25 [i_0] [i_1] [i_8])))))));
                    arr_33 [i_0] &= (((((~(~15)))) ? ((max(((var_2 ? (arr_4 [i_0] [i_0] [i_8]) : var_0)), ((~(arr_3 [i_0] [i_1 - 3])))))) : (arr_9 [i_0 + 1])));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 15;i_10 += 1)
                        {
                            {
                                arr_39 [i_1] [i_1] [i_1] [i_0] = (min(var_2, (((~(arr_38 [i_0] [i_1] [i_8 - 4] [i_9] [i_0] [i_10]))))));
                                arr_40 [i_0] [i_0] [i_1] [i_1] [1] [i_9] [i_1] = (arr_22 [i_0] [i_1] [i_8 - 1] [i_9]);
                                arr_41 [i_1] [i_1] [i_8] [i_8] [i_9] [i_10] [11] = (min((max(((((arr_8 [i_0] [i_1]) / (arr_8 [9] [i_1])))), 5880842426044836202)), ((min((arr_21 [i_1 - 2] [i_1] [i_9] [5]), (arr_21 [i_1 - 2] [i_1] [i_1] [5]))))));
                            }
                        }
                    }
                }
                for (int i_11 = 2; i_11 < 15;i_11 += 1)
                {
                    var_19 = (max((arr_18 [i_1] [i_1]), ((max(65520, 0)))));
                    var_20 = (((max(1, ((((arr_2 [i_11]) ? var_7 : 77))))) - (arr_26 [i_1 - 1] [i_1])));
                    var_21 = (min(1, ((((min((arr_24 [i_11] [12] [i_1] [i_0]), (arr_38 [i_0] [i_0] [i_1] [i_11] [i_11] [7])))) && var_9))));
                    var_22 -= (arr_24 [i_11] [i_1] [i_1] [14]);
                }
                var_23 = (max((arr_37 [i_0 - 1] [i_0 - 1] [i_1]), ((((max((arr_36 [i_1] [i_1] [i_1 - 1]), (arr_28 [i_0] [i_0] [i_0] [i_0])))) ? ((var_1 ? var_1 : (arr_28 [10] [i_1] [i_0] [i_0]))) : (!var_4)))));
            }
        }
    }
    #pragma endscop
}
