/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((((((~-118) < var_13)) && (119 > var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (((arr_1 [i_1 - 1] [i_1 - 1]) ? (((!(arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1])))) : (((arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1]) % (arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                var_22 -= ((!(((6 ? 246 : var_1)))));
            }
        }
    }
    var_23 = (var_9 == var_0);
    var_24 = -118;
    var_25 -= var_19;
    #pragma endscop
}
