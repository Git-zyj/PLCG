/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = var_10;
                arr_5 [i_0 + 1] [i_1] = var_10;
            }
        }
    }
    var_17 = -965;
    var_18 |= -955;
    var_19 = var_4;
    #pragma endscop
}
