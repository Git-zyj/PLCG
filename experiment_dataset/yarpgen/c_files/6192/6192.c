/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((4096 ? 8818674512738383887 : 9628069560971167746));
    var_19 = ((var_13 ? ((((~var_14) % ((var_15 ? var_1 : var_17))))) : (((((var_0 ? var_8 : var_8))) ? var_0 : var_6))));
    var_20 = ((-((((var_2 % var_10) < ((((var_11 + 2147483647) >> (var_16 - 18116)))))))));
    var_21 = (((var_8 / var_3) * (((-var_7 ? (((var_9 ? var_9 : var_17))) : (var_14 / var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_22 = ((243 ? 8 : 126));
                var_23 = (arr_3 [i_0]);
            }
        }
    }
    #pragma endscop
}
