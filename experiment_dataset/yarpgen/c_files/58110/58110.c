/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_5 [i_1] = (max(-4715051854601145581, var_5));
            var_17 = (min(var_17, ((min(var_6, -var_6)))));
            var_18 = (max(((max(var_9, var_13))), var_8));
        }
        arr_6 [5] = (max(var_13, ((~((min(var_7, var_3)))))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_19 = (min((max(var_1, var_2)), (~var_12)));

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                arr_14 [i_2] [i_3] [i_4] = var_2;
                var_20 *= var_9;
                var_21 += var_7;
            }
            for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    var_22 = (min(var_22, var_11));

                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_23 = (min(var_23, (((~(~var_6))))));
                        var_24 = var_5;
                        arr_22 [i_2] [i_3] [i_5] [i_6] [i_6] = (min(var_9, (!var_5)));
                    }
                }
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    var_25 ^= (max((~var_12), var_8));

                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        arr_28 [13] [i_8] [13] [i_5] [i_2] [i_2] = var_12;
                        arr_29 [i_2] [i_3] [i_2] [i_3] [i_8] [i_9] = (max(((min(var_13, var_11))), (max(((min(var_12, var_0))), (max(27270, 6442450944))))));
                        var_26 = (max(var_26, 27252));
                        var_27 = (~-var_11);
                    }
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        arr_33 [i_10] [9] [i_2] [i_3] [i_2] = (max(var_6, var_6));
                        var_28 = var_14;
                        var_29 = var_11;
                        var_30 = (min(var_30, (((~(~var_9))))));
                    }
                }
                /* vectorizable */
                for (int i_11 = 3; i_11 < 17;i_11 += 1)
                {
                    var_31 = (min(var_31, var_3));
                    var_32 = var_11;

                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        var_33 = -2147483631;
                        var_34 = var_15;
                        arr_40 [i_12] [i_12] [i_12] [i_11 - 3] [2] [i_12] [i_11 - 3] = 0;
                    }
                    var_35 -= var_1;
                    var_36 ^= -var_9;
                }

                for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
                {
                    arr_44 [i_2] [i_2] [i_2] [i_2] [i_5] [i_13] = (~var_14);
                    arr_45 [i_2] [i_2] [i_2] [i_2] &= min(var_6, (min((max(var_10, var_16)), var_8)));
                    arr_46 [i_2] [i_2] [i_5] [i_13] = (min((min((max(var_4, var_5)), -var_5)), ((max(var_0, var_7)))));
                }
                for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
                {
                    arr_50 [i_2] = var_13;
                    var_37 = ((-(min((!var_4), var_6))));
                    var_38 = -var_13;
                    var_39 = ((~((~(~var_7)))));
                    arr_51 [i_2] [i_2] [3] [i_5] [i_14] &= (~var_4);
                }
            }
            /* vectorizable */
            for (int i_15 = 0; i_15 < 18;i_15 += 1) /* same iter space */
            {
                arr_54 [i_15] [i_3] [3] &= (~var_11);

                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    var_40 = (~var_5);
                    arr_58 [i_2] [i_15] [i_16] = (!var_5);
                }

                for (int i_17 = 2; i_17 < 16;i_17 += 1)
                {
                    var_41 |= (!var_10);
                    var_42 = (min(var_42, var_8));
                }
                var_43 = (~var_0);
            }
            var_44 = -var_13;
        }
        for (int i_18 = 0; i_18 < 18;i_18 += 1)
        {
            var_45 = ((~((max(var_7, var_11)))));
            var_46 = var_4;
        }
        for (int i_19 = 0; i_19 < 18;i_19 += 1)
        {
            arr_68 [i_19] &= (!var_10);
            var_47 = (!1098575276);

            /* vectorizable */
            for (int i_20 = 0; i_20 < 18;i_20 += 1)
            {
                var_48 = (~var_3);
                var_49 = var_13;
                var_50 = (~9095669704333994873);
            }
            /* vectorizable */
            for (int i_21 = 0; i_21 < 18;i_21 += 1)
            {
                var_51 = (min(var_51, (!var_4)));
                var_52 = -var_5;
                var_53 = var_11;
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 18;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 18;i_23 += 1)
                    {
                        {
                            arr_77 [i_2] [i_2] [i_2] [i_2] = var_14;
                            var_54 = var_3;
                        }
                    }
                }
            }
            for (int i_24 = 0; i_24 < 18;i_24 += 1)
            {
                arr_80 [i_2] [2] [i_2] = ((~((max(var_1, var_0)))));
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 1;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 18;i_26 += 1)
                    {
                        {
                            var_55 = var_14;
                            var_56 = (~-var_0);
                        }
                    }
                }
            }
            for (int i_27 = 0; i_27 < 18;i_27 += 1)
            {
                var_57 &= var_2;
                arr_89 [i_19] = var_4;
            }
            var_58 = (max(-var_3, var_11));
        }
        var_59 = ((!(~var_2)));
    }
    var_60 = var_16;
    var_61 = var_11;
    var_62 = var_2;
    #pragma endscop
}
