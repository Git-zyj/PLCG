/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0 - 2] [i_1] [i_1] = var_6;
                arr_7 [i_1] [i_0] [i_1] = (arr_5 [i_1] [i_0]);
                arr_8 [i_1] = (arr_0 [14]);
                arr_9 [i_0] [i_1] [i_1] = (((max(var_3, ((max((arr_1 [i_0 + 1]), (arr_3 [i_0] [i_0] [13]))))))) ? (((min((arr_1 [i_0]), var_18)))) : (((arr_3 [i_0] [i_0] [i_1]) ? var_19 : ((var_5 ? var_14 : var_19)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            {
                var_20 = (max((((arr_13 [i_2] [i_2] [i_2]) ? (min(var_11, var_14)) : (((var_5 ? var_1 : var_10))))), (arr_10 [17])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_21 = (min(var_21, ((min((min((min(var_10, (arr_15 [i_2] [i_3]))), (arr_13 [i_2] [9] [8]))), ((max(31, 1))))))));

                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                var_22 -= (arr_18 [i_2] [i_2] [i_2] [i_2] [16] [i_2]);
                                arr_21 [i_2] [i_2] [i_3] [i_2] [i_2] [5] = (min((min((arr_16 [12] [0] [i_5] [i_4] [0] [i_2]), (min(var_4, var_9)))), (arr_18 [15] [14] [i_4] [i_5 + 1] [i_5 + 1] [i_5 - 2])));
                            }
                            arr_22 [i_2] [i_2] [i_5] [i_2] [i_2] |= (arr_12 [i_2]);
                            arr_23 [i_3] [i_3] [16] = var_0;

                            for (int i_7 = 0; i_7 < 19;i_7 += 1)
                            {
                                arr_27 [i_3] [i_3] [i_4] [i_5] = (min(var_3, var_5));
                                var_23 = (max(var_23, (arr_10 [12])));
                                arr_28 [i_3] [i_5] = (min(((max(var_13, (max(var_4, (arr_14 [10])))))), (max((((var_19 ? var_17 : (arr_15 [i_2] [i_2])))), (arr_18 [1] [i_4] [i_4] [1] [11] [i_7])))));
                            }
                            for (int i_8 = 2; i_8 < 17;i_8 += 1)
                            {
                                arr_31 [i_3] [i_3] [i_4] [i_5] [i_8] = (min(((max(var_1, var_19))), (arr_26 [i_8] [i_5 + 2] [i_4] [i_3 + 1] [i_2])));
                                var_24 = var_4;
                                var_25 &= ((var_5 ? (((var_2 ? ((min(var_3, var_5))) : var_9))) : var_8));
                            }
                            for (int i_9 = 0; i_9 < 19;i_9 += 1)
                            {
                                arr_34 [i_2] [i_2] [i_4] [i_5 + 2] [i_3] = ((((min((((arr_26 [i_2] [i_2] [i_2] [i_2] [i_2]) ? var_19 : (arr_17 [i_9] [i_9] [i_9] [13]))), (max(var_12, var_14))))) ? (((((var_9 ? (arr_33 [i_2] [i_3]) : (arr_16 [i_2] [i_3 - 1] [i_4] [i_5] [i_9] [i_9])))) ? var_3 : (arr_15 [1] [i_3]))) : (arr_13 [i_2] [i_2] [8])));
                                var_26 = (min(var_6, (((32764 ? 1 : 224)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = ((((min(224, 2889551437))) ? var_11 : ((var_2 ? (max(var_10, var_4)) : (min(var_15, var_1))))));
    #pragma endscop
}
