/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = -var_5;
                var_21 = (((((var_17 ? (arr_2 [i_0]) : var_13))) ? var_5 : (arr_5 [i_0] [i_1])));
                var_22 = 35;
                var_23 = ((((max(var_12, -605061639))) ? 15680 : -36));
            }
        }
    }
    #pragma endscop
}
