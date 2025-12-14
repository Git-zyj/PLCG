/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 -= 95;
    var_13 = (var_9 ^ var_5);
    var_14 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = (min((((arr_4 [i_1 + 1] [i_1 - 1]) ? (arr_3 [i_1 + 1] [i_1 - 1]) : 95)), ((max((arr_4 [i_1 + 1] [i_1 - 1]), (arr_4 [i_1 + 1] [i_1 - 1]))))));
                var_15 = (max((((arr_4 [i_1 - 2] [i_1 - 1]) ? (arr_4 [i_1 - 1] [i_1 - 1]) : var_5)), (~var_10)));
                var_16 = (max((((!((max((arr_1 [i_1]), var_2)))))), (arr_1 [i_1 - 1])));
                var_17 = var_8;
            }
        }
    }
    #pragma endscop
}
