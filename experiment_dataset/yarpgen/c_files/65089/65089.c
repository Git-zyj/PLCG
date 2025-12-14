/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_20 = ((1667 ? -1668 : (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_2] [i_3] = ((var_18 ? (arr_4 [i_2]) : (arr_7 [i_1 - 1] [i_1 - 1] [i_0])));
                        arr_13 [i_2] = (((arr_4 [i_1 - 1]) ? (arr_4 [i_1 - 1]) : var_13));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        arr_16 [i_0] [i_0] [i_0] = (((arr_6 [i_2] [10] [i_0]) ? 1667 : (arr_10 [i_0] [i_1 - 1])));
                        var_21 ^= (((-1668 < 86) ? ((17422016093139063984 ? var_12 : 15)) : var_9));
                        arr_17 [i_4] = (((arr_9 [i_0] [i_1 - 1] [i_1 - 1] [i_2]) & 3211));
                        var_22 = (((-2151997835635790974 * 0) ? ((var_15 ? var_13 : var_0)) : (arr_0 [i_1 + 1])));
                    }
                    arr_18 [i_0] [i_0] [i_0] [i_0] = (((~-2147483635) ? (arr_14 [i_1] [i_1]) : ((0 ? var_7 : (arr_14 [i_1] [i_1])))));
                }
            }
        }
        arr_19 [i_0] [i_0] = -4589647066823894332;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 23;i_8 += 1)
                {
                    {
                        var_23 = (max(var_23, ((((((6042 ? 0 : var_10))) ? (21362 > 1) : (4 / 9027))))));
                        arr_30 [i_5] [i_7] = ((var_13 ? var_4 : (arr_29 [i_5] [i_6] [i_6] [i_8 - 1])));
                    }
                }
            }
        }
        var_24 = (var_4 ? var_0 : ((-1664 ? var_1 : 49277)));
        arr_31 [i_5] = (arr_8 [i_5] [i_5] [i_5] [i_5]);
        var_25 ^= (39652 - -1668);
    }
    var_26 = ((~(((9027 ^ var_17) << (var_4 - 24)))));
    var_27 = -1603;
    var_28 = ((var_4 ? (!var_5) : (((var_11 & 11524) & var_12))));
    #pragma endscop
}
