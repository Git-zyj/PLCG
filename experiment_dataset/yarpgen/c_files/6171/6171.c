/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((1 ? 190 : 66)), ((var_0 ^ (-2083943352 || var_8)))));
    var_11 -= ((1 ? ((((1 ? 76 : 236)) % 1)) : var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        var_12 = (((!(arr_3 [i_3]))));
                        arr_9 [9] [i_2] [5] [i_3 + 1] [i_3 - 1] = (max(43, -9533));
                    }
                    arr_10 [i_2] [i_2] = ((((max((arr_3 [i_0]), var_6))) ? var_5 : ((min(167, (!1))))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_13 &= ((!(((89 | (arr_8 [i_4] [i_0] [i_0] [i_0]))))));
                        var_14 = ((7340032 % (arr_4 [i_2 - 1] [3])));
                        arr_13 [i_2] [i_1] [i_2] [1] = (arr_6 [i_0] [i_0] [i_2 - 1] [i_2 - 1]);
                    }
                }
            }
        }
    }
    var_15 = 76;
    #pragma endscop
}
