/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (((((((arr_2 [i_1]) & var_11))) ? (!-10) : (var_10 < var_13))));
                arr_4 [i_0] [i_0] = ((((!(arr_0 [i_0 - 1]))) ? (arr_0 [i_0 + 1]) : ((min(var_14, 241)))));
                arr_5 [i_1] [i_1] [i_1] = (~var_1);
            }
        }
    }
    var_21 = var_3;
    var_22 = (min(-var_6, ((var_8 ? (var_9 ^ var_6) : ((var_6 ? var_16 : 6289216268558181457))))));
    #pragma endscop
}
