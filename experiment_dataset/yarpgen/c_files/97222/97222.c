/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 13;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_18 = (arr_7 [i_0] [i_0] [i_0] [i_0] [8] [i_3]);
                            arr_13 [i_3] = (arr_2 [i_2] [12]);
                            var_19 -= (arr_4 [i_0]);
                            var_20 = (arr_6 [i_3 - 2] [i_3] [i_3 - 2] [i_3 - 3]);
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            arr_17 [i_0] [i_0] [i_2] [i_3] [i_2] = (min(var_13, (((arr_11 [i_5] [i_5] [i_5] [i_5] [i_5]) ? (((!(arr_2 [i_0] [9])))) : ((~(arr_4 [i_0])))))));
                            arr_18 [i_0] [i_3] = (min(var_15, (((arr_14 [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1] [i_3]) ? (arr_14 [i_3 + 1] [4] [i_3 + 2] [4] [i_3 + 2] [0]) : (arr_14 [i_3] [2] [i_3] [i_3] [i_3 + 2] [i_3])))));
                            var_21 = (max(var_21, ((((((arr_3 [i_3 + 1]) <= (arr_3 [i_3 + 2]))) ? (((arr_3 [i_3 - 3]) ? (arr_3 [i_3 + 1]) : (arr_3 [i_3 - 1]))) : (arr_3 [i_3 - 1]))))));
                            var_22 *= (((max(var_7, var_0))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            arr_22 [i_0] [10] [i_3] [i_2] [6] [i_6] [4] = (arr_4 [i_2]);
                            arr_23 [i_0] [i_1] [i_0] [i_2] [i_3 - 3] [i_3] = ((((arr_21 [i_6] [i_3] [i_2] [i_1] [i_0]) ? var_9 : 1)));
                            var_23 = (arr_9 [i_3 + 1] [i_3 + 1] [i_3] [i_3 - 3] [3] [i_3 + 1]);
                        }

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_24 = (max(var_24, ((((arr_19 [2] [2] [i_1] [i_2]) ? (arr_1 [i_3 - 2]) : var_14)))));
                            var_25 ^= (((((var_13 ? var_5 : var_14))) ? var_11 : 0));
                            var_26 = ((1 - (arr_11 [i_3 + 1] [i_3 - 3] [i_3 + 1] [i_3 - 3] [i_3])));
                            var_27 += var_0;
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_31 [i_0] [i_1] [i_1] [i_0] [i_3] [i_8] = (~-9223372036854775802);
                            var_28 += ((max((arr_29 [3] [i_8] [i_3] [i_2] [i_1] [i_1] [i_0]), (arr_29 [i_0] [i_0] [i_2] [i_3 - 3] [i_8] [i_2] [i_8]))) ? (arr_9 [i_0] [3] [i_2] [i_3] [i_8] [i_1]) : ((max((arr_9 [i_0] [i_0] [8] [i_2] [i_3 - 1] [i_8]), (arr_9 [i_0] [i_0] [i_0] [i_3 - 3] [i_3 - 3] [i_8])))));
                        }
                        var_29 = (arr_20 [i_0] [i_1] [i_1] [i_3 - 1] [i_2] [3]);
                    }
                }
            }
        }
        arr_32 [i_0] |= (max(var_1, ((max((arr_4 [i_0]), (arr_19 [i_0] [i_0] [i_0] [0]))))));
    }
    #pragma endscop
}
