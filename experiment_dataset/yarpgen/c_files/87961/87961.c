/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= ((((((var_15 + 2147483647) << (var_13 - 5941)))) ? (((!(((var_12 ? var_7 : var_10)))))) : var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((((((((arr_5 [i_1]) ? (arr_1 [i_0]) : (arr_3 [i_0] [i_0] [i_0]))))) ? (((((((arr_14 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0]) ? (arr_13 [i_0] [i_1] [8] [i_2] [i_3] [i_4]) : (arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4])))) ? (((arr_8 [1]) ? (arr_0 [i_0]) : (arr_3 [i_0] [i_0] [i_0]))) : ((~(arr_4 [i_0])))))) : (((arr_1 [i_2]) ? (((arr_11 [2] [2] [i_2] [7]) ? (arr_5 [i_3]) : (arr_6 [i_2] [9] [i_2]))) : (arr_6 [2] [i_3] [i_3]))))))));
                                var_21 = (max(var_21, (((~(arr_9 [i_2] [i_2] [i_0] [i_0]))))));
                                var_22 ^= (((((arr_3 [i_4] [i_1] [i_0]) ? (arr_11 [8] [i_1] [i_2] [i_3]) : (arr_11 [i_1] [15] [i_3] [i_4]))) + (((((arr_4 [i_0]) / (arr_15 [i_0] [1] [i_2] [i_3] [1]))) << (((arr_14 [i_0] [i_0] [0] [i_3] [i_3] [i_4]) - 15014))))));
                            }
                        }
                    }
                    var_23 &= (((((arr_13 [i_0] [i_0] [i_0] [1] [4] [i_0]) ? (arr_13 [16] [i_1] [i_1] [i_2] [1] [i_1]) : (arr_13 [i_0] [i_0] [i_0] [i_0] [16] [1]))) <= (arr_13 [i_0] [i_0] [i_0] [i_1] [0] [i_2])));
                    var_24 -= (((((((((arr_10 [i_0] [i_1] [i_2]) ? (arr_13 [16] [10] [6] [6] [0] [i_2]) : (arr_1 [i_2])))) ? (((arr_14 [i_0] [16] [i_1] [1] [i_2] [i_2]) ? (arr_3 [3] [i_1] [i_0]) : (arr_14 [6] [i_1] [i_1] [10] [i_1] [i_1]))) : (((!(arr_5 [8]))))))) ? (((arr_9 [i_0] [i_0] [i_1] [17]) ? (((arr_0 [i_0]) ? (arr_13 [i_0] [i_0] [i_0] [i_2] [4] [i_2]) : (arr_0 [i_0]))) : (((arr_15 [i_0] [i_1] [i_2] [i_0] [10]) ? (arr_4 [i_0]) : (arr_3 [i_2] [i_1] [5]))))) : ((((((arr_5 [i_1]) ? (arr_4 [i_1]) : (arr_12 [i_0] [i_0] [i_0] [i_0])))) ? (arr_13 [i_1] [2] [i_1] [i_1] [2] [i_0]) : (((arr_13 [i_2] [2] [8] [8] [2] [i_0]) ? (arr_1 [3]) : (arr_11 [i_0] [i_1] [i_2] [i_1])))))));
                    var_25 |= ((((((arr_4 [i_0]) ? (arr_0 [i_1]) : (arr_10 [i_2] [i_2] [i_2])))) ? (arr_9 [i_0] [i_1] [i_2] [i_0]) : (arr_14 [i_0] [4] [i_0] [6] [i_1] [i_2])));
                    var_26 *= (((((arr_5 [i_0]) ? (arr_6 [i_0] [i_1] [i_2]) : (arr_13 [i_2] [6] [i_0] [i_0] [6] [i_0]))) > (arr_7 [i_0] [i_1] [i_2] [i_0])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            {
                var_27 &= (((arr_20 [i_5] [i_6]) ? (arr_20 [i_5] [i_6]) : ((((arr_20 [20] [i_6]) != (arr_20 [i_5] [i_5]))))));
                arr_21 [i_5] [i_6] &= ((((((arr_19 [i_5] [i_6]) ? (arr_17 [i_5]) : (arr_17 [i_5])))) ? (((arr_18 [i_6] [i_6] [i_5]) ? (arr_17 [i_5]) : (arr_18 [i_6] [i_6] [i_6]))) : (arr_16 [i_5])));
                var_28 &= (arr_20 [i_5] [i_5]);
                var_29 ^= (arr_16 [i_5]);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 21;i_8 += 1)
                    {
                        {
                            var_30 = (max(var_30, (arr_25 [i_5] [i_6] [i_7] [i_7] [i_5] [8])));
                            var_31 = (min(var_31, (((!((((arr_24 [15] [i_7] [5]) ? (arr_17 [i_7]) : (arr_20 [i_8] [15])))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
