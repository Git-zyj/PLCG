/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    var_18 |= min((max(-14939916769655516819, (min(5434265661068736761, var_6)))), (min(18446744073709551598, var_13)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 ^= arr_1 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, (min(9518894280852797213, 9970999935218130198))));
                    var_21 = min((max((arr_5 [i_0] [i_0] [i_1] [16]), (((arr_0 [i_0]) ? (arr_6 [i_0] [i_1] [i_2] [i_2]) : (arr_4 [i_0] [i_1] [i_0] [i_1]))))), (min((((arr_4 [i_0] [i_0] [1] [i_0]) ? (arr_7 [i_0] [i_1] [i_2] [i_2]) : (arr_7 [i_0] [i_0] [21] [i_0]))), var_11)));
                }
            }
        }
        var_22 = ((16450134841820897123 & ((-(((arr_1 [i_0]) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : var_15))))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_12 [i_3] = (13012478412640814867 ? ((((((arr_11 [i_3] [18]) ? (arr_0 [i_3]) : var_15))) ? (8927849792856754430 - 7664583298667813339) : ((12443385675783272723 & (arr_7 [i_3] [i_3] [i_3] [i_3]))))) : ((~(max((arr_3 [i_3] [i_3] [i_3]), 16683101358997528806)))));
        arr_13 [i_3] [i_3] = max((min((arr_0 [i_3]), (arr_8 [i_3]))), (((min(var_2, (arr_11 [i_3] [i_3]))) ^ (((arr_1 [i_3]) | var_2)))));
        var_23 = (min(var_23, (arr_0 [i_3])));
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 22;i_5 += 1)
            {
                {
                    arr_19 [i_5] [i_5] = ((((arr_3 [i_4 + 3] [i_4 - 1] [i_5]) ? (arr_3 [i_4 + 3] [i_4 - 4] [i_5]) : (arr_3 [i_4 - 3] [i_4 + 2] [i_5]))) ^ (min(var_6, (~var_8))));
                    var_24 = min((((arr_10 [6]) ? (arr_0 [i_5]) : 11418806049681574699)), (max((arr_0 [i_5]), (arr_4 [i_5] [i_3] [i_4] [i_3]))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        var_25 = (arr_18 [i_6] [14] [i_6] [14]);
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 16;i_9 += 1)
                {
                    {
                        var_26 -= ((arr_0 [i_8]) ? (arr_4 [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_9 - 1]) : (((arr_7 [i_6] [i_6] [i_6] [i_6]) ? 12677279736763284946 : (arr_9 [i_7]))));
                        var_27 ^= arr_3 [i_7] [i_8] [i_6];
                    }
                }
            }
        }
        arr_32 [13] = ((9251612404685166592 >> (2640113022719818703 - 2640113022719818688)));
        var_28 = (var_9 ? ((13012478412640814855 * (arr_31 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))) : (arr_18 [i_6] [i_6] [i_6] [12]));
        var_29 = ((arr_24 [i_6]) ? (arr_24 [i_6]) : (arr_24 [i_6]));
    }
    var_30 = (var_0 ? var_7 : ((min(var_1, (!var_16)))));
    var_31 = (var_13 ? ((var_14 | (18446744073709551596 != 18446744073709551612))) : var_2);
    #pragma endscop
}
