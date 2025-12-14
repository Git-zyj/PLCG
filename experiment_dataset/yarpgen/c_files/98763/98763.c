/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    {
                        var_13 = (min(var_13, (-23 / 9223372036854775794)));
                        var_14 = var_0;
                        var_15 = (min(var_15, 28));
                    }
                }
            }
        }
        var_16 &= (((arr_7 [i_0] [i_0]) == (-29 / -37)));
        var_17 = (((+-127) && (((5866639584667974529 ? 85 : var_11)))));
    }
    for (int i_4 = 4; i_4 < 15;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_18 ^= (85 | 68);
                        var_19 = var_2;
                        arr_19 [i_5] = (((((~(arr_9 [i_4] [i_4] [i_6] [i_5])))) ? ((((arr_6 [i_4] [i_6]) < 38))) : 37));
                        var_20 = (((((var_6 ? (arr_18 [i_4 - 2] [i_4 - 2] [i_4] [i_4 + 2] [i_4 - 2]) : 73))) ? ((var_12 ? var_4 : var_7)) : ((((arr_5 [i_5] [i_4 - 3] [i_4 + 1] [i_5 + 1]) ? (arr_6 [i_4 - 1] [i_4 - 3]) : (arr_6 [i_4 - 1] [i_4 - 3]))))));
                        var_21 = (min(var_21, ((((~(var_4 - 1)))))));
                    }
                }
            }
        }
        var_22 = (min(var_22, (((((((var_6 + var_1) ? (var_11 >= var_1) : var_12))) && (((~(arr_11 [i_4])))))))));
        var_23 += ((var_6 ? (((60 && var_5) ? (((arr_13 [i_4] [i_4]) ? 1 : 1)) : (((var_11 && (arr_18 [i_4] [i_4] [i_4] [i_4] [0])))))) : ((+((((arr_10 [i_4] [i_4] [i_4] [i_4]) <= var_10)))))));
    }

    /* vectorizable */
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        arr_23 [i_8] = ((var_8 << ((((var_11 ? 138 : -7305333761898836366)) - 137))));
        var_24 = (~47);
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    var_25 = ((~((~(arr_27 [i_9])))));
                    var_26 = (!35);
                    var_27 ^= ((147 >= ((var_10 ? var_12 : var_5))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 23;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 0;i_12 += 1)
            {
                {
                    var_28 *= ((arr_27 [i_11]) >> (((arr_28 [i_8] [i_11 + 1] [i_12] [i_11 + 1]) - 164)));
                    var_29 -= var_5;
                }
            }
        }
    }
    for (int i_13 = 1; i_13 < 19;i_13 += 1)
    {
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 21;i_16 += 1)
                {
                    {
                        arr_44 [i_13] [14] [i_13] [i_16] = 27;
                        var_30 += ((var_10 * (((((((arr_36 [i_14] [i_14]) > var_5)))) - ((36 ? var_12 : (arr_33 [i_13] [12] [16] [i_16])))))));
                    }
                }
            }
        }
        var_31 = var_3;
        arr_45 [16] |= var_3;
        /* LoopNest 2 */
        for (int i_17 = 2; i_17 < 18;i_17 += 1)
        {
            for (int i_18 = 1; i_18 < 18;i_18 += 1)
            {
                {
                    arr_52 [i_13] = ((((((((arr_34 [i_13] [i_13] [i_13] [i_18]) & var_4)) / (~-7305333761898836380)))) ? ((var_12 - ((35184372088831 ? var_1 : var_7)))) : (((((arr_32 [i_18 + 1] [i_17] [i_13 + 1]) == (arr_32 [i_18 + 1] [i_18 - 1] [i_13 + 1])))))));
                    var_32 = (max(var_32, -74));
                }
            }
        }
    }
    var_33 = var_3;
    #pragma endscop
}
