/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((max(-2755004233361334898, 6395)))) ? (min(754087802, -var_3)) : ((max(-6385, var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((-6417 ? 6408 : -6406))));
                var_20 = 71;
            }
        }
    }
    var_21 = var_8;
    #pragma endscop
}
