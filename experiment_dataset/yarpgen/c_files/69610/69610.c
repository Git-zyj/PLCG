/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_17 = 32767;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_18 = ((31 ? 15930 : 1));
                        var_19 = ((((((arr_6 [i_0 + 1] [i_1] [i_3]) ? (arr_6 [i_0 - 1] [i_1] [i_2]) : var_10))) ? (((arr_6 [i_0 + 1] [14] [i_2]) ? var_10 : 19218)) : (-77 % -98)));
                    }
                }
            }
        }
        var_20 = (arr_3 [i_0 - 1]);
    }
    var_21 = ((((var_10 ? ((var_15 ? 8128 : 16382)) : (!var_4)))) ? var_13 : var_3);
    var_22 = ((((var_4 == ((49154 ? var_10 : var_11)))) ? ((var_5 ? var_3 : (max(var_14, var_9)))) : var_16));
    var_23 = (max(var_23, (((((min(var_6, (max(-11966, var_14))))) ? var_7 : 49154)))));
    #pragma endscop
}
