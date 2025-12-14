/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = (arr_2 [i_0 - 1]);
                var_14 = (-32767 - 1);
                var_15 *= (min(((32759 & (min(var_5, 2236788214162592308)))), (((~(var_8 + var_1))))));
                arr_7 [i_0] [i_0] [i_0] = (2206363849987991793 || 1);
            }
        }
    }
    var_16 = ((var_11 ? (min((~-682333828), var_4)) : ((81 ? 2147483622 : 76))));
    var_17 = (min((max(-177425827, var_3)), ((1 ? -32748 : -1049495137))));
    #pragma endscop
}
