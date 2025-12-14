/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_10, 16500));
    var_13 ^= var_11;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((~(~var_8)));
        var_14 ^= ((var_9 ? ((((min(var_10, var_0))) ? var_6 : var_3)) : ((max(var_6, var_11)))));
        arr_3 [i_0] = ((+(max((!var_11), (~var_6)))));
        arr_4 [i_0] [i_0] = var_4;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] = var_2;
        arr_8 [i_1] [i_1] = (min(var_7, (((var_5 ? var_0 : (max(var_4, var_3)))))));

        for (int i_2 = 2; i_2 < 7;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                var_15 += (max(var_11, ((((min(var_0, var_7))) ? -var_2 : ((var_11 ? var_2 : var_4))))));

                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    var_16 = (max(var_16, -var_7));
                    arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((((max(6642265397434705625, var_4))) ? var_6 : (~-1075028537)));
                }
                for (int i_5 = 2; i_5 < 10;i_5 += 1)
                {
                    arr_19 [i_1] [i_2] [i_5] [i_5 - 2] = -var_0;
                    var_17 = -2;
                }
                var_18 = var_1;

                /* vectorizable */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    var_19 = var_9;
                    var_20 = (min(var_20, (((var_4 ? var_6 : 13779810123421356105)))));
                    var_21 = var_6;
                }
                arr_22 [i_3 - 2] [i_2 - 1] &= var_9;
            }
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                arr_26 [i_1] [i_1] = (min((!1075028532), ((-((var_9 ? var_11 : var_1))))));
                var_22 &= (min((((var_10 ? var_7 : var_3))), var_5));
            }

            /* vectorizable */
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                var_23 ^= (~var_10);
                var_24 = (~var_7);
            }
            for (int i_9 = 1; i_9 < 9;i_9 += 1)
            {
                var_25 = (min(var_25, ((max(((max(var_6, var_3))), ((var_8 ? var_10 : var_7)))))));
                arr_33 [i_1] [i_2] [i_9] = var_1;
                var_26 = (max(var_26, (!11804478676274845975)));
            }
            var_27 = (max(1075028536, 1075028536));
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_28 ^= (~var_11);
            var_29 = ((6642265397434705616 ? 11002 : 2147483647));
        }
        for (int i_11 = 1; i_11 < 10;i_11 += 1)
        {
            var_30 = ((~(!1075028523)));

            /* vectorizable */
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                var_31 += var_10;
                var_32 = -var_3;
            }

            /* vectorizable */
            for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
            {
                var_33 = (!32774);
                arr_47 [i_11] [i_11] [i_11] [i_11] = (~var_11);
            }
            for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
            {
                var_34 |= (!var_11);
                var_35 = (max(var_35, (!32762)));
            }
            var_36 &= var_10;
            var_37 = (min(var_37, var_9));
        }
        arr_52 [i_1] [i_1] = (max((min(var_9, (max(18446744073709551615, var_4)))), -1075028557));
    }
    /* vectorizable */
    for (int i_15 = 1; i_15 < 21;i_15 += 1)
    {
        /* LoopNest 2 */
        for (int i_16 = 2; i_16 < 21;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 22;i_17 += 1)
            {
                {
                    var_38 = var_5;

                    for (int i_18 = 0; i_18 < 22;i_18 += 1)
                    {
                        var_39 = ((-1 ? -var_5 : var_1));
                        var_40 = ((!(((var_3 ? var_4 : -1958686368)))));

                        for (int i_19 = 0; i_19 < 22;i_19 += 1)
                        {
                            var_41 = var_1;
                            var_42 = (max(var_42, 496574846));
                            var_43 = 8532;
                        }
                        for (int i_20 = 0; i_20 < 22;i_20 += 1)
                        {
                            var_44 = (max(var_44, var_9));
                            arr_69 [i_15 - 1] [i_16] [i_16] [i_16] [i_15 - 1] &= 8191;
                            var_45 |= var_3;
                            var_46 = var_6;
                            var_47 -= var_4;
                        }
                    }
                    for (int i_21 = 3; i_21 < 19;i_21 += 1)
                    {

                        for (int i_22 = 3; i_22 < 20;i_22 += 1)
                        {
                            arr_76 [i_15] = var_2;
                            arr_77 [i_15 - 1] [i_21 - 2] [i_17] [i_21 - 2] [i_16] [i_15] |= -4185492408619792364;
                            var_48 = var_9;
                        }
                        for (int i_23 = 0; i_23 < 22;i_23 += 1)
                        {
                            arr_80 [i_15] [i_15] [i_15] [i_16 - 2] [i_15] [i_21] [i_23] = ((13275403950750526618 ? 11239542777431890377 : 33361));
                            var_49 = (max(var_49, (~var_7)));
                            var_50 = var_7;
                        }
                        for (int i_24 = 0; i_24 < 22;i_24 += 1)
                        {
                            var_51 = (~var_0);
                            var_52 &= (~var_11);
                        }

                        for (int i_25 = 3; i_25 < 21;i_25 += 1)
                        {
                            var_53 = var_10;
                            arr_86 [i_15] [i_16] [i_15] [i_17] [i_21] [i_25 - 3] [i_25] = (~11804478676274846018);
                        }
                        for (int i_26 = 0; i_26 < 22;i_26 += 1)
                        {
                            arr_90 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15 - 1] = var_11;
                            var_54 = ((!(((44599 ? var_5 : var_4)))));
                            var_55 ^= (!var_3);
                            var_56 = (min(var_56, (!-1409965664)));
                        }
                        arr_91 [i_15] [i_16] [i_15] [i_16] = -6642265397434705607;
                    }
                    var_57 = -var_4;
                    var_58 = (~var_4);
                    var_59 = 4294967295;
                }
            }
        }
        var_60 = var_2;
    }
    var_61 = (min((-32767 - 1), 15814));
    #pragma endscop
}
