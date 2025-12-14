/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((~(0 << 29)));
                    var_19 *= ((((max((arr_0 [i_1] [i_1]), ((25 ? -117 : 631665374244046733))))) ? (((!163) ? ((min(var_9, 2100950073))) : (min(9122756086332020380, 1)))) : (((min(0, 1))))));
                    var_20 ^= (max(99, 1));
                    arr_7 [i_0] [i_0] [i_2] = ((~(arr_5 [i_0] [i_1] [i_2] [i_2])));
                }
            }
        }
    }
    var_21 = (((min(((min(var_1, 1))), var_7)) << ((((max(1, 1)) && var_5)))));
    #pragma endscop
}
