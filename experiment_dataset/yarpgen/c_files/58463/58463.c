/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    var_18 = ((var_9 ? var_4 : ((((max(var_15, var_12))) ? ((82 ? 15825895934171440236 : var_7)) : var_7))));
    var_19 &= var_15;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = (((max((max((arr_1 [i_1]), (arr_2 [i_1] [i_2]))), 1934315415)) << (((arr_2 [i_1] [i_2]) - 2141613451))));
                    var_21 = (max((14487 && -4482), ((((!(arr_6 [i_0] [i_1] [i_0]))) && (arr_0 [i_0] [i_1])))));
                    var_22 = (min(var_22, (((91 ? (max(((((arr_1 [i_1]) || (arr_0 [i_2] [i_1])))), (((arr_1 [i_1]) ^ (arr_1 [i_1]))))) : ((~(~1047115317))))))));
                    arr_8 [i_1] = ((((!(-1 && 227))) || ((max((arr_1 [i_0]), var_16)))));
                }
            }
        }
    }
    var_23 = (max(var_23, var_12));
    #pragma endscop
}
