/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                var_11 = (min(var_11, (((var_8 ? ((var_3 ? var_8 : var_6)) : (~var_4))))));
                var_12 = (var_6 / var_9);

                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_13 = (~var_3);
                    arr_11 [i_0] [i_2] [i_2] [8] &= ((var_8 ? var_4 : var_9));
                    arr_12 [i_0] [i_2] [i_2] [i_0] = (var_9 - var_1);
                }
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    arr_17 [i_2] [i_2] [0] [i_0] = ((var_6 ? var_1 : var_7));
                    var_14 += (var_0 && var_6);
                }
            }
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_15 = (var_5 - var_8);
                arr_22 [i_0] = ((var_6 * var_6) ^ (((var_1 ? var_8 : var_8))));
            }

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 11;i_8 += 1)
                    {
                        {
                            var_16 = (32505856 | 2147483647);
                            var_17 += (var_1 - var_1);
                        }
                    }
                }
                arr_31 [i_0] [i_1] [i_0] = (!var_0);
            }
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                var_18 = (!var_4);
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        {
                            var_19 = var_2;
                            var_20 = ((var_8 ? var_4 : var_3));
                        }
                    }
                }
                var_21 = (min(var_21, (var_9 * var_4)));
                arr_40 [i_0] [i_0] [i_9] [i_9] = (var_10 / var_0);
                var_22 = (-5 ^ 4294967285);
            }
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                var_23 = (~var_5);

                for (int i_13 = 2; i_13 < 11;i_13 += 1)
                {
                    var_24 += ((var_9 << (var_10 == var_3)));
                    var_25 = ((var_9 ? var_3 : var_5));
                    var_26 = (var_7 ^ var_7);
                }
                for (int i_14 = 3; i_14 < 9;i_14 += 1)
                {
                    var_27 = (max(var_27, var_4));
                    arr_50 [i_0 + 1] [i_0] [i_12] [12] = (((((var_6 ? var_3 : var_1))) ? var_7 : ((var_1 >> (var_2 - 31393)))));
                }
            }

            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                var_28 = ((1770170464 ? 3751307326 : 2147483626));
                var_29 += (var_0 || var_2);
            }
            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {

                for (int i_17 = 0; i_17 < 13;i_17 += 1)
                {

                    for (int i_18 = 2; i_18 < 10;i_18 += 1)
                    {
                        var_30 = (!var_5);
                        var_31 = ((var_0 ? var_10 : var_8));
                    }
                    var_32 = (min(var_32, (var_9 ^ var_7)));
                    var_33 = (min(var_33, var_1));
                }
                for (int i_19 = 1; i_19 < 12;i_19 += 1)
                {
                    arr_63 [0] [i_1] [i_0] [i_19 - 1] = (((((var_6 ? var_8 : var_3))) ? (var_8 ^ var_1) : var_2));
                    arr_64 [i_0] = ((~(~var_7)));
                }
                for (int i_20 = 0; i_20 < 13;i_20 += 1)
                {
                    var_34 = (max(var_34, (((2147483647 ? 255 : -1202306502)))));
                    var_35 = (var_2 ^ var_3);
                }
                var_36 &= (var_4 <= var_2);
            }
            var_37 += (2124735886 || var_7);
        }
        for (int i_21 = 1; i_21 < 12;i_21 += 1) /* same iter space */
        {
            var_38 += ((var_2 ? (var_9 / var_9) : var_2));
            var_39 = ((~(2147483633 - 64922)));
            var_40 = (min(var_40, (var_6 == var_0)));
        }
        for (int i_22 = 1; i_22 < 12;i_22 += 1) /* same iter space */
        {
            var_41 = (var_9 & var_1);
            arr_73 [i_0] [i_0] = ((~((var_5 ? var_9 : var_6))));
        }
        for (int i_23 = 0; i_23 < 13;i_23 += 1)
        {
            arr_77 [i_0] [i_0] = var_2;
            arr_78 [i_0 + 2] [i_0] [i_0] = ((var_9 ? var_6 : var_2));
        }
        var_42 = var_3;
    }
    var_43 = ((((min(((min(222, 36))), var_4))) ? (((var_7 | var_3) | var_2)) : ((max(var_8, (var_6 >= var_4))))));
    var_44 = var_4;

    for (int i_24 = 0; i_24 < 14;i_24 += 1)
    {
        arr_81 [i_24] = (~2147483628);
        var_45 &= var_0;
        arr_82 [i_24] &= ((((var_2 ? var_6 : var_3)) - (((255 >> (51 - 43))))));
    }
    /* vectorizable */
    for (int i_25 = 0; i_25 < 19;i_25 += 1) /* same iter space */
    {
        var_46 = (((!var_7) | var_4));
        var_47 = ((var_5 ? var_2 : var_0));
        var_48 = (max(var_48, (32512 + 20339)));
        var_49 += (var_4 + var_1);
    }
    for (int i_26 = 0; i_26 < 19;i_26 += 1) /* same iter space */
    {
        var_50 = (((max(var_6, ((min(var_2, var_9))))) - (((((max(var_9, var_10))) ? (!var_9) : ((var_7 ? var_2 : var_8)))))));
        arr_89 [i_26] [i_26] = ((min(((min(var_1, var_8))), (max(var_5, var_7)))) & var_10);
        arr_90 [i_26] [i_26] = ((((((var_10 ^ var_2) ^ var_9))) ? var_4 : ((20339 ? 2147483628 : -127))));
    }
    var_51 += var_1;
    #pragma endscop
}
