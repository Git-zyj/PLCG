/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~(min(var_9, 44821)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            var_13 = (((arr_11 [i_0 + 2] [8] [i_1]) ? var_7 : ((var_1 ? (arr_5 [i_0 - 2]) : ((min(-90, (arr_6 [i_2] [i_1] [i_1] [i_4]))))))));
                            var_14 ^= var_7;
                        }
                        var_15 *= (min((((arr_4 [i_1 + 2] [i_1 + 2] [i_1]) & -23644)), (arr_8 [i_3] [i_2] [i_1] [i_0])));
                    }
                    arr_12 [i_0] [i_0 - 2] [i_0] [i_0] = (max((min(var_6, (arr_0 [i_1 + 1]))), (!var_8)));

                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        arr_15 [i_0 - 2] [i_0] [i_1] [i_2] [i_1] = ((var_1 ? (arr_13 [2] [i_1] [4] [i_1 + 1] [i_1] [3]) : ((var_6 ? (arr_1 [9] [i_0 - 1]) : (arr_1 [i_0 + 1] [i_1])))));
                        var_16 = (!var_1);
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 13;i_6 += 1)
                    {
                        arr_20 [2] [i_2] [6] = (arr_4 [i_0 + 1] [i_0 - 2] [i_1 - 2]);
                        var_17 = (var_11 * var_1);
                        var_18 = (var_8 & ((((-32746 + 2147483647) << (((var_6 + 97) - 19))))));
                        var_19 += (!var_2);
                    }
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        arr_24 [8] |= (arr_3 [i_7 - 1] [i_7] [i_7]);
                        arr_25 [i_0 - 2] [i_0] [6] [i_0] = (max(((max((arr_14 [i_1 + 1]), -32746))), (max(((var_0 ? (arr_9 [i_0 - 1] [i_7 + 1] [10] [i_7]) : (arr_21 [9] [11] [5] [1]))), (arr_0 [1])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
