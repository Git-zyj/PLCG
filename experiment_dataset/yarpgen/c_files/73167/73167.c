/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = ((((!(arr_0 [i_0] [i_0])))) << (((~var_7) - 379856540)));
        arr_4 [i_0] = ((~(max(2310303788, (arr_1 [i_0])))));
        arr_5 [i_0] [i_0] = (max(1984663507, 1775212681));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_13 = var_4;
        var_14 = (max(var_14, (arr_1 [18])));
        var_15 ^= (((2519754622 | 1775212686) && (((50 ? (((arr_8 [i_1] [i_1]) ? var_2 : var_5)) : (((0 | (arr_2 [i_1])))))))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_16 &= ((var_2 ? var_11 : (var_7 >= var_7)));
        var_17 = (var_12 ? var_3 : -1775212681);
        arr_13 [i_2] = 1775212681;
        var_18 = var_12;
    }
    for (int i_3 = 1; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_19 -= (max(1775212666, ((~(min(1775212674, var_10))))));
        arr_18 [2] [i_3] = (((min(11171924775038661493, (arr_15 [i_3 + 2]))) % (arr_10 [0])));
    }

    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 1; i_5 < 7;i_5 += 1)
        {
            var_20 = 1382931476;
            var_21 = var_11;
        }
        var_22 = (min(var_22, (11261529220841854590 != 1775212652)));
        var_23 = (1775212669 << 0);
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_24 = arr_20 [i_6] [i_6];
        arr_28 [i_6] [i_6] = (arr_25 [i_6]);
        var_25 ^= ((~(((!4294900721) - (~3934191073)))));

        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            var_26 ^= ((!((!(~15775502941173383517)))));
            arr_31 [i_6] = ((((((arr_11 [i_7]) - (arr_16 [i_6])))) || var_6));
        }
        var_27 = (((((((var_8 ? (arr_30 [i_6] [i_6] [i_6]) : (arr_11 [i_6]))) & (((~(arr_1 [i_6]))))))) && var_11));
    }
    var_28 = 24;
    var_29 = ((((max((min(3835387710, -665956092)), var_7))) ? (((((-30264 ? 11 : var_11))) / ((142 ? 10 : 1775212669)))) : (max(-var_9, ((var_7 ? var_8 : var_6))))));
    #pragma endscop
}
