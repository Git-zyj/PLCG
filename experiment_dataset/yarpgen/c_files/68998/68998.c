/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (((!var_5) || (((var_18 - (var_7 || var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = (((((~(arr_3 [i_1])))) ? var_13 : ((~(arr_4 [i_1])))));
                var_22 |= (((arr_3 [i_0 - 1]) ? (((arr_3 [i_0 - 1]) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 - 1]))) : ((var_12 ? (arr_3 [i_0 - 1]) : (arr_3 [i_0 + 1])))));
                var_23 = (max(var_23, (arr_2 [i_1] [i_0 + 1])));
            }
        }
    }
    #pragma endscop
}
