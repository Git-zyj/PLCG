/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (((var_0 | var_9) ? var_3 : ((((min(var_2, var_2))) ? (((var_2 ? var_5 : var_6))) : -4113976438749120856))));
    var_11 = ((~-var_3) ? var_7 : var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = (((min(var_4, 4))) ? -var_5 : (~var_7));
                var_13 = ((((min((min((arr_0 [i_0]), var_6)), var_6))) / ((var_7 + (arr_1 [i_1] [i_0])))));
                var_14 = (min(((var_3 ? (arr_4 [i_0]) : (arr_4 [i_0]))), 187));
                var_15 = ((~(((-30349 + 2147483647) >> (arr_2 [i_0])))));
            }
        }
    }
    var_16 -= (min((min(var_2, -var_6)), -112));
    #pragma endscop
}
