/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_7 [i_0] [0] [i_1] = ((~4920806465283749641) / ((112 ? -4920806465283749641 : -27)));
                var_16 ^= -32758;
                arr_8 [1] [i_0] [i_1 - 1] = (max(65535, -112));
            }
        }
    }
    var_17 &= min(((max(((94 << (3920202854 - 3920202846))), var_12))), ((var_1 + ((-94 ? var_10 : var_3)))));
    #pragma endscop
}
