/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 += var_7;
                var_21 *= -11743;
                var_22 = (((((134217727 ? (((arr_0 [6]) * 0)) : (-13731 % 176)))) ? ((max(44320, 891418888))) : (((arr_3 [i_0] [i_1] [i_1]) ^ ((((arr_1 [i_1]) ? -16384 : -23815)))))));
                var_23 = (arr_5 [i_0]);
            }
        }
    }
    #pragma endscop
}
