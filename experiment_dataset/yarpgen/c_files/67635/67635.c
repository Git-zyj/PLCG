/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_7 [i_0] [7] = var_7;
                arr_8 [i_0] = (max((((arr_1 [i_1 + 3]) ? var_2 : ((2924898699 ? var_4 : var_1)))), (((131 > (arr_4 [i_0]))))));
                arr_9 [i_0] [i_0] = var_8;
                var_10 = (max(-9041124554362937123, (((((max((arr_6 [i_0] [i_0]), 131))) ? var_0 : var_7)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_11 += ((((((((-9041124554362937123 + 9223372036854775807) << (2924898699 - 2924898699)))) ? (arr_14 [i_2 - 1] [2]) : (((arr_14 [i_2] [16]) ? 8 : (arr_16 [4] [i_3] [6]))))) > (min(var_5, 2))));
                    var_12 = (arr_10 [i_4] [i_2]);
                    var_13 += (((32749 ? (arr_18 [i_4] [i_3] [i_3] [i_2]) : (arr_18 [i_2] [i_3] [3] [i_4]))) & ((2044823693 ? (arr_18 [i_2 - 1] [i_3] [i_4] [i_4]) : 1333)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_14 *= ((-(arr_19 [i_2] [i_3] [i_4] [i_5])));
                                var_15 += var_0;
                                var_16 += (arr_18 [i_2 - 1] [i_4] [i_4] [i_3]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = ((~(min(-var_7, var_3))));
    var_18 ^= var_7;
    #pragma endscop
}
