/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [5] &= (arr_1 [i_0] [i_0]);
        var_14 -= (min(((~(63274 && var_6))), 4));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_15 = (min(var_12, ((max(0, (arr_8 [i_0] [i_1] [i_2] [i_3]))))));
                        var_16 = (min(var_16, var_5));
                        var_17 = ((((var_1 ? ((var_10 ? var_6 : (arr_9 [i_0] [i_0] [i_0] [i_0]))) : var_6)) != 2420676697));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 21;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    {
                        var_18 &= ((((((arr_11 [i_4] [i_4] [i_4] [i_4]) ? var_0 : var_4))) ? ((var_8 ? var_11 : 12653850281842898846)) : (var_4 && var_0)));
                        var_19 = var_12;
                        var_20 = (((arr_21 [i_6 + 1] [i_6 + 1] [i_6] [i_6]) ^ (arr_21 [i_6] [i_6 + 1] [i_6] [i_6 - 1])));
                        var_21 = (((arr_1 [i_6 + 1] [i_4 - 2]) >= (arr_1 [i_6 - 1] [i_4 + 1])));
                    }
                }
            }
        }
        var_22 = 4294967295;
    }
    /* vectorizable */
    for (int i_8 = 3; i_8 < 20;i_8 += 1)
    {
        var_23 ^= (((((var_13 ? var_0 : (arr_10 [i_8] [i_8 + 2] [i_8] [i_8])))) ? 15272 : 40072));

        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            var_24 = (arr_22 [i_9 - 1]);
            var_25 |= (-2147483647 - 1);
            var_26 |= (11176993081642965010 / 69);
        }
        var_27 = (min(var_27, (((var_11 ? (635611216 && 17451448556060672) : (2393157724 + var_0))))));
    }
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        arr_30 [i_10] = ((+((+((-51 ? (arr_15 [i_10]) : 8746574032970883651))))));
        var_28 = 1097582864;
        arr_31 [i_10] = 4991545601998582176;
        arr_32 [i_10] = ((!((!(var_2 && 2122987171)))));
    }
    var_29 = (max(var_29, var_13));
    #pragma endscop
}
