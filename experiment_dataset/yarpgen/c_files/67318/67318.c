/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((var_0 ? 15929429382925720570 : (((var_13 ? -1505926750 : var_6))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = (((((~(arr_1 [i_1 + 1])))) ? ((min(var_10, (((arr_5 [i_0] [i_0]) * var_2))))) : (((2691292001605414379 ? (arr_2 [i_0]) : var_15)))));
                var_22 *= ((((((274900443 <= 7613055735072665815) * (-28737 > var_6)))) ^ 2691292001605414392));
                var_23 = var_6;
            }
        }
    }
    #pragma endscop
}
