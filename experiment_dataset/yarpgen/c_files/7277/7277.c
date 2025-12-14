/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (max(var_5, (!-21)));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_14 *= 0;
        var_15 = min((arr_0 [i_0 + 1] [16]), var_7);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_16 = ((((347934571 || ((max(1, 71))))) && (((((((arr_0 [8] [8]) % var_0))) ? var_2 : (arr_3 [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_17 = (((-((124 ? 79 : 6)))));
                    var_18 = (max(var_18, ((((((!(arr_6 [i_3]))) ? (((-106 || (arr_10 [i_1] [i_2])))) : (arr_0 [i_1] [6])))))));
                }
            }
        }
    }
    var_19 = ((min((81 - -81), ((max(-106, 16))))));
    var_20 = var_7;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 17;i_5 += 1)
        {
            {
                var_21 = var_5;
                var_22 = (max(var_22, (((-118 ? -11 : 199)))));
                arr_17 [18] [i_5] [i_5] = ((-(arr_16 [16] [16])));
                var_23 = (max((min(var_9, (arr_11 [i_4])), ((min((arr_12 [i_5]), (arr_11 [i_5])))))));
            }
        }
    }
    #pragma endscop
}
