/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= 42214;
    var_20 |= -322883691;
    var_21 = (-var_16 && 42214);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_22 ^= -26780;
                arr_5 [1] [i_1] = 4311528448985948088;

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_8 [0] [i_1] [i_1] = ((!(((~(42214 | 3))))));
                    var_23 |= (max(((216 % ((-(arr_4 [i_2]))))), (arr_0 [i_1] [i_2])));
                    arr_9 [i_1] |= (!26781);
                    arr_10 [i_0] [i_0] = (((-13 + 2147483647) << ((((1 - 40384) > 24)))));
                }

                /* vectorizable */
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    var_24 += (arr_13 [i_1] [i_0] [i_1]);
                    arr_14 [i_0] = ((-(~4311528448985948105)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_25 ^= (((~218) & 1));
                                arr_20 [i_4] [i_4] [10] [i_1] [i_0] = (arr_0 [i_3 + 2] [i_1]);
                                var_26 = ((~(13071354092371265733 * 23340)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_27 = var_0;
                                arr_26 [i_0] [i_1] [i_0] [i_0] [1] [i_6] [4] = (((-9223372036854775807 - 1) / 15));
                                var_28 = 1;
                                var_29 += -4311528448985948090;
                            }
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    var_30 = (!5992);
                    var_31 = (2821189433916978191 % 42);
                    arr_29 [i_0] = ((-(arr_12 [i_8])));
                    arr_30 [i_1] [i_8] [i_8] [i_1] = (((max((!var_9), (2903776005 && 239))) || var_5));
                }
                for (int i_9 = 0; i_9 < 0;i_9 += 1)
                {
                    arr_33 [i_1] [i_1] [i_1] = (!var_2);

                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        arr_36 [i_0] [i_0] [i_0] [i_0] = 202;
                        arr_37 [i_0] [i_1] [i_9 + 1] [i_0] [i_10] = ((((min(42181, 55450))) / ((63594 << (239 - 235)))));
                    }
                    for (int i_11 = 2; i_11 < 21;i_11 += 1) /* same iter space */
                    {
                        arr_40 [i_11] [i_1] [i_11] [i_11] [i_11] = var_11;

                        for (int i_12 = 1; i_12 < 22;i_12 += 1)
                        {
                            arr_43 [i_12] [i_1] = (!-380420468138996583);
                            arr_44 [i_12] [i_12] [i_11] [i_9] [i_0] [i_0] = 10769;
                            var_32 += 239;
                            arr_45 [i_0] [i_1] [i_0] [i_1] [i_11 + 2] [i_0] [i_1] = ((((((arr_13 [i_0] [i_0] [i_0]) * 25146))) * (min(var_7, (arr_25 [i_0] [i_9 + 1] [10])))));
                        }
                    }
                    for (int i_13 = 2; i_13 < 21;i_13 += 1) /* same iter space */
                    {
                        var_33 = (((~64849) <= 1));

                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 23;i_14 += 1)
                        {
                            arr_53 [i_0] [i_1] [i_9 + 1] [i_13] [i_1] [i_13] = ((~(40 % -7304385863525297919)));
                            arr_54 [i_0] [i_0] [i_0] [i_9] [i_13 - 2] [i_14] = (63360 != ((~(arr_2 [i_1]))));
                            arr_55 [i_0] [22] [i_9] [i_13 - 2] [i_14] = ((5672125102216205622 + (arr_27 [i_0] [i_1] [i_9] [i_13 + 1])));
                            arr_56 [i_0] [i_0] [i_9 + 1] [i_0] [i_14] = var_17;
                            var_34 = (42214 || 350267479);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
