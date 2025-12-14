/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((-(max((arr_2 [i_0]), (min(904517752, 0))))));
                var_20 = (max((arr_0 [i_1] [i_0]), (min((arr_3 [i_1]), (arr_1 [i_0] [i_0])))));
            }
        }
    }
    var_21 = (max((max(var_4, var_5)), ((min(var_17, var_14)))));
    var_22 = (min(39393, ((-(max(0, 1134907106097364992))))));
    var_23 = (min(0, 4095));
    #pragma endscop
}
