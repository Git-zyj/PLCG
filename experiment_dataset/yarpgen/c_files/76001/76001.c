/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    var_19 = (min(var_19, var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (((1371882795384945435 & (var_6 || -1371882795384945435))));
                var_21 = var_3;
            }
        }
    }
    #pragma endscop
}
