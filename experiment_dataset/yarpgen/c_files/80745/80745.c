/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (min((min((var_9 == var_14), ((var_0 ? var_4 : var_6)))), ((((((0 ? 1 : -7449677331029361867))) ? (!var_0) : -68)))));
    var_16 = ((((max((~var_12), ((var_10 ? -11 : 20))))) ? (((1 ? var_2 : ((59 ? var_0 : var_3))))) : var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_1] [8] [i_0] = (1 * (~-59));
                    arr_8 [i_0] [5] [i_1] [i_2] = ((((min((arr_1 [i_0]), (((-59 ? (arr_4 [i_1] [i_1]) : (arr_0 [20]))))))) ? (((arr_2 [i_0] [i_0] [i_1]) ? (arr_3 [6] [i_1] [11]) : (min((arr_6 [i_1] [i_1]), (arr_6 [2] [i_2]))))) : ((((~9223372036854775807) || (((-59 ? (arr_2 [i_0] [i_1 + 1] [i_1]) : 13))))))));
                }
            }
        }
    }
    #pragma endscop
}
