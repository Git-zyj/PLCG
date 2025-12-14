/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_10 = (((((var_7 || var_0) ? (max((arr_0 [i_0]), 14768431830282440170)) : ((((arr_0 [i_0]) * (arr_1 [i_0])))))) >= ((min((4294967295 & 1), (max((arr_3 [i_0] [i_1] [i_1 + 2]), -1443440018)))))));
                var_11 = (0 << 0);
            }
        }
    }
    var_12 = ((((((max(var_8, var_6))) ? (15 << var_3) : (~var_1)))) && ((((17511786404307941204 + 23) ? (var_5 && var_0) : (~var_4)))));
    #pragma endscop
}
