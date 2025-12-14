/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((!((((!var_16) | var_3))))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 *= ((32767 & 0) ^ (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))));
        var_21 = (((1 * (max(-1475322616, 22220)))));
        var_22 = ((-((((arr_1 [i_0]) > (arr_1 [i_0]))))));
        var_23 = (min(var_23, var_18));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_24 = 32767;
        var_25 = (max(var_25, 84));
        var_26 ^= (((arr_3 [i_1]) ? -1 : (((min(var_4, (max(-72, -98))))))));
        var_27 = (max(var_27, var_17));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
        {
            var_28 *= ((-((var_9 ? ((((arr_9 [i_2] [i_2]) >= (arr_9 [i_2] [i_3])))) : (var_13 - 1)))));
            var_29 = (max(var_29, 1));
            arr_11 [i_2] = ((!(((-13408172898838216735 ? (min(250, 166477574)) : var_11)))));
            var_30 = (max(var_30, var_18));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
        {
            var_31 = -14828133582480342326;
            var_32 = ((14 - (arr_9 [5] [i_2])));
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
        {
            var_33 *= 19269;
            arr_17 [19] [i_2] [19] = 16595344917021778909;
        }

        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            var_34 ^= ((!((((arr_14 [12] [12]) ^ (arr_10 [i_2]))))));
            var_35 = (max(var_35, ((((min(((-72 ? (arr_13 [i_2]) : (arr_13 [i_6]))), (arr_15 [i_2] [i_6] [18]))) - (arr_19 [8] [1]))))));
        }
        arr_22 [i_2] [i_2] = (min((min(((((arr_6 [i_2] [i_2]) ? 1 : (arr_6 [i_2] [i_2])))), (~var_12))), (((((430177022 ? var_9 : (arr_21 [i_2] [i_2])))) & 16595344917021778898))));
        var_36 = (arr_21 [i_2] [i_2]);
    }
    #pragma endscop
}
