/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = (((32767 || 16382) ? (((max(16384, 13209)))) : -20));
                arr_4 [6] = (((32767 ? 3600536328569435098 : 56296)));
            }
        }
    }
    var_20 = (~var_8);
    #pragma endscop
}
