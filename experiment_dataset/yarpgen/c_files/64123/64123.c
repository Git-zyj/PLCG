/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((61 - var_4), (((~var_4) ? (~var_1) : var_11))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 *= -1143864780;
        var_17 = (arr_0 [i_0]);
        var_18 = -61;
    }

    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_7 [i_1] [i_1] = ((((-(((!(arr_3 [i_2])))))) - (min(((((arr_6 [i_1] [10] [i_2]) > (arr_4 [i_1])))), ((var_13 ? (arr_2 [i_1]) : -1129280207))))));
            arr_8 [i_1] = (((!((max(1129280207, var_7))))));
        }
        var_19 = (arr_5 [i_1]);

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_20 = (max(var_20, (arr_6 [i_3] [i_1] [i_1])));
            var_21 = ((((((max(10276834118809177542, (arr_6 [i_1] [i_3] [i_3])))) ? ((-44 ? (arr_6 [i_3] [2] [i_1]) : -2576915421163996605)) : -0)) ^ 69));
            arr_12 [i_1] [i_3] [i_3] = ((65520 ? -0 : (((!(arr_3 [i_1]))))));
        }
        arr_13 [i_1] = (max((((var_6 ? (arr_3 [i_1]) : 1129280207))), ((0 - (max((arr_6 [i_1] [i_1] [9]), var_11))))));
        var_22 = (min(((((((arr_10 [i_1] [i_1] [i_1]) ? var_4 : 27441))) ? (~var_0) : (max((arr_11 [i_1] [18] [i_1]), var_1)))), (((-1950013303 ? (arr_10 [i_1] [i_1] [i_1]) : (((arr_11 [i_1] [i_1] [i_1]) ? -2576915421163996599 : var_2)))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_23 = ((2053724219139508524 ? (((arr_15 [i_4] [i_4]) ? 1 : var_5)) : (arr_9 [i_4])));
        var_24 = (max(var_24, ((+(((arr_2 [i_4]) ^ var_8))))));
        var_25 = (min(var_25, var_4));
        arr_16 [i_4] = var_6;
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        arr_20 [i_5] [i_5] = -1661642622;
        var_26 = ((1950013308 ? (((arr_3 [i_5]) ? 1 : (arr_17 [i_5]))) : (min(((var_7 ? 1 : var_0)), var_9))));
    }
    #pragma endscop
}
