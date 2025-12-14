/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~((((1589104758 ? 11 : 2199023255551))))));
    var_14 &= 114;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((max(((~(arr_2 [i_0]))), (arr_4 [i_1] [i_0] [i_1]))))));
                arr_5 [i_0] [i_1] = ((18297 ? (((~(arr_0 [i_0] [15])))) : ((~(arr_3 [i_0])))));
                arr_6 [i_0] [i_0] [i_0] |= (max((~var_0), (arr_3 [i_0])));
                var_16 += (((13586 + var_5) ? ((((max(339526906, 2105193265))) + (((arr_2 [i_1]) ? (arr_3 [12]) : 18446603336221196288)))) : (max(3480721724, 14503946198904543031))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 24;i_3 += 1)
        {
            {
                var_17 = (min((((arr_10 [i_3] [i_3 - 2]) ? (arr_7 [i_2 - 2] [i_3 + 1]) : var_8)), ((max((arr_7 [i_2 - 2] [i_3 - 1]), (arr_7 [i_2 + 3] [i_3 + 1]))))));
                arr_12 [i_2] [i_3] [22] = var_6;
                var_18 = ((!(arr_11 [13] [i_2] [i_3 - 1])));
                var_19 = var_9;
                var_20 = (max(var_20, ((min((624647625239061520 | 339526906), (min((((arr_9 [i_2 + 2] [i_2 + 2] [i_3]) ? var_8 : var_12)), ((max((arr_8 [i_3]), (arr_8 [i_2 + 1])))))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            {
                var_21 = (25274 ? 127 : (max(-1046608386, 28466)));
                arr_17 [i_4] [i_4] = (min((min((arr_16 [i_4] [i_5] [i_5]), (arr_16 [i_4] [i_4] [i_4]))), var_6));
                arr_18 [19] [i_5] [i_5] = (min((((max(var_12, 16)))), (max((arr_8 [i_5]), (((arr_13 [i_5]) - var_7))))));
            }
        }
    }
    #pragma endscop
}
