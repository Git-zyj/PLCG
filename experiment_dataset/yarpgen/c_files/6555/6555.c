/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_12));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_15 += (min((((arr_3 [i_0 - 4] [i_0 + 1] [i_1 + 1]) ? 262128 : 449569332722440875)), ((4252632443 ? 449569332722440878 : ((449569332722440852 ? 127 : -449569332722440876))))));
                var_16 = (min(var_16, (((var_9 ? (max(595611807, (arr_0 [i_1 - 1] [i_1 + 1]))) : (arr_1 [i_0]))))));
                arr_5 [i_0] [i_0] [i_0] = (arr_3 [i_0] [i_0 - 1] [i_0]);
                var_17 = ((((((var_2 >> var_4) ? (((max((arr_0 [12] [12]), var_5)))) : ((0 ? 1 : var_8))))) ? ((-1018474135 ? (max(89, -7854234439695060458)) : (arr_2 [i_0] [i_0] [i_0]))) : 1));
            }
        }
    }
    var_18 = ((-449569332722440877 ? 1 : 18446744073709551615));
    var_19 &= var_7;
    var_20 ^= var_8;
    #pragma endscop
}
