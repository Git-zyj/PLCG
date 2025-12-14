/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = 1;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_10 = ((((min((-32767 - 1), 177))) ? 0 : (((var_8 / (arr_4 [i_1] [i_1] [i_1 + 2]))))));
                        var_11 *= (min((min(29, (arr_3 [i_1 + 2]))), (min((arr_3 [i_1 + 1]), (arr_0 [i_2 + 1])))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 9;i_4 += 1)
    {
        arr_13 [i_4] = ((!(arr_4 [i_4 - 3] [i_4 - 4] [i_4 - 4])));
        var_12 -= (arr_12 [i_4 + 1]);
        var_13 += var_8;
        var_14 = (((~97) <= (arr_0 [i_4])));
    }
    var_15 = var_9;
    var_16 = (min(var_16, var_4));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    arr_22 [2] [i_6] [i_6] [i_5] = ((var_2 * (((var_8 / 1) * 11))));
                    var_17 ^= ((((((((22872 ? 10032 : 177))) || (((90 ? (arr_8 [i_5] [i_5] [i_5] [i_5] [i_5] [1]) : var_3)))))) <= (((arr_0 [i_7]) ? (arr_7 [i_5] [i_5]) : 78))));
                }
            }
        }
    }
    #pragma endscop
}
