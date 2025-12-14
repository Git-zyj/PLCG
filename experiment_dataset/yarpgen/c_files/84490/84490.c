/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_1] [i_0] [i_0] = (!var_3);

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_14 [i_1] [i_3] [i_3] [i_3] [i_1] [i_1] [i_0] = ((var_6 / (arr_11 [i_0] [i_1] [i_3 - 1] [i_3] [i_4])));
                            var_10 = (((arr_8 [i_0] [i_1]) || (2689688523 >> 1)));
                            var_11 = var_1;
                            arr_15 [i_3] [i_3] [i_3] [i_3] [i_4] [i_0] = 1;
                            var_12 = var_5;
                        }
                    }
                }
                arr_16 [i_1] = var_8;

                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_13 = arr_12 [i_5] [i_2] [i_1] [i_1] [i_0];
                    var_14 -= (((44632 ? 134217728 : 182)));
                    var_15 = (((arr_19 [i_5] [i_5] [i_5] [i_5]) ? (arr_19 [i_5] [i_2] [i_1] [i_0]) : 1));
                    var_16 = 1;
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                {
                    var_17 = (((!var_7) ? var_8 : var_9));
                    var_18 = var_0;
                    arr_25 [i_0] [i_6] [i_2] [i_6] = ((!((!(arr_8 [i_0] [i_0])))));

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_19 ^= (arr_4 [i_0]);
                        var_20 = 576460752303423488;
                        arr_29 [i_0] [i_6] [i_0] [i_6] = ((var_2 ? var_9 : var_6));
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_21 = (max(var_21, (((-1 ? 1 : (arr_30 [i_0] [i_0] [i_2] [i_6] [i_8] [i_1]))))));
                        arr_32 [i_6] [i_1] [i_6] = ((((var_7 ? var_8 : (arr_9 [i_8] [i_8] [i_6]))) < (arr_7 [i_0] [i_0] [i_1])));
                    }
                }
                for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                {
                    arr_35 [i_2] [i_2] [i_0] [i_0] = (!(((var_5 ? var_3 : (arr_8 [i_2] [i_2])))));
                    var_22 ^= 6;
                    var_23 = (((arr_28 [i_0] [i_1] [i_0] [i_1] [i_2] [i_2] [i_2]) & (arr_19 [i_0] [i_0] [i_0] [i_0])));

                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        var_24 += var_5;
                        var_25 = (max(var_25, ((((arr_3 [i_0] [i_1] [i_1]) ? 12195 : (arr_3 [i_0] [i_1] [i_2]))))));
                        var_26 = var_1;
                    }
                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        arr_41 [i_9] [i_1] [i_2] [i_9] [i_11] [i_2] = (arr_11 [i_2] [i_1] [i_2] [i_2] [i_11 - 1]);
                        var_27 ^= (~13382562138682019947);
                    }
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        var_28 = ((~(arr_18 [i_12] [i_9] [i_2] [i_0])));
                        var_29 = (((arr_9 [i_0] [i_9] [i_0]) + (arr_9 [i_0] [i_1] [i_0])));
                        arr_46 [i_0] [i_1] [i_2] [i_9] [i_12] = (1 ? var_9 : (((arr_0 [i_2] [i_1]) ? 1605278746 : (arr_36 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        var_30 = (((arr_44 [i_12] [i_9] [i_0]) ? (arr_44 [i_9] [i_9] [i_9]) : (arr_44 [i_12] [i_9] [i_2])));
                        var_31 = (max(var_31, 52309));
                    }
                    var_32 = -104;
                }
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    var_33 = ((((var_2 ? var_3 : 1605278773)) * ((~(arr_13 [i_13] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))));
                    var_34 ^= ((-((~(arr_2 [i_0])))));
                }
            }
            var_35 += ((~(var_6 < -3304827135865196423)));
        }
        var_36 -= (arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        arr_49 [i_0] = (((arr_2 [i_0]) ? (32229 | -6870413241745336878) : (~12013598697317307197)));
        var_37 = 1;
    }
    var_38 -= (var_3 == var_3);
    var_39 = (max((min(var_6, (min(6943, -14998)))), 255));
    #pragma endscop
}
