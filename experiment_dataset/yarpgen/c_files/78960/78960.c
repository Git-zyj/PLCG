/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((arr_1 [i_0] [i_0]) + 2147483647)) == 876843104));
        var_18 ^= (((min((arr_1 [i_0] [6]), var_12))) ? (((arr_2 [i_0] [i_0]) ? (!-1047609569) : -1451234947)) : (((arr_1 [i_0] [i_0]) ? var_2 : var_1)));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_19 = var_6;
        var_20 = ((!((min(-1047609590, 1960980085)))));
        var_21 = (min(var_21, (max(-var_8, var_0))));
        arr_7 [i_1 + 1] = (((((arr_6 [i_1 - 2]) ? var_2 : var_6))) ? var_0 : ((var_7 ? var_13 : var_8)));
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            var_22 = var_13;

            for (int i_4 = 3; i_4 < 13;i_4 += 1)
            {
                var_23 = ((arr_16 [i_2] [i_3 + 1] [i_4 + 1] [i_4 + 2]) | var_14);
                var_24 |= (-(arr_9 [i_3] [i_3 + 1]));
                var_25 = -43620776;
            }
            var_26 = (-(arr_11 [i_3 + 2]));

            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {

                for (int i_6 = 2; i_6 < 12;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        var_27 |= arr_14 [i_3 + 2] [i_3] [i_3 - 1] [i_3 - 1];
                        arr_24 [i_5] [i_2] [i_6] [i_5] [i_2] [i_5] = (var_2 ? -2129651714 : var_6);
                        var_28 = (min(var_28, var_10));
                        arr_25 [i_2] [i_2] [i_2] [i_6] [i_2] [i_5] = arr_8 [i_7] [i_3 + 2];
                        var_29 = (max(var_29, ((var_4 | (((!(arr_21 [i_2] [i_3 + 1] [i_5] [i_6] [i_6]))))))));
                    }
                    arr_26 [i_2] [i_3] [i_5] [14] [i_5] [i_5] = ((arr_20 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 1]) ^ var_0);

                    for (int i_8 = 4; i_8 < 14;i_8 += 1) /* same iter space */
                    {
                        arr_29 [i_3] [i_5] = ((arr_9 [i_3 + 2] [i_8 - 1]) ? var_15 : var_4);
                        arr_30 [i_6] [i_6] [i_6] [i_6] [i_5] = arr_23 [4] [i_6] [15] [i_5] [i_3] [i_2];
                    }
                    for (int i_9 = 4; i_9 < 14;i_9 += 1) /* same iter space */
                    {
                        arr_33 [i_5] [i_6 + 4] [i_6] [i_6] = ((!(arr_20 [i_6 + 4] [i_9 - 1] [i_6 + 4] [i_3 + 1])));
                        var_30 = -1448999484;
                    }
                    for (int i_10 = 4; i_10 < 14;i_10 += 1) /* same iter space */
                    {
                        var_31 = ((((var_8 ? (arr_28 [i_2]) : var_5))) ? var_13 : ((((arr_17 [i_2]) <= (arr_8 [i_10] [i_5])))));
                        var_32 = 1672816088;
                        var_33 = arr_23 [9] [i_3 - 1] [9] [i_3] [i_6] [i_5];
                        arr_37 [i_5] [i_3] [i_5] [i_2] = (arr_23 [i_3 - 1] [i_3] [1] [i_10 - 2] [i_6 + 4] [i_6 + 4]);
                        var_34 = (-var_7 ? var_15 : var_3);
                    }
                    var_35 = var_15;
                }
                arr_38 [9] [i_3] [i_5] [i_3 + 1] = (var_17 >= var_13);
            }
        }
        var_36 = var_8;
        var_37 *= (((arr_17 [i_2]) || -1448999485));
    }
    /* vectorizable */
    for (int i_11 = 4; i_11 < 16;i_11 += 1)
    {
        var_38 = arr_42 [i_11 - 3] [i_11];
        var_39 = (43620776 ? 2147483647 : 122959084);
        var_40 = var_17;
        var_41 = -2139941671;
    }
    for (int i_12 = 2; i_12 < 16;i_12 += 1)
    {
        arr_45 [i_12 - 1] [i_12 - 2] = var_7;

        for (int i_13 = 0; i_13 < 18;i_13 += 1)
        {
            var_42 = (!-876843104);
            var_43 = -var_17;
            var_44 = var_14;
        }
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            var_45 = (arr_39 [i_12] [i_12]);
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 18;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 14;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 18;i_17 += 1)
                    {
                        {
                            var_46 = min((arr_60 [i_12 + 1] [i_15] [i_16 + 1] [i_16] [i_17] [i_14]), var_10);
                            var_47 = (min(var_47, ((((((((2139941676 ? var_14 : (arr_53 [i_14] [i_12 - 2])))) ? (max(var_14, var_11)) : var_0))) ? (((arr_50 [i_16 + 4]) ? var_17 : (var_7 > var_3))) : (((arr_55 [i_12] [i_14] [i_12]) ? var_0 : var_2))))));
                            arr_61 [i_17] [i_16] [i_15] [i_14] [i_16] [i_12 - 2] = (!240194659);
                        }
                    }
                }
            }
            arr_62 [i_12] [i_12] [i_12] = arr_49 [i_12];
        }
        for (int i_18 = 3; i_18 < 17;i_18 += 1)
        {
            var_48 = arr_52 [i_18 + 1] [i_18] [i_12 + 1];
            var_49 = (((min(var_15, var_13)) >= var_0));
            arr_65 [i_12] = (!-var_10);
        }
        for (int i_19 = 3; i_19 < 17;i_19 += 1)
        {
            var_50 = ((!((max(876843104, -876843093)))));
            arr_68 [i_12] [15] = (-(((arr_59 [4] [i_19] [i_19] [4] [4]) ? var_15 : var_13)));
        }
        var_51 = min(var_4, (max(var_14, var_1)));
    }
    var_52 = var_15;
    var_53 = (0 != -492901895);

    /* vectorizable */
    for (int i_20 = 0; i_20 < 22;i_20 += 1)
    {
        arr_72 [i_20] = ((!(arr_70 [i_20])));
        var_54 = var_5;
        arr_73 [i_20] = (((arr_70 [i_20]) && var_9));
    }
    #pragma endscop
}
