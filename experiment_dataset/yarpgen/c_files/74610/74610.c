/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= ((!((min((var_6 && var_2), (min(-5329441698612509213, var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = 4084891270;
                var_14 = (((((arr_3 [i_0 + 1]) ? var_10 : (arr_5 [i_1] [i_1] [i_1 + 1])))) + (((5329441698612509242 ? ((-5329441698612509213 ? -1226093 : 8)) : var_2))));
            }
        }
    }
    #pragma endscop
}
