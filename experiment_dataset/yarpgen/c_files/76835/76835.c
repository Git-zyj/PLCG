/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, var_8));
                    var_15 = var_9;
                    var_16 = (i_0 % 2 == zero) ? ((max(((((((var_11 ? var_11 : -18995)) + 2147483647)) >> (((arr_7 [i_0] [i_0]) - 22958)))), 19273))) : ((max(((((((var_11 ? var_11 : -18995)) + 2147483647)) >> (((((arr_7 [i_0] [i_0]) - 22958)) + 9645)))), 19273)));
                }
            }
        }
    }
    #pragma endscop
}
