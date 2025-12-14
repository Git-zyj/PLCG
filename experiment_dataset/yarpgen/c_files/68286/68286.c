/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 = var_1;
                    arr_10 [i_0] [i_0] [13] [5] = var_9;
                    var_13 = (max(var_13, (~25020)));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_14 = (((arr_18 [8] [i_4]) ? (31 + -30678) : (var_6 - var_10)));
                    var_15 = (min(var_15, var_10));
                }
            }
        }
        arr_19 [i_3] [i_3] = -var_2;
        var_16 = (((arr_14 [i_3] [i_3]) ? var_2 : 9664312082107750338));
        arr_20 [i_3] = 15210;

        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            var_17 -= ((((202 ? (arr_22 [i_3]) : (arr_23 [17] [i_3])))) ? (((var_5 ? -32064 : 30677))) : (arr_22 [i_6]));
            var_18 ^= 30677;
            var_19 ^= ((~(var_1 + 43891)));
            var_20 = ((~(arr_21 [i_6] [i_3])));
        }
    }
    #pragma endscop
}
