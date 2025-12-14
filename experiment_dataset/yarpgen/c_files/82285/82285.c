/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((((38626 / 230527471) ? (min(var_5, var_5)) : var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = (max(var_3, (max(((min((arr_3 [i_1] [i_1]), (arr_5 [i_0 - 3] [i_1])))), (max((arr_3 [i_1] [i_1]), var_9))))));
                var_15 = (arr_2 [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_1] [i_1] [i_2] [i_1] [i_2] = var_1;
                                var_16 = (min(1, (min((arr_3 [i_1] [i_1]), ((min(0, 1291686547)))))));
                                var_17 = ((((min(-var_11, ((~(arr_5 [i_1] [i_1])))))) ? (((((var_9 ? var_8 : -230527464))) ? ((254682255 ? var_7 : var_8)) : (arr_0 [i_0 - 2]))) : (arr_8 [i_0] [i_0] [i_1])));
                                var_18 = (((((((!(arr_12 [i_3] [1] [i_1] [i_0 + 1]))) ? (((arr_0 [i_4]) ? var_10 : var_11)) : -var_11))) ? var_0 : (((arr_13 [i_0] [i_1] [i_0 - 2] [i_1] [i_1] [i_3 + 1] [i_2]) ? ((((arr_14 [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_8 [i_0] [i_1] [i_1])))) : (arr_10 [i_0] [i_1] [i_1] [i_4])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_11;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    var_20 = (min((((arr_14 [i_7]) ? -var_10 : var_12)), ((((max(var_9, (arr_25 [i_5] [i_5] [i_5] [i_5])))) ? ((max((arr_8 [i_7] [i_6] [i_7]), var_5))) : (max((arr_20 [8] [8]), var_10))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_21 = (max(((((((arr_16 [i_5]) ? (arr_14 [i_7]) : (arr_22 [i_7] [i_9])))) ? (min(var_5, (arr_10 [8] [i_6 + 2] [i_7] [10]))) : ((((arr_17 [i_7] [i_8]) ? var_6 : var_5))))), (((var_2 > (arr_5 [i_6 - 3] [i_7]))))));
                                var_22 = (((((~((max((arr_22 [i_7] [4]), var_1)))))) ? ((((((arr_3 [i_7] [i_8]) / (arr_19 [i_5] [i_6])))) ? (arr_28 [i_6 - 2] [i_6] [i_6 + 2] [i_6]) : (arr_9 [i_7] [i_6 - 2]))) : (arr_21 [i_8])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
