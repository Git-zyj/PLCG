/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = ((var_11 < (arr_6 [i_0] [i_0 + 1] [i_2] [i_0])));
                    var_17 ^= ((0 ? 208132211479324633 : 208132211479324633));
                    var_18 = (((arr_2 [i_0 - 1] [i_0 - 1] [i_0 + 1]) && (arr_2 [i_0 - 1] [i_0 - 1] [i_0 + 1])));
                    var_19 |= (((68 >= var_10) > (((arr_0 [i_0] [i_0]) + 73))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 8;i_4 += 1)
            {
                {
                    arr_13 [i_4] [i_0] [i_0] [i_0] = (+-73);
                    var_20 = (max(var_20, (((1 ? (arr_6 [1] [i_3] [1] [i_4]) : var_14)))));
                    var_21 = ((arr_11 [i_0 - 1] [i_3 - 2] [i_4 + 1]) || (arr_11 [i_0 + 1] [i_3 - 1] [i_4 - 2]));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    arr_20 [i_0] [i_0] [i_0] = (var_10 < (arr_16 [i_0 - 1]));
                    var_22 = (max(var_22, (((51 ? -934767748 : -47)))));

                    for (int i_7 = 1; i_7 < 7;i_7 += 1)
                    {
                        arr_24 [i_0] [i_0] [i_6] [i_7] [i_0] = 1;
                        arr_25 [i_0] [i_0] [i_0] [i_7 + 1] = ((-(arr_16 [i_7 + 1])));
                        var_23 = (max(var_23, var_2));
                        arr_26 [i_6] |= (((arr_16 [i_7 - 1]) ? (arr_21 [6] [i_5] [i_5] [i_7 + 3]) : (arr_14 [i_0] [i_5])));
                    }
                }
            }
        }
        var_24 = 65535;
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
    {
        var_25 |= (min(((((((var_11 && (arr_27 [i_8])))) < (arr_28 [i_8] [i_8])))), (arr_28 [i_8] [i_8])));
        var_26 += (((-127 - 1) && -18446744073709551615));
        var_27 = (max(var_27, ((((arr_28 [13] [i_8]) - ((max(-9, var_3))))))));
    }
    for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
    {
        var_28 -= 1431483994392615804;
        var_29 = (((((((arr_30 [i_9]) ? var_4 : (arr_28 [i_9] [i_9])))) ? 518208679 : 189)));
        var_30 = ((((((-(arr_30 [i_9])) > (arr_27 [i_9]))))));
        var_31 = 1;
    }
    var_32 = (max(var_32, var_3));
    #pragma endscop
}
