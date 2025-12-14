/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 |= (min(((((((arr_4 [i_0] [i_0]) ? 2147483647 : var_1))) ? var_3 : (min((arr_1 [i_1]), 3696983576823937265)))), (arr_1 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [6] [i_2] [8] [i_3] = (((arr_0 [i_0]) - var_2));
                            var_19 = (min(var_19, ((((arr_2 [i_0]) ? 5612959828682108051 : var_3)))));
                            var_20 = -576275456;
                            arr_12 [i_2] = ((((!((max(4408100342363513091, var_5))))) ? var_10 : (max(((-5612959828682108051 ? 55 : 5612959828682108053)), -7505708025041646094))));
                        }
                    }
                }
            }
        }
    }
    var_21 = (min(var_21, ((((((35 ? var_8 : var_5))) ? (max(var_0, var_12)) : var_10)))));
    #pragma endscop
}
