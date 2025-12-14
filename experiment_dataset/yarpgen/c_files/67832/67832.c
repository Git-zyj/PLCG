/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [0] = var_8;
        var_13 = (((arr_1 [i_0] [1]) - (arr_1 [i_0] [i_0])));
        arr_3 [i_0] = 1956494671;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] = (max((max((arr_5 [i_1]), -2246013669373285764)), (max(var_5, -6462262566183283390))));
        var_14 += (((~var_1) ? var_9 : ((((arr_5 [i_1]) & (arr_4 [i_1]))))));
        var_15 += var_11;
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_16 *= ((arr_8 [i_2]) / (((arr_7 [i_2]) ^ (-2246013669373285770 | var_3))));
        var_17 = min((((((max((arr_8 [i_2]), (arr_7 [i_2])))) && (arr_7 [i_2])))), 515186978);
    }

    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {

        for (int i_4 = 4; i_4 < 22;i_4 += 1)
        {
            var_18 = ((-(((min((arr_12 [7]), var_1))))));
            var_19 = ((((max(((-(arr_10 [i_3]))), (arr_12 [i_3 + 2])))) ? -2246013669373285764 : var_3));
            var_20 = (arr_13 [i_4 + 1]);
        }
        var_21 |= ((((((arr_13 [i_3]) ? var_12 : var_11)) ^ (arr_12 [i_3 + 1]))));
        var_22 = (((arr_11 [i_3]) ? 2246013669373285745 : (((max(var_6, (arr_10 [i_3])))))));
    }
    var_23 = ((~((~(var_3 ^ var_0)))));
    var_24 *= (((max((min(var_3, 3730639573)), var_10)) >> ((var_6 ? (var_9 >= var_0) : var_8))));
    #pragma endscop
}
