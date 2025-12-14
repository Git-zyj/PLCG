/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_3 ? (((102 && var_10) ? ((240 ? var_12 : var_16)) : var_1)) : ((((var_1 ? var_0 : var_5))))));
    var_18 = (((~48) ? var_13 : var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = (arr_3 [8]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_19 = (min(var_19, (((((arr_7 [i_3] [i_3]) ? 1 : (arr_7 [i_0] [i_3])))))));
                            arr_13 [i_0] [i_0] [i_0] [i_2] [i_3] = 65525;

                            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                            {
                                var_20 = (max(var_20, (19864 - -328817058)));
                                var_21 = ((((((arr_12 [i_3] [11] [15] [i_0]) != (arr_12 [i_0] [2] [i_3] [4])))) <= 11));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] = ((((((min(var_4, 16368))) ? (arr_15 [i_0] [i_0] [i_0] [i_0]) : (974424903 - 255))) <= (arr_4 [i_3])));
                                var_22 = (max(var_22, 1));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                            {
                                var_23 = (min(var_23, var_12));
                                var_24 = ((var_5 ? (arr_17 [i_5] [i_0] [17] [i_0] [i_0]) : (((arr_15 [i_0] [i_0] [i_2] [i_2]) & 251))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 18;i_6 += 1)
                            {
                                arr_23 [i_0] [14] [i_0] = (arr_10 [i_0] [i_0] [i_0] [i_0]);
                                arr_24 [i_0] [i_0] [i_2] = var_5;
                                arr_25 [i_0] [i_0] [i_0] [i_3] [i_0] [i_6] &= ((17 > (arr_22 [i_0] [i_0] [i_0] [1] [i_3] [i_6] [i_6])));
                            }
                        }
                    }
                }
                arr_26 [i_0] = 3110210572889971098;
                var_25 -= (max(32767, 16));
            }
        }
    }
    var_26 = ((((((~1) < ((var_12 ? 102 : -3589525953072401415))))) + ((-19963 >> (22467 <= var_6)))));

    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 4; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 14;i_9 += 1)
            {
                {
                    var_27 ^= ((4462 + (((min(65519, 3110210572889971098)) / var_5))));
                    var_28 = 0;
                }
            }
        }
        var_29 = (min(var_29, ((min(((((max((arr_10 [i_7] [i_7] [i_7] [i_7]), -974424899)) != (((max((arr_4 [i_7]), 26))))))), ((((min(240, 4095))) ? 0 : (max(186, 3505553809)))))))));
        arr_33 [i_7] &= (((((var_12 ? ((((arr_17 [i_7] [i_7] [i_7] [i_7] [i_7]) && 65535))) : (arr_8 [i_7] [i_7] [i_7])))) <= (((arr_28 [i_7]) ? (arr_29 [i_7] [i_7]) : 44))));
        var_30 -= (arr_28 [i_7]);
        var_31 = (max(var_31, ((min(((max((arr_28 [i_7]), (arr_28 [i_7])))), ((-32768 ? var_2 : ((0 ? var_15 : 1)))))))));
    }
    for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
    {
        var_32 = (max(var_32, 4));
        var_33 = (max(var_33, (((((((((67108608 >> (3110210572889971100 - 3110210572889971089))) >= (~var_2))))) % (max((max(var_1, var_5)), 65535)))))));
        var_34 = (min(var_34, 1413662895));

        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            arr_40 [i_10] [i_11] [i_10] = (((4304 / (max((arr_1 [i_11]), var_11)))));
            arr_41 [i_10] = (var_13 >> 1);
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            var_35 ^= (arr_9 [i_10]);
            var_36 = (min(var_36, (((((3505553818 ? var_15 : 974345760)) * 1)))));
        }
        arr_44 [i_10] = (((((((min((arr_35 [i_10]), 1))) ? ((4294967295 ? 1 : (arr_8 [i_10] [i_10] [i_10]))) : (-32758 * 96)))) ? ((((arr_8 [i_10] [i_10] [8]) && (((10 ? 3505553814 : 17284)))))) : (arr_8 [i_10] [i_10] [i_10])));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 14;i_13 += 1)
    {
        var_37 = (~-6495773662240065976);
        arr_49 [i_13] = (arr_42 [i_13] [i_13] [i_13]);
    }
    #pragma endscop
}
