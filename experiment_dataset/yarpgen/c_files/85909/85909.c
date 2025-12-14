/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((max(var_5, var_7))) ? var_11 : -var_3)) / var_12));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [18] = ((((((var_12 >= (arr_3 [i_0 - 1] [i_0 + 1]))))) & (max((max((arr_3 [i_1] [i_0]), var_8)), ((max(-92, 52410)))))));
                arr_7 [i_0] = (2922810133998380798 * 0);
            }
        }
    }
    #pragma endscop
}
