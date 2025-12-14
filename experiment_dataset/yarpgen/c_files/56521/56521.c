/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((var_6 < (var_6 - 0))))) + (var_0 + var_8)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 = 68;
        arr_4 [i_0] = var_4;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_13 = ((((arr_5 [i_1] [i_1]) + 9223372036854775807)) << (((var_10 + 2037055260) - 52)));
        arr_7 [i_1] [i_1] = ((-(((arr_5 [i_1] [i_1]) ? var_3 : var_9))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_14 = (arr_1 [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    arr_16 [11] [i_2] [i_2] = ((!((max(((var_9 | (arr_14 [1] [i_2] [i_2]))), (var_3 ^ var_3))))));
                    var_15 = (85 ? ((-231 ? ((-84 ? var_1 : var_7)) : (~7))) : (arr_3 [i_2] [2]));
                }
            }
        }
    }
    var_16 -= ((4 ? (max(0, 0)) : ((max(((var_5 ? var_9 : var_9)), ((0 << (var_3 - 45403))))))));
    #pragma endscop
}
