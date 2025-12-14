/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 &= (arr_1 [i_0] [i_0]);
        var_17 += (((arr_0 [i_0] [i_0]) ^ (arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_18 = (((arr_4 [4]) ? (((arr_4 [i_1]) * ((5859646602563989921 + (arr_3 [i_1]))))) : ((((75 ? var_13 : 5859646602563989947)) >> (((arr_3 [17]) - 34786))))));
        var_19 = (min(var_19, (((~(((!((((arr_4 [i_1]) ? var_7 : var_6)))))))))));
        arr_5 [i_1] = (!223);
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_20 &= (((var_14 + 1) / var_1));
        var_21 = (max((min(2147483647, (arr_7 [i_2]))), (arr_3 [i_2])));

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_22 |= (((((((-(arr_7 [i_2])))) + var_12))) ? ((((max(var_3, 3585859624))) ? (arr_9 [i_2] [i_3] [i_2]) : (arr_8 [i_3]))) : ((((arr_3 [i_3]) * (arr_3 [i_2])))));
            var_23 = ((((((max(var_1, 1)) > ((((arr_3 [i_2]) << (17010354365768043202 - 17010354365768043192))))))) > ((5859646602563989947 ? (((arr_6 [i_3]) ? (arr_3 [i_2]) : (arr_6 [1]))) : ((max(1, 60)))))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            arr_12 [i_4] [i_4] = 1417410742916885558;

            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                var_24 = ((~(arr_7 [i_5 + 2])));
                var_25 = (min(var_25, (((~(((arr_3 [i_5]) / (arr_9 [i_2] [i_4 + 1] [i_5]))))))));
            }
            for (int i_6 = 3; i_6 < 17;i_6 += 1)
            {
                var_26 = (~54);
                arr_19 [0] [i_4] [i_4] = ((~(arr_14 [i_4] [i_2])));
                var_27 = (((-3998242970246788580 | var_5) && (arr_11 [i_4] [i_4])));
                var_28 = (((arr_14 [i_6 + 2] [i_4 + 1]) >> (arr_11 [i_4] [i_4 + 1])));
            }
            arr_20 [i_4] = (5859646602563989921 / 1417410742916885558);
        }
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_29 = (((max(-1417410742916885573, (arr_14 [i_7] [i_7]))) / 18019));
        var_30 = ((!((!(arr_16 [i_7] [17] [17])))));
    }
    var_31 = var_3;
    #pragma endscop
}
