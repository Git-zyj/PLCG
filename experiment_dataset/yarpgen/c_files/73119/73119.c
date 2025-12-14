/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((var_7 ? var_8 : var_15))) ? (min(var_10, var_9)) : (((var_2 ? 0 : var_6)))))) ? ((((max(var_12, var_14))))) : var_6);
    var_19 = ((((((3851838920 ? var_0 : 1))) ? (var_2 / 232) : (min(var_0, var_5)))) ^ (((min(127, -121)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 = ((~(!var_14)));
                    var_21 -= (((arr_4 [i_1 - 1] [11] [i_0 + 1]) == (((arr_4 [i_1 + 1] [i_0 + 3] [i_0 + 3]) ? var_5 : (arr_4 [i_1 + 1] [i_0 - 1] [i_0 - 1])))));
                    var_22 *= var_5;
                }
            }
        }
    }
    var_23 = ((((((var_15 ? var_12 : 1)))) ? 1 : (min(var_4, ((var_13 ? 1 : var_10))))));
    #pragma endscop
}
