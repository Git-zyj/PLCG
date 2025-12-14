/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                var_19 *= ((!(~40591868)));
                var_20 = 4254375457;
                var_21 = (((~(4630967952044321422 / var_6))) == (((var_10 ? (var_7 != var_8) : (!var_15)))));
                arr_7 [i_0] [i_1] = (min((arr_5 [i_1 + 1] [i_0] [i_1 + 2]), ((var_15 ? (arr_5 [i_1 - 4] [i_0] [i_1 - 4]) : var_0))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_22 = var_6;
        var_23 = (((var_7 ? var_1 : var_3)));
        var_24 -= -11223;
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_25 = ((var_5 ? (((arr_6 [i_3] [i_3]) ? ((var_0 ? -13300 : var_7)) : var_17)) : ((((arr_5 [i_3] [i_3] [i_3]) >= var_11)))));
        var_26 = (25 >= (((arr_12 [i_3]) % ((var_16 ? (arr_3 [i_3]) : var_4)))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                {
                    var_27 |= (((~var_6) ^ ((~(arr_5 [i_5 + 1] [2] [i_5 + 1])))));
                    var_28 = (max(var_28, ((max((((-(max((arr_14 [i_3] [10] [i_5 - 1]), var_1))))), (var_12 * var_2))))));
                    var_29 = (max(var_29, ((((arr_0 [i_4]) >> (var_9 - 2129694057676227850))))));
                }
            }
        }
    }
    #pragma endscop
}
