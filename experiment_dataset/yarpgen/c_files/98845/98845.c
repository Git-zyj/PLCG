/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= var_13;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = (min(var_20, var_13));
        var_21 *= ((~((-(~var_12)))));
        var_22 = ((~((~((0 ? var_18 : 9689241963662295640))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_23 ^= ((~(((((var_1 ? var_12 : var_9))) ? (((-1386133066 & (-32767 - 1)))) : var_4))));
                    var_24 = (min(var_24, (!var_18)));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 19;i_5 += 1)
                {
                    {
                        var_25 = var_16;
                        arr_15 [i_3] [i_0] [i_0] = var_15;
                        var_26 = (max((((!(~var_10)))), (min((max(var_9, var_10)), var_9))));
                        var_27 = (max(((min(-24, var_6))), (max(var_2, var_14))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
