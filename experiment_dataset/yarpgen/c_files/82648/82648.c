/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_13 -= (max(0, (((((~(arr_2 [i_1] [i_1] [i_1])))) ? (~0) : var_1))));
                var_14 = (min(var_14, (((65535 ? ((min((arr_1 [i_1]), (~var_9)))) : (max(((((arr_3 [i_0] [i_0]) & 65535))), -var_7)))))));
                var_15 -= min((((arr_0 [i_0 - 1]) ? 65535 : var_3)), (arr_3 [i_0] [i_1]));
                arr_4 [i_0] [i_0] [i_0] = ((~((~(~65535)))));
            }
        }
    }
    var_16 ^= (max(var_10, (~1)));
    var_17 &= 65515;
    #pragma endscop
}
