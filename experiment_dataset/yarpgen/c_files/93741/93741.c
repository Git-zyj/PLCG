/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= -772114740;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] = (max(((((((arr_7 [i_1] [i_1]) && 844122063166585549))) | (244 > 772114739))), 772114754));
                    var_12 -= ((((-772114740 ? 772114775 : 0)) * (arr_1 [i_1])));
                }
                var_13 -= ((~(!772114734)));
                var_14 = var_6;
            }
        }
    }
    var_15 = var_8;
    #pragma endscop
}
