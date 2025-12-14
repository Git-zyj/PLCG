/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= -32587;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = (max((((-942794334 & ((942794330 ? -942794310 : -942794327))))), (((((0 ? 1 : (-2147483647 - 1)))) & ((10 ? 0 : 7))))));
                arr_7 [i_1] = ((((max(-7978886153339472333, (~2147483647)))) ? ((min(554153860399104, ((min(458752, -102)))))) : (min(17181680893664312106, -1032532831))));
                arr_8 [i_1] [i_0] = 31068;
            }
        }
    }
    var_16 = var_0;
    var_17 = (((((((-9101771866838106376 ? 0 : 15409868027353511587)) * var_8))) ? var_0 : 101));
    #pragma endscop
}
