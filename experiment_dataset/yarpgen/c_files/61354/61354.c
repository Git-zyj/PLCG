/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((10913627959651155101 ? 1254923379 : 4)) & (((var_8 ? var_1 : var_7))))) * ((((var_9 ? var_8 : var_5)) - var_0))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            var_11 = ((((var_7 + var_4) ? (max((arr_1 [i_1]), var_4)) : (((var_7 ? var_1 : var_0))))) < ((((var_6 << (var_4 - 57))) >> ((min(var_7, var_1))))));
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_12 = (max(var_7, (((!(((2496716941542920953 ? var_0 : var_8))))))));
                        var_13 ^= (-(((var_8 >= var_8) ? (arr_8 [i_0] [i_0 + 1] [i_1 + 1] [i_3]) : ((1 ? 1 : 1)))));

                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            arr_16 [i_0] [i_1 - 1] [i_2] [i_0] [i_0] [i_2] = (max(((max(var_4, (arr_11 [i_4 + 1] [5] [i_2] [i_2] [i_0 + 1] [i_0])))), (max(var_3, (arr_11 [i_4 - 1] [i_0 + 2] [i_2] [i_2] [i_0 + 2] [i_0])))));
                            arr_17 [3] [2] [i_2] [i_2 - 1] [i_2] [i_2 + 2] = var_7;
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_14 = (min(var_14, var_2));
                            arr_21 [i_2] [i_2] = (~var_0);
                            arr_22 [i_0] [i_5] [i_0 - 1] [i_0] [i_0] &= (max(((((4294967290 ? var_4 : var_1)))), (((18739 / 8609) ? ((8774 ? 1373880243 : 5628621419844084178)) : var_5))));
                            var_15 = (max(var_15, ((((var_8 & var_2) ? (~-var_2) : ((var_6 + (var_0 || 4034348428))))))));
                            arr_23 [1] [i_5] [1] [i_5] |= (((((16 ? var_4 : ((var_8 ? var_6 : -23659))))) ? ((17139893627164595132 ? -2496716941542920953 : 126)) : var_7));
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            var_16 = var_8;
                            var_17 = (((arr_24 [6] [i_2 + 2] [i_2 - 3] [i_2]) ? var_1 : var_8));
                            var_18 = (min(var_18, (arr_14 [i_0 + 1] [i_0] [10])));
                        }
                        /* vectorizable */
                        for (int i_7 = 3; i_7 < 12;i_7 += 1)
                        {
                            var_19 &= (((!var_7) <= ((1134203710 ? var_7 : var_1))));
                            arr_31 [i_0 - 1] [i_2] [i_2] [3] [i_3] [i_7] = (((var_2 + 2147483647) << ((((((var_2 ^ (arr_8 [i_0] [1] [i_3] [i_7]))) + 392)) - 16))));
                            arr_32 [i_0] [i_1 - 3] [i_2] [i_3] = ((var_3 ? var_9 : var_7));
                            arr_33 [i_2] [i_1] [i_1] [i_1] = var_7;
                        }
                    }
                }
            }
        }
        for (int i_8 = 1; i_8 < 11;i_8 += 1) /* same iter space */
        {
            arr_37 [i_0] [i_8] = ((((max(var_0, var_7))) + ((var_7 + (arr_0 [i_8] [i_8 + 2])))));
            arr_38 [i_0 - 2] = ((max(((0 ? 349324652 : var_0), (28722 < 4294967281)))));
        }
        for (int i_9 = 1; i_9 < 11;i_9 += 1) /* same iter space */
        {
            arr_41 [i_0] = (((((((116 ? (arr_19 [i_0] [i_0] [i_9] [1]) : 14))) ? (min(156, -7687138767807462596)) : (!116))) >= (((((max(var_3, (arr_34 [i_0] [i_9 + 1])))) ? ((var_9 ? var_2 : var_5)) : (((var_1 << (var_4 - 96)))))))));
            arr_42 [i_0] [i_0 - 1] = ((var_8 < (((((1 ? var_7 : var_0))) ? ((1 ? -1134203710 : 1)) : ((var_6 ? (arr_6 [i_0] [i_0] [i_0] [i_0 + 1]) : var_4))))));
            arr_43 [i_0] = (max((max(var_4, ((var_5 << (var_9 - 151))))), (((((var_3 ? var_1 : var_0)) & var_4)))));
            arr_44 [i_0] [8] [i_0] = 115;
        }
        arr_45 [i_0 - 1] = (min(((var_1 ? (((var_4 ? var_9 : var_2))) : (max(var_8, (arr_29 [0] [i_0] [10] [i_0] [0]))))), var_9));
        arr_46 [2] = ((var_1 * (((((var_1 ? var_7 : -108))) ? (var_9 ^ 108) : -var_6))));
        var_20 = (max(var_20, (((!(((49676 ? -1 : -120))))))));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        arr_50 [i_10] [i_10] = ((!(1 && -349324653)));
        arr_51 [i_10] = (((max(var_3, var_5)) >> (((max((((4 > (arr_47 [i_10])))), (min(var_2, var_6)))) - 18300234613682466642))));
    }
    for (int i_11 = 2; i_11 < 21;i_11 += 1) /* same iter space */
    {
        var_21 |= (min(((((var_2 ? (arr_55 [i_11] [i_11]) : var_6)) * (((var_7 ? var_2 : 1))))), (((var_4 ? var_1 : (arr_53 [i_11]))))));
        arr_56 [8] &= (((((arr_54 [i_11 - 2] [i_11 - 1]) && var_4)) ? ((-var_5 ? ((max(var_0, var_2))) : (var_9 & -2))) : var_7));
    }
    for (int i_12 = 2; i_12 < 21;i_12 += 1) /* same iter space */
    {
        arr_59 [i_12] = var_8;
        arr_60 [i_12] = ((((((arr_54 [i_12 + 1] [i_12 + 2]) ? var_1 : (arr_54 [i_12 - 1] [i_12 - 2])))) ? var_2 : ((var_5 ? var_9 : var_8))));
        var_22 ^= var_4;

        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            var_23 = ((-((-((var_5 ? var_3 : var_4))))));
            var_24 = ((var_8 ? ((((((var_4 ? var_6 : var_5))) ? var_9 : (max(var_3, var_2))))) : (((!var_5) ? var_6 : var_1))));
        }
        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            var_25 ^= var_2;
            arr_65 [i_12] [i_14] [i_12] = var_1;
            var_26 = (min(((-(arr_54 [i_12 - 2] [i_12 + 2]))), ((~(arr_54 [i_12 + 2] [i_12 + 1])))));
            arr_66 [i_12] [i_14] = (min(((-((var_6 ? 1 : var_6)))), (arr_55 [i_12 + 1] [i_12])));
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 12;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 12;i_16 += 1)
        {
            {
                arr_71 [i_15] |= 79;
                var_27 = (max(var_27, ((((((max((arr_67 [0]), 32442))) ? (arr_52 [i_16]) : (((var_1 ? var_3 : var_1)))))))));
            }
        }
    }
    #pragma endscop
}
