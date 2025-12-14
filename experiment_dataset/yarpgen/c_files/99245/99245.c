/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_10 |= (max(var_6, (~131)));
        var_11 = ((((-32767 - 1) && 151)));
        arr_3 [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] = ((((min(var_5, (arr_0 [i_0])))) != ((-(var_2 && var_5)))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_12 = (var_1 ? ((min(((min((arr_0 [i_1]), var_6))), (((arr_5 [i_1] [i_1]) / -32758))))) : (((arr_2 [i_1]) ? 3441487813328799614 : var_4)));
        var_13 = -28467;
        arr_7 [i_1] [i_1] = ((((max(0, (arr_6 [i_1] [i_1])))) ? (33 + 22588) : (((253 || (arr_6 [i_1] [i_1]))))));
        var_14 &= (min((((arr_1 [i_1]) ? (arr_1 [i_1]) : (arr_1 [i_1]))), (((arr_1 [i_1]) + var_6))));
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 10;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_15 = 26;
            var_16 = ((-var_3 & ((-32756 ? var_1 : 2122978131107763236))));
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                var_17 ^= ((var_7 | (arr_12 [i_2] [i_2])));
                var_18 = -1;
            }
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                arr_22 [i_4] [i_4] [i_6] = (~-var_9);
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 7;i_8 += 1)
                    {
                        {
                            var_19 = 1;
                            arr_29 [i_8 - 1] [i_4] [i_4] [8] = (((var_4 && var_2) * var_6));
                        }
                    }
                }
            }
            arr_30 [i_4] = (~23);
            var_20 -= 0;
            var_21 ^= ((var_1 ? ((75 ? var_2 : -12)) : (((-31845 > (arr_11 [i_4]))))));
        }
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            arr_33 [i_2] = ((17592169267200 >= 0) | (var_1 && 179));

            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                var_22 = ((244 ? 1 : (arr_14 [i_2 - 1] [i_2 + 1])));
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 9;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        {
                            arr_42 [i_2] [i_9] [i_9] [i_11] [i_12] [i_10] [i_10] = var_0;
                            var_23 = (min(var_23, (((var_1 ? 242 : var_8)))));
                            var_24 = (arr_2 [i_2 - 1]);
                            var_25 = ((((((arr_31 [i_9] [i_10]) ? 255 : var_7))) ? var_7 : (arr_40 [i_2 + 1])));
                            var_26 = var_0;
                        }
                    }
                }
            }
            for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        {
                            var_27 *= -var_1;
                            var_28 = ((~(arr_19 [i_2 + 1] [i_2 + 1])));
                        }
                    }
                }
                var_29 = ((~((34 << (var_9 - 1014332033)))));
                var_30 *= (var_4 == 21927);
                arr_49 [i_13] [i_9] [i_2] |= 4626132961252680081;
            }
            for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
            {
                var_31 = 161377473;
                arr_52 [i_2] [i_9] = ((var_1 < ((var_0 ? (arr_18 [i_2] [i_9] [i_16]) : 1))));
                var_32 = -25;
            }
            for (int i_17 = 0; i_17 < 11;i_17 += 1)
            {
                var_33 = 63;
                var_34 = ((-14169 ? (((arr_19 [i_17] [i_9]) ? (arr_31 [i_17] [i_2]) : 6027730391989426179)) : var_6));
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 11;i_18 += 1)
                {
                    for (int i_19 = 2; i_19 < 9;i_19 += 1)
                    {
                        {
                            var_35 = (max(var_35, 7318153446716120709));
                            arr_59 [i_19 - 1] [i_19] [i_18] [1] [i_19] [i_2] = 242;
                            arr_60 [i_2] [i_9] [i_17] [i_19] = (((arr_1 [i_2]) >> (((arr_1 [i_2 - 2]) - 78))));
                        }
                    }
                }
            }
            arr_61 [i_2] [0] &= (!var_8);
        }
        /* LoopNest 3 */
        for (int i_20 = 0; i_20 < 11;i_20 += 1)
        {
            for (int i_21 = 1; i_21 < 10;i_21 += 1)
            {
                for (int i_22 = 1; i_22 < 8;i_22 += 1)
                {
                    {

                        for (int i_23 = 0; i_23 < 11;i_23 += 1)
                        {
                            var_36 = (min(var_36, (((var_4 <= (arr_71 [i_2 - 4] [i_20] [i_22 - 1] [i_21 - 1] [i_23] [i_23]))))));
                            var_37 ^= (arr_17 [i_23] [i_2]);
                        }
                        for (int i_24 = 2; i_24 < 10;i_24 += 1)
                        {
                            var_38 = ((5394552652168277623 ? 42 : (~var_2)));
                            var_39 = (min(var_39, -var_1));
                        }
                        var_40 = (min(var_40, (~3117)));
                        var_41 = ((255 ? (!var_5) : (var_3 | -69)));
                    }
                }
            }
        }
        var_42 = ((~(arr_53 [7] [i_2] [i_2] [7])));
        var_43 = var_1;
    }
    var_44 = ((!(((-((min(var_2, var_0))))))));
    var_45 &= (max((var_8 != var_0), var_8));
    #pragma endscop
}
