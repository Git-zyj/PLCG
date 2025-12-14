/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (arr_0 [i_0]);
                arr_6 [i_1] [i_0] [i_0] = 51;
            }
        }
    }
    var_17 = ((~((~(min(1, var_1))))));
    var_18 = var_7;
    var_19 *= (max(var_8, (~2622339456)));
    #pragma endscop
}
