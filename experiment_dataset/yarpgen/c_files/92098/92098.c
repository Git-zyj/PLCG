/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_18 = (max(var_18, (((((((max(var_6, var_9))) / (var_12 != var_8))) == var_5)))));

                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    arr_11 [i_0] [i_0] [i_1] [i_0] [i_0] = var_9;
                    var_19 += min(((var_5 << (var_12 + 6698194457360891264))), (-114 | 53));
                    var_20 -= (((var_3 >= var_6) & ((((min(var_3, var_4))) / (var_13 < var_5)))));
                }
                var_21 = var_12;
            }
            for (int i_4 = 1; i_4 < 7;i_4 += 1)
            {
                arr_16 [6] &= (max((((((var_12 ? var_13 : var_7))) ? (var_3 / var_16) : ((var_11 ? var_17 : var_4)))), ((1 ? 36 : 53))));
                var_22 += (127 != 65535);
                var_23 ^= ((((((var_16 ? var_16 : var_12)) * (var_12 > var_12))) << (var_3 + 91)));
                arr_17 [i_0] [i_1] = ((((max((var_0 / var_1), (max(var_11, var_15))))) && ((min(var_16, var_4)))));
                var_24 = (max(var_24, var_15));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                arr_21 [i_1] [i_1] = (var_4 + var_4);
                /* LoopNest 2 */
                for (int i_6 = 4; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_25 ^= ((-105 ? -105 : 104));
                            var_26 &= ((((var_9 ? var_12 : var_0)) + (((var_14 ? var_11 : var_1)))));
                            var_27 &= ((var_11 ? ((var_6 ? var_6 : var_14)) : (var_7 & var_16)));
                        }
                    }
                }
            }
            for (int i_8 = 1; i_8 < 8;i_8 += 1)
            {
                arr_29 [i_0] [i_0] [i_0] [i_1] = ((((((var_4 ^ var_4) ? var_14 : (((var_0 ? var_17 : var_7)))))) ? (((var_11 == var_5) ? (var_1 % var_2) : ((min(var_1, var_6))))) : (var_3 + var_13)));

                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    arr_32 [i_0] [i_0] [i_1] [i_0] [i_0] = (((((((9068 ? -1 : 53))) ? (max(var_12, var_3)) : (((var_9 ? var_5 : var_2))))) % (((((var_4 | var_1) > ((var_13 ? var_7 : var_5))))))));

                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        arr_35 [i_0] [i_0] [i_0] [i_1] = (((((((var_10 ? var_9 : var_13))) ? var_10 : (((var_6 ? var_6 : var_1))))) >= (var_0 | var_1)));
                        arr_36 [i_0] [i_1] [i_1] [i_1] [i_1] = (((((((min(var_17, var_12))) ? var_16 : var_17))) || (((var_7 ? var_13 : var_12)))));
                        var_28 *= var_10;
                        arr_37 [i_1] [i_0] [i_0] [i_0] [i_0] [i_1] = (min(var_15, ((var_1 * ((var_11 ? var_10 : var_14))))));
                    }
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        arr_40 [i_1] = (((((var_15 >> (var_12 != var_11)))) || ((var_9 || (var_7 + var_1)))));
                        var_29 = (max(var_29, ((((var_11 + var_5) - (((var_2 + var_13) ? ((var_10 ? var_7 : var_3)) : var_13)))))));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        arr_43 [i_0] [i_0] [i_0] [i_12] [i_0] &= ((var_3 ? (var_7 && var_17) : ((var_14 ? var_11 : var_1))));
                        var_30 &= var_12;
                        arr_44 [i_0] [i_0] [i_0] [i_1] [i_1] = (var_6 <= var_4);
                        arr_45 [i_1] [i_1] [i_0] [i_1] [i_1] [i_1] [i_0] = var_5;
                        arr_46 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = (((var_15 * var_10) != ((var_16 ? var_5 : var_13))));
                    }
                    var_31 = ((((((((var_2 ? var_7 : var_17))) ? (((max(var_15, var_7)))) : ((var_13 ? var_8 : var_9))))) ? (((var_10 <= var_9) ? ((var_7 ? var_0 : var_5)) : var_5)) : ((var_4 ? var_16 : var_6))));
                    var_32 = (((((8268788160410880533 ? (9063 % 26364) : (127 > -920911635)))) % ((var_9 ? (var_14 == var_14) : var_8))));
                }
                for (int i_13 = 2; i_13 < 8;i_13 += 1)
                {
                    arr_49 [i_13] [i_13] [i_1] [i_13] [i_13] [i_13] = ((((((var_10 < var_0) ? (((var_14 ? var_11 : var_17))) : ((var_6 ? var_15 : var_8))))) ? ((var_2 ? var_5 : var_5)) : 1967090898425809090));
                    var_33 = ((((((((var_3 ? var_5 : var_5)) > ((var_11 ? var_16 : var_4)))))) > (var_11 > var_0)));
                }
                /* vectorizable */
                for (int i_14 = 2; i_14 < 6;i_14 += 1)
                {
                    var_34 = (min(var_34, var_1));

                    for (int i_15 = 2; i_15 < 6;i_15 += 1)
                    {
                        arr_55 [i_15] [i_15] [i_15] [i_15] [i_1] [i_15] = var_11;
                        var_35 *= (var_3 ? (var_12 != var_17) : (var_13 != var_11));
                    }
                    var_36 = ((var_13 ? var_0 : var_4));
                    arr_56 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0] = (((var_13 + 2147483647) << ((((var_14 ? var_17 : var_10)) - 48763))));
                }
                arr_57 [i_8] [i_8] [i_1] [i_8] = ((((((((var_3 ? var_9 : var_17))) ? (var_13 ^ var_10) : var_6))) ? ((var_2 ? (var_2 && var_7) : (var_0 + var_12))) : var_4));
            }
            arr_58 [i_0] [0] [0] &= (((((max(var_0, var_0))) * (var_0 >= var_16))));
        }
        for (int i_16 = 0; i_16 < 10;i_16 += 1)
        {
            var_37 = (min(var_37, ((((var_16 || var_10) / ((((var_14 ? var_8 : var_15)) + (((var_1 ? var_15 : var_15))))))))));
            var_38 = (((var_5 * var_4) != ((var_17 ? var_3 : var_17))));
            var_39 = (max(var_39, ((min(((((var_1 ? var_3 : var_12)) * var_10)), (var_13 || var_6))))));
        }
        arr_62 [i_0] = (max((((var_12 % var_16) ? ((var_0 ? var_12 : var_4)) : (var_12 > var_7))), (((var_11 == ((var_3 ? var_14 : var_12)))))));
        /* LoopNest 2 */
        for (int i_17 = 3; i_17 < 8;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 10;i_18 += 1)
            {
                {
                    var_40 = (min(8172045848894377568, 105));
                    arr_68 [i_0] [i_0] [i_0] [i_0] = var_7;
                }
            }
        }
        var_41 = ((((((var_12 <= var_3) == var_2))) + ((((var_8 && var_3) && (var_15 * var_17))))));
    }
    var_42 = var_15;
    var_43 += (((((((var_5 ? var_15 : var_1))) ? (var_17 + var_14) : ((var_15 ? var_8 : var_0)))) - (((var_8 - var_0) + ((var_14 ? var_8 : var_16))))));
    var_44 = ((((max(((max(var_13, var_7))), ((var_16 ? var_2 : var_0))))) ? ((var_3 | (var_10 != var_6))) : ((var_8 ? (var_10 / var_0) : var_4))));
    #pragma endscop
}
