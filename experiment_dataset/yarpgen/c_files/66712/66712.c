/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((var_10 != 51) - ((-4029642231472847228 ? var_9 : var_5))))) ? (((-var_8 ? 65531 : (var_3 || var_8)))) : var_8));
    var_12 = ((var_10 ? var_0 : var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((56222 ? 18014123631575040 : var_1)));
                arr_5 [i_1] [i_0] = (((((((arr_2 [i_1] [i_1] [i_0]) - 37190)))) ? -2511 : (max((max((arr_0 [15] [i_1]), var_2)), (~3987108507)))));
            }
        }
    }
    var_13 *= ((!(!var_10)));
    var_14 = (!var_0);
    #pragma endscop
}
