/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [3] = (((((1280520573 ? 2147483632 : -61))) - ((var_1 ? 937905821 : 4))));
                arr_6 [i_0] = (((-112 ^ -937905822) & -64));
                var_15 = ((-246809966 ? 779654008 : 2712866572));
                var_16 = ((var_4 << (241582911241728611 - 241582911241728604)));
            }
        }
    }
    var_17 = 1;
    #pragma endscop
}
