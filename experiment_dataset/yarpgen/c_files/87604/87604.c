/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= var_11;
    var_21 |= (min(var_14, ((var_14 ? var_11 : var_14))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_22 = ((((arr_2 [i_0] [i_0]) ? 4693923035453466078 : (arr_1 [i_0 + 1] [17]))));
                var_23 |= ((+(((arr_0 [i_1]) - -1))));
            }
        }
    }
    #pragma endscop
}
