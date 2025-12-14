/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((!(!114994701))) || (!421289738)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (max(var_18, -1));
                var_19 = ((((((max(var_13, var_12)) > (((max(var_5, 0))))))) + (arr_0 [i_1] [i_0])));
            }
        }
    }
    #pragma endscop
}
