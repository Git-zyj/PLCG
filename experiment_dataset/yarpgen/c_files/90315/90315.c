/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -599989664;
    var_17 = (((7 >= 1) ? -1780747503 : 65535));
    var_18 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_8 [i_0] = 0;
                var_19 = ((1 ? (63 | 2895802935520787547) : 2047));
            }
        }
    }
    var_20 = ((65516 >> 20) / 50127);
    #pragma endscop
}
