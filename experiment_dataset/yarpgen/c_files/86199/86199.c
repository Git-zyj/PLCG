/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_20 = (max((min(((var_9 ? var_12 : var_11)), ((min(var_0, var_17))))), ((min((min(var_1, var_2)), ((var_6 ? var_8 : var_3)))))));
            arr_5 [i_0] [i_0] [i_1] = (min((max(var_1, var_7)), (max(-1730990495111869663, 2021176011855147645))));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            var_21 = (max(var_21, (var_17 ^ var_2)));
            var_22 = ((var_10 ? var_11 : var_14));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_13 [i_0] [i_0 + 2] [i_2 - 1] [i_3] [i_2 - 1] [i_3] = ((var_11 ? var_6 : var_18));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_23 = ((var_14 ? var_13 : var_1));
                            var_24 = (max(var_24, (((var_16 >> (var_18 - 1445))))));
                            arr_17 [0] [0] [i_3] [i_4] [i_5] = (var_11 != var_9);
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_25 = (var_17 + ((var_18 ? var_1 : var_4)));
                            arr_20 [i_0 + 1] [5] = ((var_1 ? ((var_7 ? var_3 : var_8)) : (!var_1)));
                            arr_21 [i_0 - 1] [i_2 - 1] [i_3] [i_4] [i_6] = ((~((var_5 ? var_12 : var_8))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 13;i_8 += 1)
                {
                    {
                        arr_27 [i_0 + 3] [i_2 + 1] [i_0 + 3] [9] = ((var_0 ? var_17 : var_15));
                        var_26 = (var_11 & var_19);
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            var_27 = min(-var_7, (max(var_8, var_19)));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        {
                            var_28 = (min(var_28, ((((var_6 << (var_1 - 7053151909635613390)))))));
                            var_29 |= (max(((((var_1 ? var_17 : var_8)) - var_12)), ((-1 ? -2225484088132359570 : 1))));
                            var_30 = (((var_8 ? var_19 : var_7)) <= ((var_16 ? var_17 : var_17)));
                            var_31 = (((((var_0 ? var_19 : var_17))) ? (((var_8 ? var_6 : var_3))) : ((1489340055 ? (-9223372036854775807 - 1) : 1))));
                            arr_41 [i_0] [i_9] [i_10] [7] [i_12] = ((((max(((var_4 ? var_18 : var_12)), var_17))) ? ((((min(18446744073709551615, 1528090478645173333))) ? ((min(var_5, var_7))) : (min(var_11, var_12)))) : (((min(var_0, var_2))))));
                        }
                    }
                }
            }
        }
        for (int i_13 = 1; i_13 < 13;i_13 += 1)
        {
            arr_45 [10] [i_13 - 1] = (!164);

            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                arr_50 [i_0] [1] [i_14] = ((((max(((max(var_5, var_16))), var_4))) ? (((var_2 ? var_2 : var_11))) : (min(var_18, ((79 ? 1022 : 3367497570))))));
                var_32 = (min(var_32, (((((max(var_8, var_17))) ? (min(var_5, var_19)) : (min(var_9, var_1)))))));
                arr_51 [8] [13] [i_14] [8] = (min(((min(0, 1))), (max(var_2, (var_7 || var_3)))));
            }
            for (int i_15 = 0; i_15 < 16;i_15 += 1)
            {
                var_33 = (((var_8 - var_4) ? ((((var_6 ? var_8 : var_14)) << var_6)) : var_13));
                var_34 = var_3;
                var_35 = (max(var_35, (((((!((max(var_15, var_9))))) ? ((min(var_19, var_9))) : var_8)))));
                var_36 = (min((max((((3978360195 ? 1 : 3904142319))), var_5)), (((((var_12 ? var_18 : var_1))) ? var_19 : var_5))));
                var_37 = (max(var_37, (((((!((max(var_3, var_19))))) ? ((min(var_2, var_11))) : -var_4)))));
            }
            arr_55 [i_13 - 1] = (!-11064);
        }
        var_38 = ((((min(var_11, var_18))) ? ((max(var_2, var_2))) : (!var_1)));
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 16;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 16;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 16;i_18 += 1)
                {
                    {
                        var_39 *= (max((max(var_5, var_8)), -1040882518));
                        var_40 = (min(var_15, var_15));
                    }
                }
            }
        }
        arr_63 [i_0] [14] = (min(16695874997811302644, 1));
    }
    for (int i_19 = 2; i_19 < 19;i_19 += 1)
    {
        arr_66 [i_19 + 1] = (((var_8 ? (max(var_17, var_14) : ((max(var_5, var_17)))))));
        var_41 &= (((((var_1 ? var_4 : var_12))) ? (((1411278475717576794 ? 128 : 1))) : (min((((var_0 ? var_19 : var_17))), var_5))));
        arr_67 [i_19] [i_19] = (((((var_5 ? var_12 : ((var_17 ? var_10 : var_11))))) ? ((var_6 ? ((1 ? var_6 : 1)) : (var_0 / var_15))) : (!-var_17)));
        var_42 = (var_10 < var_14);
    }

    for (int i_20 = 2; i_20 < 19;i_20 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_21 = 1; i_21 < 18;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 22;i_22 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 22;i_23 += 1)
                    {
                        for (int i_24 = 2; i_24 < 20;i_24 += 1)
                        {
                            {
                                arr_81 [i_20] [i_20] [i_23] [i_24 - 2] = (min(((var_6 ? var_3 : var_13)), ((((var_17 + 2147483647) << (var_15 - 1034789333865873251))))));
                                var_43 = ((-((var_11 ? ((var_12 ? var_10 : var_4)) : var_3))));
                            }
                        }
                    }
                    var_44 = (max(var_44, ((max(((var_17 ? var_7 : var_3)), ((max((max(var_17, var_16)), var_17))))))));
                }
            }
        }

        for (int i_25 = 0; i_25 < 22;i_25 += 1)
        {
            var_45 = ((((max(((min(var_5, var_5))), (min(var_11, var_10))))) ? ((var_3 ? var_18 : var_5)) : (((var_6 ? var_12 : var_12)))));
            arr_84 [i_20] [i_20] [i_20] = ((((min(var_3, var_0))) ? ((var_1 ? var_15 : var_11)) : (var_6 || var_7)));
        }
        /* vectorizable */
        for (int i_26 = 2; i_26 < 20;i_26 += 1)
        {
            var_46 = (min(var_46, (((3209057832 ? 1 : 114)))));

            for (int i_27 = 2; i_27 < 21;i_27 += 1)
            {
                arr_91 [14] [i_26 - 1] [i_20] = (!var_17);
                arr_92 [i_20] [i_27] |= var_16;
            }
            var_47 |= (var_7 ? var_1 : var_9);
            /* LoopNest 2 */
            for (int i_28 = 0; i_28 < 22;i_28 += 1)
            {
                for (int i_29 = 2; i_29 < 19;i_29 += 1)
                {
                    {
                        arr_98 [i_20] [i_20] [i_20] [i_28] [i_28] [i_20] = var_16;
                        var_48 = ((var_16 ? var_3 : var_3));
                        var_49 *= (var_19 ^ var_9);
                        arr_99 [i_26] [i_20] [i_29] = (var_1 <= var_5);
                    }
                }
            }
        }
        var_50 = (min(var_50, (((var_11 ? (((var_15 ? var_3 : var_12))) : var_4)))));
    }
    for (int i_30 = 2; i_30 < 19;i_30 += 1) /* same iter space */
    {
        var_51 ^= (!(((((var_6 ? var_0 : var_17))) || ((min(var_6, var_2))))));
        var_52 = (max((min(((var_17 ? var_8 : var_2)), (((var_0 ? var_16 : var_6))))), ((8327 ? -478959691 : -9223372036854775802))));
    }
    var_53 = (max(var_2, (((max(var_14, var_2))))));

    for (int i_31 = 1; i_31 < 17;i_31 += 1)
    {
        var_54 = (((var_1 + var_13) ? (((min(205, -27893)))) : (max(var_16, var_4))));
        var_55 = (min(var_55, (((var_6 ? (((var_16 ? var_13 : var_15))) : ((var_8 ? var_14 : var_11)))))));
    }
    #pragma endscop
}
