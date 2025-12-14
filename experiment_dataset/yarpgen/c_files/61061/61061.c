/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((102 == 4294967295), (((((57275 ? var_2 : var_5))) ? (var_1 - var_9) : 127))));
    var_16 = ((var_10 ? (((var_12 | 0) ? var_12 : ((127 ? var_3 : 0)))) : var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [0] = (((((((var_8 ? -28479 : var_0))) ? (arr_6 [i_2] [i_2 + 1] [i_2 - 1] [i_2 + 2]) : (((arr_4 [i_1] [i_1]) ? (arr_1 [i_0]) : var_2)))) & ((((~4294967273) == 65534)))));
                    var_17 = (min(var_17, (((65520 ? var_6 : (-43 | 4294967295))))));
                    arr_10 [i_1] = ((((((((233 ? var_11 : var_11))) ? ((var_8 << (33554368 - 33554362))) : 15))) ? var_10 : ((((arr_2 [i_1] [i_2]) ? (-11478 <= 3325239586830543950) : 142)))));
                }
            }
        }
    }
    #pragma endscop
}
