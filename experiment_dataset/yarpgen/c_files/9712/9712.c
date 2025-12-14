/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 2871217191;

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_18 = var_11;

                        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                        {
                            arr_17 [i_3] [i_0] = (arr_1 [13]);
                            var_19 = (min(1423750113, 54));
                            var_20 = (((((((arr_7 [i_0] [1] [i_3] [i_3]) >= var_3)) ? var_14 : var_12)) << ((((-(min((arr_7 [i_0] [i_0] [i_0] [i_2]), (arr_4 [i_0] [i_2]))))) - 8341325702584125685))));
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            var_21 = ((((min(var_13, (var_8 >= var_0)))) ? 0 : (-1423750121 >= var_15)));
                            arr_20 [i_2] [i_1 - 1] [i_0 - 1] [i_2] [i_0 + 1] = (arr_16 [i_1 - 1] [i_2]);
                            var_22 = (max(var_22, ((((arr_10 [4] [i_1 - 1] [i_1 + 1]) != -2871217201)))));
                            arr_21 [i_0] = ((min(2, 4294967288)));
                        }
                    }
                }
            }
        }
        var_23 = ((((((arr_19 [i_0] [i_0 - 1] [8] [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 2]) ? 26 : (arr_2 [i_0])))) ? (arr_11 [i_0 + 1] [i_0] [i_0 - 2] [i_0 + 2] [i_0]) : (min((max(1423750104, var_10)), (max((arr_12 [i_0 + 2] [i_0]), var_6))))));
        arr_22 [i_0] [i_0] = ((~((~((-(arr_0 [i_0] [i_0 - 1])))))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 9;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                var_24 += max(((((55 ? 140737488355327 : 1423750082)))), (~1423750113));
                                var_25 = (!4294967279);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            {
                                var_26 = ((~((((arr_8 [i_7 + 2] [i_7 - 1] [i_7 + 2]) <= (!var_8))))));
                                arr_40 [i_6] = (((((-(((arr_23 [i_7]) ? (arr_5 [i_6]) : var_3))))) && (arr_27 [i_7 - 1] [i_8 - 1] [i_8 + 1])));
                                var_27 = ((((((~-99) << (var_16 - 2649536141)))) ? ((((((min(4294967279, 1423750097))) != (min((arr_12 [i_6] [i_7]), (arr_30 [i_6] [i_11] [i_8] [i_7 - 1] [i_6] [i_6]))))))) : (min(((50 ? var_4 : 0)), (((30538 ? -289939844 : 0)))))));
                                var_28 = ((!(var_7 + 4294967292)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 10;i_14 += 1)
                        {
                            {
                                var_29 = (!1423750115);
                                arr_45 [i_6] [i_6] [1] [1] [i_13] [i_6] = 32529;
                                var_30 = ((var_2 ? (arr_26 [i_6]) : ((var_11 ? 0 : ((var_10 ? (arr_30 [i_6] [i_13] [i_7] [7] [i_14 + 1] [i_14]) : (arr_5 [i_13])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 11;i_16 += 1)
                        {
                            {
                                var_31 = 201;
                                arr_51 [i_6] [i_6] [i_8] [i_15] [i_6] = -423390585800889932;
                            }
                        }
                    }
                    var_32 = (min(var_32, ((((arr_43 [8]) + var_0)))));
                }
            }
        }
        var_33 = (max(2871217191, -7687955464235448512));
    }
    #pragma endscop
}
