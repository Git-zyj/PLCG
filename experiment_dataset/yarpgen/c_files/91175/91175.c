/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = 9223372036854775808;
                    var_16 &= ((((var_13 && var_12) ? (9223372036854775809 || 7) : ((((arr_4 [i_0] [i_0] [i_0]) || 1))))));
                    var_17 = var_9;
                }
            }
        }
    }
    var_18 = ((!(-var_15 < -var_14)));
    var_19 = (min((!var_3), ((-8 ? 0 : 15))));

    for (int i_3 = 4; i_3 < 19;i_3 += 1)
    {
        arr_10 [i_3] = ((var_10 ? ((((-8 <= (((var_1 + 9223372036854775807) << (((arr_9 [i_3 - 1] [1]) - 748932975)))))))) : (arr_9 [i_3] [i_3])));
        var_20 = -362955601;
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        arr_13 [i_4] = (arr_9 [i_4] [i_4]);
        var_21 = (min(var_21, 128));
        arr_14 [i_4] [i_4] = var_3;
    }
    var_22 = var_9;
    #pragma endscop
}
