/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_6;
    var_15 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 ^= (((((min((arr_0 [i_2] [i_2]), var_5)))) + (((((631156234 ? (-2147483647 - 1) : 52074))) ? (((-(arr_3 [3] [i_1] [i_2])))) : (max(823830748149256362, var_2))))));
                    var_17 = ((var_12 ? (min(18446744073709551615, 1)) : var_1));
                    var_18 = max(((var_8 ? (arr_1 [i_0] [7]) : ((~(arr_4 [i_0 + 1] [i_0 + 1]))))), ((((~8357164565041154884) ? var_9 : -0))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        var_19 = ((~0) ? (arr_6 [i_2] [i_1] [i_2]) : (var_0 || var_6));
                        var_20 = (max(var_20, ((((arr_7 [i_3] [i_2] [i_1] [i_0]) ? ((((arr_3 [i_0] [7] [i_0]) == 13461))) : 2147483647)))));
                        var_21 = (((arr_8 [i_0] [i_0] [i_0 + 1] [13]) > 96));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_22 = (((arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]) - (arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                        var_23 = ((0 ? (arr_1 [i_0 + 1] [i_0 + 1]) : (arr_1 [i_0 + 1] [i_0 + 1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
