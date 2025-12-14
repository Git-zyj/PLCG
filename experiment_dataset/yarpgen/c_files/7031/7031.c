/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = ((((141 ? (min(-14614, 11684733136468101828)) : (((14614 ? 14601 : (-32767 - 1))))))) ? 31792183 : 50);
                var_21 ^= ((((max(((8128 ? 14601 : -25459)), 29744))) ? (((min((min(12980, -12981)), (min(255, 11152)))))) : ((-22870 ? ((min(14601, 3090946316))) : ((1462854389 ? 4294967278 : 11854033586551462065))))));
            }
        }
    }
    var_22 |= -12974;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                var_23 = (min(28110, (max((-32767 - 1), ((8 ? 142 : 1))))));
                var_24 ^= 19;
            }
        }
    }
    #pragma endscop
}
