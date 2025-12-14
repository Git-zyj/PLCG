/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = 11095;
                var_21 = (min((((!((min(var_10, var_3)))))), (min((min(32762, var_4)), var_11))));
            }
        }
    }
    var_22 = (max((((-11082 ? var_5 : (((min(var_15, 45))))))), (min((max(-11096, var_3)), 6144))));
    #pragma endscop
}
