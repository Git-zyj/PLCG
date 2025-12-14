/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 3584;

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        var_15 = (min(-29, (arr_0 [i_0])));
        var_16 *= (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        var_17 ^= (var_3 % -3531922973642125847);

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_18 ^= var_10;
            var_19 = (((var_5 / var_8) - (var_5 / var_4)));
            arr_8 [i_1] [i_1] = (((((arr_5 [i_1] [i_2]) ? 16441 : (arr_2 [i_2]))) + var_2));
            arr_9 [i_1] [i_2] = 12410;
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_20 ^= (25006 / var_12);

            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                var_21 = ((var_9 ? (0 && var_7) : (arr_14 [i_1] [3] [i_1 - 1] [i_1])));

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_22 = ((6782052181690332669 ? (6782052181690332660 ^ -2124884831) : var_4));
                    var_23 ^= -11664691892019218934;
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {

                    for (int i_7 = 2; i_7 < 12;i_7 += 1) /* same iter space */
                    {
                        arr_24 [i_1] [i_4] [i_1] = (((11664691892019218955 ^ 12410) << (((4294965248 || (arr_19 [i_1] [i_3] [i_4]))))));
                        var_24 = (max(var_24, 1));
                        var_25 -= ((!(arr_4 [i_3])));
                        arr_25 [i_1 - 3] [i_3] [i_4] [i_1] [i_7] = (((!53114) ? ((1 % (arr_2 [i_1]))) : 1606076644));
                    }
                    for (int i_8 = 2; i_8 < 12;i_8 += 1) /* same iter space */
                    {
                        arr_28 [i_1] [i_3] [i_3] = -55;
                        var_26 |= var_10;
                        arr_29 [i_1] [i_3] [i_4] [i_1] [i_8 - 2] = var_8;
                    }
                    var_27 *= (-9860 ? var_8 : (arr_21 [i_1] [i_3] [i_4] [i_6] [i_1 - 2] [i_3]));
                }
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    arr_34 [i_1 - 1] [i_1] [13] [i_9] = ((arr_11 [i_1]) + (((arr_15 [i_9] [i_4] [i_4] [i_3] [i_1] [i_1]) ? var_4 : 1)));
                    var_28 = 1;

                    for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                    {
                        var_29 = (arr_12 [i_1 + 1] [i_3] [i_4] [i_9]);
                        var_30 = (max(var_30, var_8));
                    }
                    for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                    {
                        var_31 *= (((arr_35 [i_1] [i_3] [i_4] [i_11]) ? (arr_21 [i_1 + 3] [i_1 + 1] [i_1 + 3] [i_1 - 3] [i_1 + 3] [i_1 + 2]) : (arr_32 [i_1] [i_1 + 1] [i_1 + 1])));
                        arr_41 [i_1] [i_1] [i_1] [i_11] = (1773687306 & 0);
                        var_32 = -1565236055;
                    }
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    var_33 ^= (arr_13 [i_3] [i_3]);
                    arr_44 [i_12] [i_1] = 1;
                    var_34 = (((((65535 ? 3176366054385601525 : 49642))) || (2045 - var_8)));
                    var_35 ^= var_0;
                }

                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    arr_47 [i_1] = 4294967295;
                    var_36 = (((53108 + var_2) + 1565236055));
                    arr_48 [i_1] [i_3] [i_1] [i_13] = ((-((~(arr_3 [i_1] [i_1])))));
                }
            }
        }
        var_37 |= ((((var_8 ? (arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : 0)) != (arr_12 [i_1] [i_1] [i_1] [i_1 + 1])));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {

        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            var_38 = (((1 || 20125) || var_2));
            var_39 ^= var_13;
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 12;i_16 += 1)
            {
                for (int i_17 = 3; i_17 < 11;i_17 += 1)
                {
                    for (int i_18 = 3; i_18 < 9;i_18 += 1)
                    {
                        {
                            var_40 = arr_55 [i_15] [i_14] [i_15];
                            var_41 = (min(var_41, 1));
                            var_42 = (min(var_42, ((~((((arr_26 [i_16] [i_15] [i_16] [i_17] [i_17 - 3] [i_18 - 1]) || var_1)))))));
                            var_43 = (11664691892019218958 <= 6782052181690332697);
                        }
                    }
                }
            }
        }
        for (int i_19 = 0; i_19 < 12;i_19 += 1)
        {
            var_44 = arr_53 [i_19];
            arr_68 [i_14] [i_14] = var_4;
        }
        var_45 &= var_2;
        var_46 = (max(var_46, var_2));
        var_47 = ((51 ? 20097 : (632219869 * 11664691892019218959)));
        arr_69 [i_14] = (arr_7 [i_14]);
    }
    /* LoopNest 3 */
    for (int i_20 = 0; i_20 < 17;i_20 += 1)
    {
        for (int i_21 = 1; i_21 < 15;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 1;i_22 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 1;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 17;i_24 += 1)
                        {
                            {
                                var_48 = ((0 - ((((-122 + 2147483647) >> (-6782052181690332677 - 11664691892019218932))))));
                                var_49 = 1;
                                var_50 *= var_6;
                                var_51 ^= ((1 ? 1433360079 : 1));
                            }
                        }
                    }
                    var_52 = (max(var_52, (arr_82 [i_20] [i_20] [i_20] [i_20] [i_20])));
                }
            }
        }
    }
    #pragma endscop
}
