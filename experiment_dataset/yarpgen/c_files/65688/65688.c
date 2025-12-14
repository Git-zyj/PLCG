/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((min(var_1, 21965)));
    var_17 = (min(var_17, var_7));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] = (var_9 ^ 0);
                var_18 ^= (var_8 * 21954);
            }
        }
    }
    var_19 *= var_7;
    #pragma endscop
}
