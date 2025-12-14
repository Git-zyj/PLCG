/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = ((((min((!var_3), 0))) ? ((~(~59))) : ((min(((max((arr_2 [i_1]), var_11))), 13)))));
                var_13 |= ((!((((((50 << (205 - 192)))) ? (max((arr_0 [i_0] [i_1]), var_3)) : ((max(var_11, var_4))))))));
            }
        }
    }
    var_14 = (((((((min(var_0, var_6))) ? ((83 ? var_1 : 9074408982918689365)) : (((-3472858480194536344 ? var_10 : 197)))))) ? var_11 : (max(var_7, -var_11))));
    var_15 = (min(var_15, ((min((min((37 < var_7), ((var_5 ? var_0 : -82)))), (~var_0))))));
    var_16 = var_7;
    #pragma endscop
}
