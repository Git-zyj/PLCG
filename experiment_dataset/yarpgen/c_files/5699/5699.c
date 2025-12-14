/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((var_3 - (var_11 / var_5))), (var_3 - var_7)));
    var_17 += (max(var_12, ((((((1934 ? var_10 : var_1))) || 127)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 = ((max((max(var_14, 1934)), (((35 ? var_11 : 122))))) - ((~(min(124, 140737454800896)))));
                    var_19 |= (((var_12 * 65534) - (arr_5 [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
