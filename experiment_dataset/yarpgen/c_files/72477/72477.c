/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (min(var_5, var_5));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_20 = (((8 || var_1) ? (arr_3 [i_0 - 1] [i_0 - 1] [i_1 + 1]) : 125829120));
                var_21 = (max((max((arr_4 [i_1] [3] [i_0]), 0)), ((((arr_4 [i_0] [7] [i_0]) || var_12)))));
                arr_7 [i_0] [i_0] [i_0] = (((((min(125829129, (arr_4 [i_0] [i_0] [i_0]))) * -var_10)) * (max(-647212940, 125829156))));
            }
        }
    }
    var_22 = ((-125829121 ? (~-32746) : 125829147));
    var_23 = var_4;
    #pragma endscop
}
