/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    var_20 -= var_7;
    var_21 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_22 = ((((arr_1 [i_0] [i_0]) ? var_13 : (arr_0 [19]))) != (arr_1 [i_0] [i_0]));
        var_23 = ((var_9 ? ((((arr_2 [i_0]) ? (arr_2 [i_0]) : var_3))) : (arr_3 [i_0] [9])));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_2] [i_2] = ((-215 ? ((((var_3 && (arr_1 [i_0] [i_0]))))) : (arr_6 [i_0])));
                    arr_11 [i_2] [5] [i_2] [1] = ((~((38 ? -83 : -1946019448))));
                    var_24 = ((((var_0 ? 110 : (arr_0 [i_0]))) << (((31 * var_5) - 1283928369))));
                    arr_12 [i_1] |= (!18446744073709551615);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 16;i_6 += 1)
                {
                    {
                        var_25 = (min(var_25, (((var_7 ? (arr_16 [0]) : (arr_16 [16]))))));
                        var_26 *= (((arr_1 [i_4] [i_5]) ? (((arr_19 [i_3] [i_4]) << (33 - 32))) : var_3));
                    }
                }
            }
        }
        var_27 ^= (((~0) ? (var_17 * var_9) : (arr_14 [i_3] [i_3 + 2])));
        arr_26 [i_3] = (((((arr_14 [i_3] [i_3]) && (arr_5 [i_3] [i_3]))) || ((((arr_18 [i_3] [i_3] [i_3 + 3]) ? var_1 : (arr_19 [i_3] [i_3]))))));
        var_28 = (max(var_28, (((!(1 <= var_5))))));
    }
    #pragma endscop
}
