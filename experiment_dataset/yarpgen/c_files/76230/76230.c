/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [1] = (arr_3 [i_0] [i_0] [i_1]);
                var_17 = var_1;
            }
        }
    }
    var_18 = var_1;
    var_19 = var_1;
    var_20 = var_15;
    #pragma endscop
}
