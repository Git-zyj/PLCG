/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_20 = 9223372036854775802;

                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                var_21 *= ((((((((-103 ? (arr_13 [i_1] [i_1]) : 1))) / -9223372036854775807))) || ((min((max(-3374601762920792193, (arr_8 [i_1] [i_1] [i_2] [i_4] [i_1] [i_0 - 1]))), (!var_5))))));
                                var_22 ^= (((((((511 ? -978302002 : 958313154)) > (max((arr_10 [i_0] [i_1]), -32764))))) != (((!(arr_5 [i_1]))))));
                                var_23 = ((((min((arr_14 [i_3 - 1] [i_3 - 1] [i_4] [i_4] [12]), -5128705002164789491))) || (arr_14 [i_0 - 1] [i_3 - 1] [i_4] [i_4] [i_4])));
                            }
                            arr_15 [i_0] [i_2] [i_2] [9] [9] = (min((arr_12 [i_0 - 2] [10] [i_0] [i_0 - 1]), (arr_1 [i_0 - 2] [i_0 + 1])));
                        }
                    }
                }
                var_24 = var_15;

                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    arr_19 [i_0] [i_5] [i_0 + 1] = ((((max(((((arr_3 [i_0] [3] [11]) && 1))), (arr_12 [i_0] [i_0] [7] [i_5 - 1])))) ? (((((12833 ? 1 : (arr_17 [i_0 + 1])))) ? ((((arr_6 [8] [i_1] [i_1]) & 1))) : (((arr_12 [i_0] [7] [13] [i_0 - 2]) / (arr_4 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0]))))) : (((-(arr_16 [i_1] [i_1] [i_1] [i_1]))))));
                    var_25 -= ((((min(((min((arr_3 [i_5 + 1] [6] [1]), (arr_8 [i_1] [8] [i_5 + 2] [i_5] [2] [i_5])))), ((64277 ? var_5 : var_10))))) ? (((((min((arr_5 [i_1]), var_11))) ? (arr_4 [i_0 + 2] [6] [i_5] [i_1]) : (!1)))) : ((-1 & (((arr_13 [i_0 - 1] [i_1]) ? var_5 : 2147483647))))));
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_26 = (arr_17 [i_0 + 2]);
                                var_27 = (max(var_27, ((max((((((var_15 + (arr_16 [i_0 - 1] [3] [i_8] [i_6]))) != var_14))), (min((arr_10 [i_0] [i_0 + 2]), (arr_5 [i_1]))))))));
                            }
                        }
                    }
                    var_28 = (min((((min((arr_12 [i_0 - 2] [3] [i_0 + 1] [10]), var_11)) + var_0)), ((min((1 == var_12), 32767)))));
                    var_29 = ((((arr_26 [i_6] [i_0 + 2] [i_1] [10] [10]) ? (arr_26 [i_6] [i_6] [i_6] [i_0 - 1] [i_1]) : (arr_26 [i_6] [i_1] [i_1] [i_1] [i_1]))) != (arr_26 [i_6] [i_1] [i_1] [i_1] [i_1]));
                    var_30 = (max(var_30, 1));
                }
                arr_27 [i_0 + 2] [i_1] = ((((var_14 * (-32767 - 1))) + ((var_4 ? (arr_7 [i_0] [i_0 - 1]) : ((70 ? var_15 : var_13))))));
            }
        }
    }
    var_31 = var_0;
    var_32 = (max(var_32, ((-((((((32766 ? var_5 : var_9))) && (((var_1 ? var_12 : -1322729987))))))))));
    var_33 = ((((((min(var_14, var_16))) ? var_19 : ((max(var_19, var_9))))) + var_8));
    #pragma endscop
}
