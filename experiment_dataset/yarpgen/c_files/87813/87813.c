/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min(var_2, (((~var_11) % ((var_2 >> (1391984117 - 1391984095))))));
    var_14 = (((0 % 3043) << ((((18692 << (3043 - 3034))) - 9570293))));
    var_15 = var_12;
    var_16 = ((18446744073709551615 ? 198 : 3043));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = ((-(min((arr_5 [i_1] [i_1 - 2] [9]), var_5))));
                var_18 = 62493;
                var_19 = -60;
                var_20 = ((62493 ? 62493 : 62493));
            }
        }
    }
    #pragma endscop
}
