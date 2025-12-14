/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_10 = (max((7 & var_8), ((min(var_3, (arr_4 [i_1] [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_11 = (max((((arr_2 [i_3]) ? (((((arr_0 [i_0]) || var_5)))) : ((var_6 ? (arr_12 [i_0]) : (arr_7 [i_0] [i_1] [i_1] [i_4]))))), ((min(((min((arr_4 [i_0] [i_1] [i_1]), var_5))), (arr_9 [i_0] [i_0] [i_2] [i_4 + 3] [0] [i_3 + 1]))))));
                                var_12 += ((-((((min(0, 246))) ? (max((arr_11 [i_0] [i_1] [i_0] [8] [i_4]), 10)) : 1))));
                                arr_13 [i_1] [0] [0] [i_2] [2] = (max((max((arr_8 [i_0] [i_0] [i_3] [i_3]), (((arr_9 [7] [i_1] [i_2] [i_2] [7] [i_4]) / var_7)))), var_5));
                                var_13 = ((((var_5 ? (((arr_12 [i_2]) ? var_2 : (arr_12 [i_4 + 3]))) : (((((arr_12 [i_0]) + 9223372036854775807)) >> (((arr_5 [i_0] [i_1] [i_1]) - 3351185919)))))) >> ((((~((~(arr_9 [i_0] [i_1] [i_0] [i_4] [i_4] [i_0]))))) + 1209385083))));
                                var_14 = (arr_5 [i_1] [i_2] [i_1]);
                            }
                        }
                    }
                }
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    var_15 = (min(((max((arr_4 [i_5 + 1] [i_1] [i_5 - 1]), (arr_4 [i_5 + 1] [i_1] [i_5 + 3])))), (min((((arr_10 [i_0] [i_1] [i_1] [i_1] [i_5]) << (arr_3 [11] [11]))), (((var_4 <= (arr_6 [i_0] [i_1] [i_0] [9]))))))));
                    var_16 = (min(var_16, ((((arr_6 [i_0] [10] [i_0] [i_0]) <= ((var_4 ? (((min((arr_14 [i_0] [i_0] [12]), (arr_7 [i_0] [i_0] [2] [i_5]))))) : (max((arr_15 [i_5] [6] [i_0]), (arr_4 [i_5] [12] [i_0]))))))))));
                    var_17 = (arr_10 [i_0] [i_0] [i_0] [i_1] [i_0]);
                    var_18 = ((((((((6540019582144428265 ? (arr_3 [1] [i_1]) : 10))) ? var_7 : (arr_3 [i_1] [i_1])))) ? (((-((~(arr_4 [i_0] [i_1] [i_5])))))) : (((arr_12 [i_0]) ? ((var_2 ? var_4 : (arr_11 [i_5 + 1] [i_5 + 2] [i_5] [i_1] [i_5 + 3]))) : (arr_8 [i_0] [i_1] [i_1] [i_5])))));
                }
                arr_16 [i_1] [i_1] [i_0] = ((592809778 ? 32406 : -90));
                var_19 &= (((((arr_4 [i_0] [10] [i_0]) ? var_7 : ((((arr_0 [i_1]) ? (arr_3 [i_0] [i_1]) : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]))))))) >= (min((((arr_14 [i_0] [i_0] [4]) ? var_0 : var_0)), ((var_6 ? (arr_11 [i_1] [i_1] [i_1] [8] [i_0]) : var_2)))));
                var_20 -= (max((((arr_1 [i_1]) ? var_8 : (min((arr_0 [i_1]), var_9)))), (max(var_8, ((max((arr_7 [i_1] [i_1] [0] [i_0]), (arr_5 [8] [i_1] [6]))))))));
            }
        }
    }
    var_21 = var_1;
    #pragma endscop
}
