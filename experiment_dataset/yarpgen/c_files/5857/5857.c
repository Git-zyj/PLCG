/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_15 = (~((~(min(85013606, var_11)))));
                                var_16 = (min(var_16, ((min(((var_4 + (arr_4 [i_0] [i_0]))), (min((arr_8 [i_0] [i_0] [i_0]), var_4)))))));
                                var_17 = ((((((arr_9 [i_1 - 4] [1] [i_0 + 1] [i_4 - 3] [i_4]) == (arr_9 [i_1 - 4] [i_1] [i_0 + 1] [i_4 + 1] [i_4])))) | ((-1330914400268233449 ? (arr_9 [i_1 - 4] [i_1 - 4] [i_0 + 1] [i_4 + 2] [i_4 + 2]) : (arr_9 [i_1 - 1] [i_1 - 1] [i_0 + 2] [i_4 + 2] [i_4 + 2])))));
                                var_18 = (!var_11);
                                arr_10 [1] [1] [i_4] [i_3] = (((min((arr_3 [i_0] [i_0 - 1]), var_9))) + (max((((var_12 ? var_6 : var_12))), var_10)));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            arr_15 [3] [3] [9] [i_1 + 1] [11] [i_1] = 0;
                            var_19 = (arr_5 [i_0 + 1] [i_1 - 4] [i_2] [i_5]);
                        }
                        for (int i_7 = 1; i_7 < 10;i_7 += 1)
                        {
                            var_20 &= ((-13730 ? (arr_14 [i_0] [i_0] [i_0 + 2] [i_0 + 2] [i_1 + 1] [i_7 + 1]) : (arr_14 [i_0] [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_1 - 3] [i_7 + 2])));
                            var_21 = ((var_3 ? (arr_7 [i_0 + 1] [i_7] [i_7 + 2] [i_1 - 4] [i_0 + 1]) : (arr_12 [i_1 + 1] [i_1] [i_7 - 1] [i_0 + 1])));
                        }
                        arr_18 [i_0] [i_0] [i_1] [6] [1] [2] = (arr_6 [i_0] [i_0 + 2] [i_0] [i_1] [i_1 - 2]);
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_22 = (min(((-var_5 ? -37834 : 27702)), (!1)));
                        var_23 = (max((min((arr_8 [i_1 - 4] [i_0 + 1] [i_2]), (arr_0 [i_1 - 1]))), (arr_0 [i_1 - 2])));
                    }
                    var_24 ^= ((-var_12 ? (arr_0 [i_0 + 1]) : (arr_17 [i_0] [i_0 + 2] [i_1 + 1] [i_0 + 2] [i_1 + 1])));
                    arr_23 [9] [9] [0] [9] = (arr_16 [i_0 + 1] [i_1 - 3]);
                    var_25 = ((~(arr_17 [i_0 + 1] [i_0 + 1] [1] [i_0 + 1] [i_1 - 1])));
                }
            }
        }
    }
    var_26 *= ((!((((var_6 + 2147483647) >> (var_2 - 3172411963))))));
    #pragma endscop
}
