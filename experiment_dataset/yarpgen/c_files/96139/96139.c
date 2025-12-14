/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        var_11 = (min(var_11, (+-1)));
        var_12 = -4294967295;
        arr_4 [4] [i_0 + 1] &= ((~(arr_2 [i_0 + 1] [i_0 + 1])));
        var_13 += ((((((arr_3 [i_0]) ? 1 : 1))) ? 1 : 1));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [1] = (var_2 ? 1 : var_4);
        var_14 = (max(var_14, var_1));
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
    {
        arr_12 [3] [2] = (((((-15250956690768153244 ? var_7 : var_10))) ? ((var_1 ? -1 : -1)) : var_3));
        arr_13 [i_2] = ((((max(-24, (arr_0 [i_2 + 1])))) ? (((min(53, -24)))) : ((39806 ? 1439445835823071283 : 1))));
        var_15 = 1;
        var_16 = (((min(3717114021174550302, var_4)) << (var_8 - 38536)));
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_17 = (((((((arr_17 [i_3]) ? var_1 : -9223372036854775789)) * -4)) + var_1));
        arr_18 [1] [i_3] = (max((var_7 << 18), var_4));
    }
    for (int i_4 = 2; i_4 < 21;i_4 += 1)
    {
        var_18 = var_9;
        var_19 = (max((var_5 + 1), (((max(1, 1))))));
    }

    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {
        var_20 |= (min(1, var_9));
        var_21 &= (max(4095, ((12758 ? var_3 : (-9 + var_5)))));
        var_22 &= 67;
        var_23 = ((((!(arr_21 [i_5] [i_5]))) ? ((min(var_3, (arr_22 [i_5] [i_5])))) : ((var_9 ? (arr_22 [i_5] [i_5]) : var_9))));
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
    {
        var_24 -= (arr_23 [i_6]);

        /* vectorizable */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            arr_29 [i_6] [i_7] [i_7] = (108 == 184);

            for (int i_8 = 1; i_8 < 21;i_8 += 1)
            {
                arr_33 [i_8] = (~var_7);

                for (int i_9 = 0; i_9 < 0;i_9 += 1)
                {
                    var_25 = ((var_3 ? var_7 : 19));

                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        arr_40 [i_8] [i_7] = (((536767201 / var_0) ? (!1) : (arr_39 [i_6] [i_9] [i_10])));
                        var_26 = (((arr_27 [i_8 - 1] [9] [i_9 + 1]) ? (var_9 * 1) : (((var_10 ? 15 : var_7)))));
                        var_27 = (!1);
                        var_28 = (-68 == 185);
                        arr_41 [i_10] [i_8] [i_6] [i_8] [i_6] = -var_3;
                    }
                }
                var_29 = (((arr_24 [i_7]) > 1457168079));
                var_30 *= -5878062617571010345;

                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    arr_44 [i_6] [i_7] [i_8] [i_11] [i_8] = -5878062617571010345;
                    var_31 = 1439445835823071283;
                    arr_45 [i_8] [i_7] [i_8] [i_11] = 143;
                }
            }
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {

                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    var_32 ^= ((17007298237886480340 ? 112 : 1133805779));
                    arr_52 [i_6] [i_12] [i_12] [i_12] [11] = (var_9 - var_5);
                }
                for (int i_14 = 2; i_14 < 23;i_14 += 1)
                {
                    arr_55 [i_7] [i_12] = (((((var_7 << (var_2 - 7614758916642268987)))) ? 104 : 1));
                    var_33 -= -var_6;
                }
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    var_34 = (min(var_34, var_7));
                    var_35 = (~805543544);

                    for (int i_16 = 0; i_16 < 24;i_16 += 1)
                    {
                        var_36 = (min(var_36, ((((~15) == var_6)))));
                        arr_61 [22] [i_7] [22] [22] [i_6] &= (((arr_46 [i_6] [i_6] [i_6] [i_6]) == (3 > var_2)));
                    }
                    for (int i_17 = 0; i_17 < 24;i_17 += 1)
                    {
                        var_37 = 1006528443;
                        var_38 = 1;
                    }
                }
                for (int i_18 = 2; i_18 < 22;i_18 += 1)
                {
                    var_39 = (max(var_39, var_10));

                    for (int i_19 = 2; i_19 < 22;i_19 += 1)
                    {
                        var_40 = (max(var_40, var_2));
                        arr_69 [i_19] [i_19] [i_6] |= ((var_2 / (~-4977136003565769848)));
                        var_41 = arr_31 [i_6] [20] [i_6];
                    }
                    for (int i_20 = 3; i_20 < 22;i_20 += 1)
                    {
                        var_42 &= 132;
                        arr_73 [i_7] [i_12] [i_18] [i_20] = 1133805762;
                        var_43 = (43 ^ var_1);
                    }
                    var_44 += (arr_47 [i_6]);
                    var_45 += (arr_64 [i_18] [i_7] [i_18] [i_18 + 2] [i_7]);
                }
                var_46 = (max(var_46, -1));
            }
            for (int i_21 = 1; i_21 < 23;i_21 += 1) /* same iter space */
            {
                var_47 = (min(var_47, (arr_51 [i_7] [i_7] [14] [i_21])));
                var_48 = var_8;
            }
            for (int i_22 = 1; i_22 < 23;i_22 += 1) /* same iter space */
            {
                var_49 &= ((-22 + (~90)));
                arr_79 [i_6] [i_7] [i_6] = ((-15 ? 1 : 3778695588));
            }
        }

        /* vectorizable */
        for (int i_23 = 0; i_23 < 1;i_23 += 1)
        {
            var_50 = ((var_10 ? var_1 : -100));

            for (int i_24 = 0; i_24 < 24;i_24 += 1)
            {
                arr_84 [i_6] [i_6] [i_6] = 127;
                var_51 = (((!var_5) ? ((113078053 ? var_6 : 5699429090523059630)) : (arr_36 [i_6] [i_23] [i_6])));
                var_52 = (max(var_52, (~9223372036854775805)));
            }
        }
    }
    #pragma endscop
}
