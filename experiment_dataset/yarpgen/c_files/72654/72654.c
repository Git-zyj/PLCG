/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_0] = ((((((((arr_6 [i_0] [i_0]) << (var_0 - 71)))) ? (arr_6 [13] [i_2]) : ((var_11 ? var_7 : var_1))))) ? ((((((arr_4 [i_0] [i_1] [i_0]) ? 43757 : (arr_1 [i_0] [i_0])))) ? (arr_5 [i_1] [5] [i_0] [i_1]) : (arr_0 [i_2]))) : (((((var_12 ? 728597113927395928 : 1)) | (((max((arr_3 [i_0] [i_1] [i_1]), var_12))))))));
                    var_14 = (max(((max((arr_1 [i_0] [i_2]), ((var_7 ? (arr_6 [i_2] [i_1]) : var_11))))), ((~(arr_5 [i_0] [i_1] [i_0] [i_2])))));
                    arr_8 [13] [i_1] [i_0] = var_9;
                }
            }
        }
    }
    var_15 = var_11;
    var_16 = ((((max(var_6, var_5)))) ? (((((-21 ? var_3 : var_2))) ? ((var_4 ? var_12 : var_5)) : var_4)) : var_5);
    var_17 = (((((~((1 ? 5679 : -516141436))))) ? var_10 : var_1));
    #pragma endscop
}
