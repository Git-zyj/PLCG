/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] = (min(((((((-61 ? (arr_1 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))) ? -24982 : (min(var_2, var_0))))), (min(3520155478, -var_8))));
                            arr_11 [i_0] [19] [i_2] [i_2] = (((min(((-(arr_8 [14] [4] [i_2] [1] [4]))), ((max(3520155460, 774811826))))) > ((3520155466 ? (arr_8 [i_1 + 4] [i_2] [i_3] [i_3] [i_3]) : (arr_8 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])))));
                            var_10 = (((((max(40089, var_2)))) ? (arr_7 [i_0] [i_0] [4] [i_2] [i_3]) : ((3520155486 + (arr_5 [i_0] [i_1 + 2])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_11 = (max((8822385609231390616 >= var_1), ((var_1 - ((-9041106033520982598 ? 1895362027590686332 : var_3))))));
                            var_12 = (min(var_12, (((((!((18374531233254992640 && (arr_16 [i_0 - 1] [10] [i_1 + 1] [i_4] [i_5 - 3]))))) && var_2)))));
                        }
                    }
                }
                var_13 = ((((min(var_6, ((min((arr_16 [i_0] [i_0] [19] [i_0] [i_1]), (arr_3 [i_0]))))))) ? (arr_4 [i_0] [i_1 + 1] [i_0]) : var_9));
            }
        }
    }
    var_14 = (max(((var_4 ? var_6 : (((min(1, -20692)))))), var_0));
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                var_15 = (((2617543027 && 5970077786467020617) ? ((((((arr_30 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) && (arr_23 [i_6] [i_6] [i_6]))) ? (-9041106033520982588 < var_2) : (!32)))) : (min((var_7 <= var_1), var_4))));
                                var_16 = var_8;
                                var_17 = -var_9;
                            }
                        }
                    }
                    var_18 = (max((((!(((9041106033520982610 ? var_2 : (arr_27 [i_6] [i_6]))))))), ((((((arr_19 [i_6] [i_6]) / var_6))) ? (((((arr_22 [1] [i_7] [1]) >= (arr_24 [i_6] [i_6] [i_6]))))) : ((var_6 | (arr_21 [24] [i_6] [i_6])))))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            {
                                var_19 ^= (arr_20 [i_12] [i_6]);
                                var_20 = (max(var_20, var_3));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 3; i_13 < 9;i_13 += 1)
    {
        for (int i_14 = 3; i_14 < 9;i_14 += 1)
        {
            {
                var_21 = (((arr_0 [i_13]) > (((arr_7 [18] [i_14 + 2] [18] [i_14] [i_14]) ? (((max((arr_38 [i_13]), (arr_28 [i_13 + 2] [i_14] [i_14]))))) : (arr_36 [i_13] [i_13] [i_13 - 2] [i_13] [i_14])))));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            var_22 = var_4;
                            var_23 = (min(var_23, ((((min((arr_39 [i_13]), ((var_3 ^ (arr_36 [i_13] [i_14] [9] [18] [9])))))) + var_7))));
                            var_24 = ((6916234122409930694 < (((~(((arr_9 [i_13] [i_14 - 2] [19] [i_16]) / (arr_42 [i_13] [i_14] [i_13] [i_14]))))))));
                        }
                    }
                }
                var_25 |= (arr_15 [i_13 - 2] [15] [i_13 - 1] [15]);
            }
        }
    }
    #pragma endscop
}
