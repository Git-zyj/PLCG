/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_19 = (min(var_19, 21889));
        var_20 = (~7);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_21 = (min(var_21, (arr_0 [1])));
        var_22 = (arr_0 [i_1]);
        var_23 = (min(var_23, ((((var_7 + var_7) ? ((((max(var_7, (arr_0 [i_1]))) <= ((((-21915 <= (arr_3 [i_1] [i_1])))))))) : var_18)))));
        arr_4 [i_1] = (~-20649);
        var_24 = var_8;
    }
    var_25 = ((((max((min(var_9, var_13)), var_18))) ? (((var_16 % var_12) << (var_2 - 3781158073406300138))) : (min(-var_10, -21876))));
    var_26 = (((((max(var_18, var_17)) ^ ((max(105, var_6))))) >> (((max(254, var_15)) - 240))));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_8 [i_2] = ((((~(arr_3 [i_2] [i_2]))) >> (var_9 - 42275)));

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            arr_11 [i_2] [i_2] [i_2] = ((var_17 ? (arr_10 [i_3]) : (arr_2 [i_3])));
            arr_12 [i_3] [i_3] [i_2] = (((1 ^ 821003819) || (((~(arr_9 [i_2] [i_3]))))));
        }
        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            var_27 = (((arr_1 [i_4 + 2]) % ((var_18 ? -69 : -32759))));
            var_28 = ((((((arr_15 [5] [i_4 + 2]) ? var_18 : 2147483647))) ? ((-14325 ? (arr_3 [i_2] [i_4 - 2]) : var_11)) : var_16));

            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                var_29 = var_17;
                var_30 = ((~((-100 | (arr_10 [i_2])))));
            }
            var_31 = (128 & 2773760422);
        }
        var_32 = -15;
        arr_18 [i_2] [i_2] = -7007;
        var_33 = var_5;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_34 *= 32767;
        var_35 = ((var_11 ? (arr_15 [i_6] [i_6]) : ((((arr_3 [i_6] [i_6]) ? 1 : (arr_6 [i_6]))))));
        var_36 = (max(var_36, ((((arr_10 [i_6]) & var_14)))));
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        arr_24 [i_7] = (arr_19 [i_7]);
        var_37 -= 105;
    }
    var_38 = (((var_12 + 2147483647) << (((max(var_9, ((max(var_14, var_4))))) - 42288))));
    #pragma endscop
}
