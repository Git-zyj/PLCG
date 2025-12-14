/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((var_6 ? (max((39128 * 1), (max(var_3, var_2)))) : ((((26408 || 9223372036854775807) ? var_9 : var_10))))))));

    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        arr_2 [i_0] [4] = ((max(var_4, (arr_0 [i_0 - 1]))) ^ ((((arr_0 [i_0 + 2]) ^ (arr_0 [i_0 + 3])))));
        var_16 = (min(var_16, (((~(((((26407 ? (arr_0 [i_0]) : var_1))) ? 26407 : (min((arr_1 [2]), (arr_0 [i_0]))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_4, (max((arr_13 [i_0 - 1] [i_0 - 2] [i_2] [6] [6]), var_4))));
                                var_18 ^= (min(((min(((~(arr_8 [8] [0]))), ((min((arr_7 [i_3] [2] [4]), (arr_7 [7] [i_4] [i_2]))))))), ((~((1455023927 ? (arr_8 [i_0] [i_0]) : (arr_4 [i_0] [1] [i_4])))))));
                                var_19 = (((max((arr_10 [9] [i_1] [i_2] [i_3]), (arr_7 [i_0 + 2] [i_2] [i_4]))) >> (((max(25, ((1455023927 ? 127 : 7168)))) - 113))));
                            }
                        }
                    }
                    arr_14 [i_0 + 1] [4] [i_2] [8] = (((((((arr_4 [i_0] [i_1] [3]) ? (arr_5 [i_0] [2]) : (arr_6 [i_0 + 3] [i_1] [i_2])))) > (arr_13 [i_0 - 4] [i_0] [1] [i_0 - 1] [i_0]))) ? 39122 : (arr_0 [i_0]));
                    arr_15 [9] = ((~(arr_7 [i_1] [4] [i_0 - 1])));
                    var_20 = (((((-(arr_12 [3] [i_1])))) ? (((max((arr_12 [i_0 - 3] [i_0 + 3]), 9792)))) : (((arr_12 [i_1] [i_0 + 1]) - (arr_4 [i_0 + 2] [i_0 - 2] [i_0 - 3])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 7;i_6 += 1)
        {
            {
                var_21 ^= ((arr_12 [i_5] [i_6 + 3]) ? var_8 : (((max(26407, (arr_12 [i_5] [i_6 + 3]))))));

                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    var_22 ^= ((((((2909028375778822472 / var_14) ? 0 : (!39553)))) ? ((~((min(var_12, var_12))))) : (((arr_21 [i_6 + 3]) ? (arr_21 [i_6 + 1]) : (arr_21 [i_6 - 1])))));
                    var_23 += (((arr_16 [3]) ? ((((min((arr_12 [i_5] [9]), (arr_18 [i_5] [i_6])))))) : (max((10231 >> var_10), (((arr_3 [i_7]) ? (arr_19 [i_7] [i_6 + 1] [i_5]) : 39128))))));
                }
            }
        }
    }
    var_24 = var_14;
    #pragma endscop
}
