/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, 1));
    var_17 |= ((-1758683463 ? -1758683451 : 1758683457));
    var_18 -= var_6;

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_19 &= (arr_1 [11]);
        arr_2 [i_0] = ((((var_1 ? var_6 : (arr_0 [i_0])))));
        var_20 = (min(var_20, 1758683451));
        arr_3 [i_0] [i_0] = (!var_8);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                arr_12 [i_1] [i_1] [i_3] = (((!var_0) ? var_9 : -1113526754));
                var_21 -= ((max((arr_1 [i_1]), (arr_1 [i_1]))));
            }
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                var_22 = (min(var_22, (((!((!(var_3 <= var_11))))))));
                var_23 = ((-23232 ? (((arr_11 [i_4] [6] [i_1]) % (arr_11 [i_1] [i_1] [i_1]))) : 102));
                arr_17 [i_1] = (min(((((var_6 >= var_13) ? -1113526765 : var_9))), ((((min(-13, 232))) ? (arr_10 [i_4] [11] [i_2] [i_1]) : 16804202226377221418))));
            }
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                arr_21 [i_1] [i_2] [i_5] [i_1] = 23217;
                var_24 -= ((max(((-1113526749 ? var_13 : (arr_13 [i_5] [i_2] [i_1]))), ((11 ? -23236 : 785922332)))));
                arr_22 [i_1] |= (!var_15);
            }
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                var_25 = (min(var_25, (((((-1113526766 ? -1113526751 : 14062)) >= 76)))));
                var_26 = var_14;
                var_27 = (max((~2050904151007486071), var_11));
                var_28 -= ((-16395839922702065538 != (arr_10 [3] [i_2] [3] [i_1])));
            }
            var_29 += -23229;
            var_30 = (~14072);

            /* vectorizable */
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                var_31 = ((arr_0 [i_7]) ? (arr_0 [i_2]) : (arr_0 [i_2]));
                var_32 = (arr_8 [2] [i_7]);
            }
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                arr_31 [i_8] [i_1] &= (arr_29 [i_8] [i_1]);
                var_33 = (min(var_33, (arr_25 [i_8])));
                var_34 *= -24920;
            }
        }
        var_35 ^= ((((min((!3318910455), -17055))) ? ((((-8388608 >= ((var_6 ? var_4 : -7769114534798375324)))))) : (max(1164485429, ((243 ? var_13 : 16804202226377221396))))));
        arr_32 [i_1] = ((((24908 ? 16395839922702065529 : 11618894230174272922)) == ((var_7 ? var_12 : 16804202226377221419))));
    }
    var_36 = (min(var_36, ((((~-1) * var_6)))));
    #pragma endscop
}
