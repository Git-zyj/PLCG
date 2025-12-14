/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_15);
    var_19 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((((max((arr_3 [i_1 + 1] [i_1 - 1]), (arr_5 [i_1] [i_1])))) ? ((((((arr_3 [i_0] [i_0]) ? var_17 : 20))) ? (arr_5 [i_1 - 1] [i_1]) : (~255))) : 9));
                var_20 = (arr_2 [i_0]);
            }
        }
    }
    var_21 = ((min(((184 ? -550 : var_8)), (max(var_17, var_0)))));
    #pragma endscop
}
