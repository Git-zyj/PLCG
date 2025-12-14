/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_11 = var_2;
                var_12 = (((((-(arr_1 [i_0] [i_1 + 1])))) >= (max((((~(arr_2 [i_1])))), (arr_0 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                arr_13 [i_0] [i_4] = ((((~(arr_2 [i_3 - 1]))) & (1 >= -125)));
                                var_13 = (min(var_13, ((((min((arr_10 [i_0] [5] [10]), (((arr_5 [i_4] [i_0]) ? (arr_7 [i_0] [i_1 - 3] [i_2 - 1] [i_3 + 3] [i_4]) : var_3)))) ^ (arr_10 [i_1 - 1] [i_3 + 1] [i_3]))))));
                                var_14 ^= ((((((arr_6 [i_0] [i_1 - 2] [i_2 - 1]) ? (arr_5 [7] [i_4]) : (arr_5 [i_2 - 1] [i_3 + 3])))) ? var_4 : 255));
                            }
                            for (int i_5 = 0; i_5 < 14;i_5 += 1)
                            {
                                arr_17 [i_5] [i_3] [i_0] [i_0] [i_0] |= (((((arr_7 [i_0] [i_3 - 1] [i_2] [i_2 - 1] [i_1 - 1]) ? 72057044282114048 : var_10))) ? (((arr_7 [i_0] [i_3 + 3] [13] [i_2 - 1] [i_1 + 1]) ? (arr_7 [i_0] [i_3 - 1] [i_2 - 1] [i_2 - 1] [i_1 - 2]) : (arr_7 [i_0] [i_3 + 1] [i_3 + 2] [i_2 - 1] [i_1 - 3]))) : (arr_7 [i_1 - 3] [i_3 + 2] [i_0] [i_2 - 1] [i_1 - 1]));
                                var_15 = (min(var_15, ((+((1 ? (arr_11 [i_0] [i_2 - 1] [i_2] [4]) : (arr_9 [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1])))))));
                                arr_18 [i_0] [i_1 + 1] [i_0] [i_2] [i_3] [i_5] = (((-((-(arr_7 [i_0] [i_1 - 3] [10] [i_3 + 1] [i_5]))))));
                            }
                            arr_19 [1] [1] [i_1] [i_2 - 1] [i_3] |= ((((((max(var_0, var_4))) ? (((arr_9 [11] [i_1] [i_2 - 1] [i_0]) ? (arr_0 [i_2 - 1]) : var_4)) : (((-(arr_1 [i_0] [i_0])))))) + (!var_4)));
                            arr_20 [i_3] = ((~(((var_3 <= var_10) ? ((-(arr_3 [i_0] [9] [i_2]))) : ((var_6 ? (arr_1 [i_2] [i_3]) : var_8))))));
                        }
                    }
                }
            }
        }
    }
    var_16 = ((((min(var_2, -var_10))) ? var_5 : var_2));
    var_17 = ((8557147670155072670 ? (((((var_1 ? var_6 : var_9))) ? ((var_1 ? var_4 : var_5)) : -var_8)) : var_3));
    #pragma endscop
}
