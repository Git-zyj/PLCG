/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 = 12288;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 &= (arr_6 [i_1] [i_3] [i_4 - 1]);
                                var_15 = (arr_8 [i_0] [i_0] [i_0] [i_3] [i_4 + 1]);
                                var_16 = ((((min(9223372036854775803, 9223372036854775792) >> (((arr_8 [i_0] [i_4 + 1] [i_2] [i_3] [i_0]) - 3975594390))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_17 ^= (((((arr_13 [i_1] [i_1] [i_1] [i_1]) ^ (arr_13 [i_0] [i_0] [i_0] [i_0]))) + (-8574096705455223795 / 815020801)));
                        arr_14 [i_5] [i_0] [i_0] [i_0] = ((!(((~((var_1 ? (arr_6 [i_0] [i_0] [i_1]) : var_4)))))));
                        arr_15 [i_2] = -6059446940019991621;
                        arr_16 [i_0] [i_1] [i_2] [i_2] [i_5] = (~6678966213232313755);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        arr_19 [i_0] [i_0] [i_1] [i_0] [i_1] [i_2] |= (((((((arr_17 [i_0] [i_0] [i_2] [i_0] [i_6] [i_6]) == var_3)))) & 11767777860477237866));
                        arr_20 [i_0] [i_1] [i_6] [i_1] [i_6] = (arr_2 [i_0] [i_0] [i_0]);
                        arr_21 [i_6] [i_1] [i_2] [i_2] [i_6] = var_4;

                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_6] [i_0] = (((arr_11 [i_7] [i_2] [i_2] [i_1] [i_0]) ? (arr_11 [i_0] [i_1] [i_2] [i_2] [i_1]) : (arr_6 [i_0] [i_1] [i_7])));
                            var_18 = (arr_7 [i_0] [i_2]);
                        }
                        arr_25 [i_0] [i_6] [i_6] = (arr_17 [i_6] [i_2] [i_1] [i_1] [i_0] [i_0]);
                    }
                }
            }
        }
    }
    var_19 |= var_10;
    #pragma endscop
}
