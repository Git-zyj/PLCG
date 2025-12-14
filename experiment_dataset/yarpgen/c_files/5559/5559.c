/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= ((~((-(!var_5)))));
    var_20 = ((-(~-0)));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (((~(~31984))));
        var_21 = (!var_9);
        var_22 |= ((~(!14318525688225165552)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_23 = (+-4294967271);
            var_24 = (min(var_24, (~-48012)));
            arr_6 [i_0] &= (--24);

            for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
            {

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_25 = (~-4294967271);
                    arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] = ((-(~34)));
                    var_26 = -0;
                }
                var_27 = ((!((!(arr_9 [i_2])))));
                arr_15 [i_0 + 1] [i_2] = ((-((~(arr_0 [i_0 - 2])))));
            }
            for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
            {
                arr_20 [i_0] [i_1] [i_4] [i_1] = (~-0);
                var_28 = (!4294967271);
                var_29 = (-(~11565));
            }
            for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
            {
                var_30 = (--2047878323);
                var_31 = (min(var_31, (((-(!var_10))))));
                var_32 |= -4182676613589371611;
            }
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {
                        var_33 = ((!(~-4294967271)));
                        var_34 = (~var_5);
                        arr_32 [i_0] [i_6] [i_0] [i_8] |= (-((-(arr_18 [i_7 - 1] [i_7 - 1]))));
                        var_35 = -25;
                        arr_33 [i_0] [i_0] [i_7 - 1] = (~0);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    {
                        var_36 = (!-2064226631325295697);
                        var_37 = (min(var_37, (((-((~(!1887310725))))))));
                    }
                }
            }
            arr_39 [i_0] [i_6] &= ((~((~((~(arr_12 [i_0 - 3] [i_6] [i_6] [i_6] [i_0 - 3] [i_6])))))));

            for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        {
                            var_38 = ((-((~(!4294967263)))));
                            var_39 = ((!((!(!11549)))));
                        }
                    }
                }
                arr_48 [i_0] [i_6] [i_0] [i_0] |= ((!(((~(~var_9))))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        {
                            var_40 -= (((~(~40))));
                            var_41 = (!(((~(~17530)))));
                        }
                    }
                }
                var_42 &= ((((!(((-(arr_42 [i_0] [6] [i_0] [i_0] [i_11] [0]))))))));
            }
            /* vectorizable */
            for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
            {
                var_43 = (-((~(arr_5 [i_0 - 1] [i_6] [i_16]))));
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 16;i_18 += 1)
                    {
                        {
                            var_44 = (min(var_44, (((~((~(arr_9 [4]))))))));
                            var_45 = (max(var_45, -24));
                            arr_62 [i_18] [i_17] [i_16] [i_6] [i_18] = ((-((-(arr_30 [i_16] [7] [i_16])))));
                            var_46 = (min(var_46, (~-var_15)));
                            var_47 *= (~542);
                        }
                    }
                }
                arr_63 [13] [13] = (~33);
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 16;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 16;i_20 += 1)
                    {
                        {
                            var_48 = (min(var_48, (((-(~var_8))))));
                            var_49 = (!24);
                        }
                    }
                }
            }
            var_50 = ((!(((-(arr_65 [1] [i_6] [i_6] [i_6] [i_0 - 1] [i_6]))))));
        }
    }
    #pragma endscop
}
