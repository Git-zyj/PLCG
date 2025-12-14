/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 = (+((+(((((arr_3 [15] [i_1] [i_0]) + 2147483647)) >> (((arr_3 [i_1] [i_1] [i_1]) + 1015463845)))))));
                var_19 = (((((181940529 >> (((arr_3 [i_0 - 1] [i_0 - 2] [i_0 - 1]) + 1015463842))))) ? ((9922 + (arr_3 [i_0 - 2] [i_0 - 2] [i_0 + 1]))) : var_0));
            }
        }
    }
    var_20 = var_8;
    var_21 = (((((((var_3 ? var_1 : var_15))) ? 4127643141 : var_8)) / (max(7, var_12))));
    var_22 = 18323;
    var_23 = var_8;
    #pragma endscop
}
