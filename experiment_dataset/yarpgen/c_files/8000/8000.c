/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (min(2885, ((((1 ? 2438370036 : 4294967285))))));
                var_18 += (max((((arr_5 [i_0 - 1] [18] [i_0 - 1]) ? (arr_3 [i_0 + 2] [i_0 + 2] [i_0 - 1]) : 4294967285)), ((min((arr_0 [6]), (arr_4 [i_0]))))));
                var_19 = (arr_2 [i_0] [i_0]);
            }
        }
    }
    var_20 = var_15;
    var_21 = (max(var_21, ((((!11) != var_15)))));
    #pragma endscop
}
