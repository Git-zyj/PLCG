/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0 + 1] [i_1] = (min(((var_11 / (129 || 2375154406))), ((30171 & ((~(arr_4 [2])))))));
                var_18 = ((((((var_6 != -14264) ? 0 : var_11))) ? 7 : (var_14 % var_15)));
                arr_7 [i_0] = (((((var_11 ? ((((arr_5 [i_0] [9] [i_1]) >= 0))) : (~-4)))) ? ((0 ? (((1072693248 > (arr_5 [i_0 - 1] [i_0 + 3] [i_0])))) : -23)) : (min(((((arr_4 [i_0]) > 0))), -23))));
                var_19 = (min(var_19, (((max(-3216, ((var_2 ? var_11 : var_14))))))));
            }
        }
    }
    var_20 = var_15;
    var_21 = var_12;

    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_22 = (min(var_22, 1));
        var_23 = 19061;
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [i_3] = ((((min(var_2, var_17))) && (((1 ? 141 : 3336)))));
        arr_13 [i_3] &= ((-(((arr_8 [i_3]) ? var_5 : -23))));

        /* vectorizable */
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            var_24 *= (arr_9 [i_4 + 2]);
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] [i_4] = (arr_21 [i_3] [i_4] [11] [i_4 + 1]);
                        var_25 ^= 21539;
                        arr_23 [i_4 + 2] [i_4] [i_4 + 1] [i_4] [i_4] [i_6] = ((var_11 ? 0 : -29232));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            var_26 = (max(var_26, (((var_13 ? (arr_20 [i_3]) : 30720)))));
            arr_27 [18] = var_7;
        }
        arr_28 [i_3] = -var_13;
        var_27 ^= ((1 ? (((~var_8) ? (min(1, var_9)) : (((max(var_17, var_0)))))) : 4175));
    }
    #pragma endscop
}
