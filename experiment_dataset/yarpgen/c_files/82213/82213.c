/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_7 / var_5) ? (((((-9223372036854775807 - 1) / -104)))) : ((min(var_0, 629247005)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 = (arr_2 [i_0]);
                    arr_7 [i_2] [i_1] = ((5770 ? (min((~var_3), 18446744073709551615)) : var_7));
                    var_13 -= (max((((arr_2 [i_0]) - var_0)), ((((1152920405095219200 ? (arr_1 [i_0]) : 2539042857)) % ((((arr_3 [i_0] [i_0]) ? 1 : var_10)))))));
                    var_14 = (max(((-((((arr_2 [i_0]) == 255))))), var_8));
                }
            }
        }
    }
    var_15 -= ((((((~1) ? ((var_3 ? var_6 : 1)) : var_10))) ? ((((!((min(171, var_5))))))) : ((((max(var_1, var_9))) ? 5658731758290212321 : (~var_4)))));
    var_16 = ((((min((var_6 && 1127364642), ((4064 ? var_4 : var_6))))) ? ((var_10 ? (max(573416225, var_7)) : (~var_2))) : ((max((45348 == var_2), -43726)))));
    #pragma endscop
}
