/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((max(((max((8 > var_11), (!247)))), var_8)))));
    var_13 = ((1024 * ((((!(((252 ? var_3 : var_5)))))))));
    var_14 = (max(var_4, 1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = (min(var_15, (var_0 + var_5)));

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            arr_6 [i_1] [i_0] = var_8;

            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                var_16 = 3895507970311329278;
                arr_9 [i_0] = 8;
                arr_10 [i_0] = arr_1 [i_0];
            }
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {

            for (int i_4 = 2; i_4 < 20;i_4 += 1) /* same iter space */
            {
                arr_18 [i_3] [i_3] = -var_1;
                var_17 = ((!(arr_1 [i_4 - 2])));
                var_18 = (arr_15 [i_4 - 2]);
            }
            for (int i_5 = 2; i_5 < 20;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 4; i_6 < 19;i_6 += 1)
                {
                    var_19 = (min(var_19, (((((((arr_8 [i_5] [i_3] [i_5]) > 255))) > (arr_16 [i_6] [1] [i_0] [i_0]))))));

                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_20 = (max(var_20, var_5));
                        arr_27 [i_3] [i_0] [i_5] [i_5] [i_7] [i_3] [i_7] = (((arr_21 [i_6 - 1] [i_6] [i_5 - 1]) / (arr_21 [i_6 - 3] [i_6] [i_5 - 1])));
                        arr_28 [i_3] [i_3] = (233 / 236);
                        arr_29 [i_0] [i_3] [i_5] [1] [i_7] [i_0] [i_5] = ((!(!17552738460523502227)));
                        var_21 = var_0;
                    }
                    arr_30 [i_3] [i_3] [i_3] [i_0] [i_5] = ((!(var_5 == 31)));
                    var_22 = (max(var_22, ((((0 ? 227 : 236))))));
                }
                for (int i_8 = 2; i_8 < 19;i_8 += 1)
                {
                    arr_33 [i_0] [i_0] [i_3] [i_0] = ((var_4 ? var_9 : (arr_32 [i_8 + 1] [i_8] [i_8] [i_8] [i_8 - 1])));
                    arr_34 [i_0] [i_3] [12] = ((-(arr_0 [i_8 - 1])));
                    arr_35 [i_3] = (((arr_14 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8]) - 1));
                }
                for (int i_9 = 3; i_9 < 18;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        arr_42 [i_3] [i_3] = (arr_7 [4] [i_3] [i_5 - 1]);
                        arr_43 [i_3] [i_5] [i_5] [i_9] [i_10] [i_3] = ((0 ^ (arr_2 [i_5 - 2])));
                        arr_44 [i_9] [0] [i_5] [i_3] [i_10] = arr_4 [i_9 + 1] [i_5 - 2];
                    }
                    for (int i_11 = 1; i_11 < 19;i_11 += 1)
                    {
                        var_23 -= -261296227;
                        var_24 = ((15099811928057502906 ? var_6 : ((var_7 ? (arr_0 [i_5]) : 0))));
                        arr_47 [i_0] [i_3] [i_5] [i_3] [i_3] [i_0] = ((1 > (!var_8)));
                    }
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        var_25 = (arr_39 [i_5] [i_3] [i_5] [i_0] [i_12]);
                        var_26 ^= (~-var_1);
                        var_27 = -17;
                        arr_51 [i_3] [i_3] [i_3] [i_9] [i_12] = var_9;
                        var_28 ^= (arr_32 [i_12] [i_12] [i_12] [i_12] [i_12]);
                    }

                    for (int i_13 = 1; i_13 < 18;i_13 += 1)
                    {
                        arr_54 [4] [i_3] [i_5] [i_3] [i_13] [i_13] |= ((arr_20 [i_13] [i_3] [i_3] [i_3]) / var_6);
                        var_29 ^= ((-((0 ? 0 : (arr_32 [i_0] [i_3] [i_0] [i_9] [i_13])))));
                    }
                }
                arr_55 [i_3] = ((!(arr_14 [i_0] [20] [i_0] [i_0])));
                arr_56 [15] [i_3] [i_5 - 2] = 227;
            }
            var_30 ^= ((!(var_11 && var_7)));
            var_31 = (arr_25 [i_0] [i_3] [i_0] [i_0] [i_0]);
        }
        arr_57 [i_0] [i_0] = (~-var_7);
        var_32 = (min(var_32, (((-0 ? (((arr_45 [i_0] [i_0] [i_0] [i_0] [i_0]) % (arr_8 [i_0] [i_0] [i_0]))) : var_10)))));
    }
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        var_33 = ((((((max(-64837283906897787, (arr_60 [1] [i_14])))) % (var_7 % -3985))) == ((~((var_8 ? var_7 : var_1))))));
        var_34 += (((((max(var_7, (arr_59 [i_14]))) * (!var_2))) < (arr_58 [i_14])));
    }
    #pragma endscop
}
