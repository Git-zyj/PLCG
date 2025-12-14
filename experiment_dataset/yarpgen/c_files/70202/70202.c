/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((6776 != var_2) ? ((((((7486897478346883325 ? var_5 : 701787727))) || (((701787727 ? 7145072161207717965 : var_5)))))) : ((min(var_1, var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = 701787729;
                var_11 *= (arr_4 [i_0]);
            }
        }
    }
    #pragma endscop
}
