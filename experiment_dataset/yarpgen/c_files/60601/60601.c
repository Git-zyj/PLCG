/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = max(1, (((var_15 ? 114 : var_2))));
        arr_4 [i_0] [i_0] = (((((~1) == ((min(var_0, var_19))))) ? -var_17 : var_14));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((!0) && ((max(var_10, 1))));
        var_20 = ((!(((0 || var_19) || var_8))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_21 = (max(var_21, (((!(!var_9))))));
        var_22 = (~var_7);

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        arr_17 [i_2] [i_2] [i_3] = 101;
                        var_23 = -11904995324664971610;
                        arr_18 [i_3] [i_3] [6] [i_5] = (((!-54) ? var_13 : (var_15 + var_6)));
                    }
                }
            }
            arr_19 [i_3] [i_3] = var_17;
            var_24 = ((~(((-101 + 2147483647) << (41711 - 41711)))));

            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                var_25 = (max(var_25, var_0));
                var_26 = (min(var_26, (var_4 - var_6)));
                var_27 = (max(var_27, (var_16 - var_5)));
            }
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
        {
            arr_24 [i_7] = ((var_5 - (var_3 <= 96)));
            var_28 = (!108086391056891904);
            var_29 = (min(var_29, 0));
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
        {
            var_30 = (~50828);

            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                arr_32 [i_2] [i_2] [i_2] [i_8] = ((((-53 ? var_16 : var_6)) & 15705427727205812614));
                arr_33 [i_2] [i_8] [i_8] = var_14;
                arr_34 [i_8] [i_8] [i_9] = (3524556701637611492 << (var_14 & var_12));
                var_31 = (max(var_31, ((((var_4 ? var_8 : var_4))))));
            }
            for (int i_10 = 0; i_10 < 0;i_10 += 1)
            {
                var_32 = (((var_9 | var_1) || 0));
                /* LoopNest 2 */
                for (int i_11 = 4; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 12;i_12 += 1)
                    {
                        {
                            arr_42 [i_2] [i_8] [i_8] [4] [i_10] [i_8] [i_10] = ((((var_11 ? var_6 : var_3)) - -101));
                            var_33 = ((var_9 ? (61 ^ -32) : var_10));
                        }
                    }
                }

                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    arr_46 [i_2] [i_8] [i_10 + 1] [i_13] [i_2] = (11 * var_5);
                    arr_47 [i_8] [i_8] [i_8] [i_8] [7] = ((var_13 ? ((var_7 ? 11677635410776329461 : 1)) : (!var_8)));
                    var_34 = (min(var_34, (-12705 != 11)));
                }
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    var_35 = (max(var_35, 0));
                    arr_50 [i_8] = 1;
                    var_36 = var_9;
                }
            }
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        {
                            var_37 = (244 + var_16);
                            arr_62 [i_8] = var_2;
                            arr_63 [i_2] [9] [9] [i_8] [i_2] [i_17] = (~var_4);
                            var_38 = (max(var_38, (var_14 ^ var_11)));
                        }
                    }
                }
                arr_64 [3] [i_8] [i_2] = ((-111 ? var_12 : 49707));
            }
            var_39 = (max(var_39, (((var_4 ? (-3840 + var_1) : var_17)))));
        }
        var_40 = (min(var_40, (~var_16)));
        var_41 = var_11;
    }
    /* LoopNest 2 */
    for (int i_18 = 1; i_18 < 21;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 24;i_19 += 1)
        {
            {
                arr_71 [i_18] = (min((((var_2 ? var_6 : 1))), 1));
                var_42 = (~(min(var_6, (~108086391056891904))));
                /* LoopNest 3 */
                for (int i_20 = 3; i_20 < 22;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        for (int i_22 = 4; i_22 < 22;i_22 += 1)
                        {
                            {
                                var_43 = (max(var_43, var_12));
                                var_44 = 0;
                                var_45 = (min(var_45, (max((min(65507, 2741316346503739001)), (var_13 - var_0)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_23 = 1; i_23 < 22;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 24;i_24 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_25 = 2; i_25 < 21;i_25 += 1)
                            {
                                arr_89 [i_24] [i_24] [i_18] [i_24] [14] [i_24] [i_24] = ((~(~var_14)));
                                var_46 = ((0 ? var_15 : -512));
                                var_47 = (min(var_47, var_5));
                            }
                            for (int i_26 = 0; i_26 < 1;i_26 += 1)
                            {
                                arr_94 [i_18] [i_19] [i_19] [i_18] [i_24] [i_18] [i_18] = ((max(var_3, var_6)));
                                arr_95 [i_26] [i_26] [i_18] [i_26] [i_26] [i_26] = (max((var_7 | var_19), ((~(~16124)))));
                            }
                            arr_96 [i_24] [i_24] [i_18] [16] = var_9;
                        }
                    }
                }
                arr_97 [i_18 + 1] [i_18] [i_18] = var_8;
            }
        }
    }
    var_48 = (!(((~((var_19 ? 34 : -29941))))));
    #pragma endscop
}
