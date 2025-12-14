/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_17 ^= (min(((((max((arr_1 [i_0]), (arr_0 [i_0 - 1])))) ? (arr_0 [9]) : (((arr_0 [i_0 - 1]) ? (arr_1 [i_0 + 1]) : (arr_0 [i_0 - 1]))))), (max((arr_1 [i_0]), (((32 ? 16 : 78)))))));
        var_18 += (((((((arr_0 [18]) ? (arr_1 [i_0]) : (arr_0 [14]))))) ? (max(((((arr_1 [10]) ? (arr_0 [i_0]) : (arr_0 [3])))), (arr_1 [18]))) : ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])))) ? ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [17])))) : (arr_1 [i_0 - 1])))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_19 = ((((((arr_0 [6]) ? (((arr_0 [i_1]) ? (arr_3 [i_1]) : (arr_2 [i_1]))) : (((arr_3 [10]) ? (arr_1 [19]) : (arr_0 [i_1])))))) ? (((arr_1 [i_1]) ? (arr_2 [i_1]) : (((arr_3 [i_1]) ? (arr_2 [i_1]) : (arr_3 [i_1]))))) : (arr_1 [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    {
                        var_20 = (arr_10 [i_1] [i_1] [13]);
                        arr_11 [i_1] [i_2] [i_2] [i_4] [i_2] = (arr_3 [i_1]);
                    }
                }
            }
        }
    }
    var_21 = (((var_3 ? var_10 : ((var_11 ? var_6 : var_12)))));
    var_22 = var_16;
    #pragma endscop
}
