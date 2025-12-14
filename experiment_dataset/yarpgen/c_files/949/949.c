/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((((((((min(var_19, 21))) ? ((min(var_17, var_3))) : ((var_1 ? -13 : var_2))))) ? ((((~12) ? var_9 : var_12))) : (max(var_10, 5244252845711663924)))))));
    var_21 = (min((max(((min(var_19, -50))), ((var_12 ? var_15 : 114)))), -24));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_22 *= 21;
        var_23 *= (min(var_8, (~253)));
        arr_4 [i_0] [i_0] = ((9223372036854775807 ? -11 : 25));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_24 &= (min(6, (min(var_1, -7138292854795840205))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 12;i_3 += 1)
            {
                {
                    var_25 *= ((~(max((max(77377055486339754, 6)), 101))));
                    arr_13 [i_3] = ((-(!-9223372036854775807)));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    {
                        var_26 = var_3;
                        arr_27 [4] [4] [4] [4] = var_2;
                        var_27 = -13;
                    }
                }
            }
        }
        var_28 = var_11;
    }
    #pragma endscop
}
