/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_10 |= ((((-(max(0, 88480293)))) >> (((((3800388547 ? 3294 : 18446744073709551605)) < (~35271))))));
                var_11 = max((max(-1, (!2244602121))), ((((!24) && -2244602121))));
            }
        }
    }
    var_12 = -2244602121;
    #pragma endscop
}
