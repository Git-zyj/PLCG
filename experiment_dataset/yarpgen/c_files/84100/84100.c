/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = -var_7;

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_20 = ((+(max((!var_9), -var_0))));
            var_21 = ((-var_11 ? var_12 : (min(var_11, var_6))));
            var_22 ^= (~var_1);
        }
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            var_23 ^= (((~var_16) ? (((~var_5) ? var_10 : (~var_12))) : ((((~var_13) ? ((min(var_0, var_7))) : var_1)))));
            arr_9 [i_2 + 1] [i_2] [0] = ((~(~15835)));
            var_24 = (~var_12);
        }
        arr_10 [0] = (max(var_14, var_4));

        for (int i_3 = 4; i_3 < 14;i_3 += 1)
        {

            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                var_25 = (max((~var_7), ((((min(var_5, var_15))) ? -var_8 : (min(var_17, var_0))))));
                arr_18 [i_0] [i_4] = var_8;

                /* vectorizable */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    arr_21 [i_0] [i_0] [i_0] [i_3] [i_4 + 1] [i_0] &= ((var_16 ? var_10 : var_9));
                    arr_22 [11] [i_4] [i_4] = var_5;
                    var_26 -= (((~var_5) ? var_10 : ((var_11 ? var_10 : var_4))));

                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_27 = var_9;
                        arr_25 [i_0] [i_0] [i_0] [i_4] = (~var_17);
                    }
                }
                var_28 = (min(var_6, ((max(((255 ? 28725 : 13)), ((max(var_7, var_7))))))));
            }
            for (int i_7 = 3; i_7 < 13;i_7 += 1)
            {
                arr_29 [3] [i_3] [i_3] [i_0] = (2 ? (~var_5) : (~3537277397826491942));
                arr_30 [i_0] [i_0] [i_7] [i_0] = (!var_5);
                arr_31 [i_7] [i_7] [i_7 - 3] [i_7] = ((~((6 ? 120 : 91))));
                var_29 -= (-((var_11 ? var_7 : var_18)));

                /* vectorizable */
                for (int i_8 = 2; i_8 < 15;i_8 += 1)
                {
                    var_30 = ((var_1 ? var_0 : var_1));

                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        var_31 = (91 ? 5717604212671708286 : 13);
                        var_32 = ((var_14 ? var_14 : var_18));
                        var_33 = ((var_4 ? var_17 : var_10));
                        arr_36 [i_8] [i_3] [i_7] = ((var_10 ? (~var_15) : var_13));
                    }
                    for (int i_10 = 2; i_10 < 15;i_10 += 1) /* same iter space */
                    {
                        var_34 = (!var_8);
                        var_35 = -var_13;
                        arr_41 [i_8] [i_3 - 2] = var_13;
                    }
                    for (int i_11 = 2; i_11 < 15;i_11 += 1) /* same iter space */
                    {
                        var_36 += (!var_4);
                        arr_45 [i_0] [i_8] [i_3] [1] [i_8] [i_0] = var_6;
                        var_37 = (min(var_37, var_3));
                        var_38 = var_0;
                        var_39 -= ((var_4 ? -var_11 : var_6));
                    }
                    var_40 = (~102);
                    arr_46 [i_0] [i_8] [i_7] [i_7] = -var_6;
                }
                for (int i_12 = 1; i_12 < 15;i_12 += 1)
                {

                    /* vectorizable */
                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        var_41 = (min(var_41, (((!(!var_10))))));
                        arr_53 [i_0] [i_0] [i_0] [i_13] [3] = (!var_16);
                    }
                    var_42 = var_17;
                    var_43 = var_6;
                }
            }
            var_44 = (!((max((!var_18), (min(var_6, var_4))))));
        }
        arr_54 [i_0] = -6;
    }

    for (int i_14 = 1; i_14 < 10;i_14 += 1)
    {

        for (int i_15 = 0; i_15 < 12;i_15 += 1)
        {
            var_45 = var_12;
            arr_61 [i_14] = ((~(!-var_16)));
            arr_62 [i_14] [i_14 - 1] [i_14] = ((-(((!var_9) ? -var_19 : -var_18))));
            var_46 ^= (max(var_9, (((!(~10))))));
        }
        arr_63 [i_14] [i_14] = (max(((~(~var_1))), (((~(~var_8))))));
        arr_64 [i_14] = (~var_14);
    }
    for (int i_16 = 0; i_16 < 11;i_16 += 1)
    {
        arr_67 [i_16] [4] = (max(var_11, (((~(!var_14))))));
        arr_68 [i_16] = (((0 ? 6370 : 1)));
    }
    #pragma endscop
}
