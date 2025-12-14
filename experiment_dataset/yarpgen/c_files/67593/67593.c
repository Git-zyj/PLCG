/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!var_13);
    var_16 = (min(((76 ? ((var_2 ? var_8 : 255)) : 1)), (max((var_12 + 65535), var_8))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((((-475835778 && 15052195854108642516) * ((4470852240549615538 ? 65535 : -475835778))))))));
                var_18 ^= var_7;
            }
        }
    }
    #pragma endscop
}
