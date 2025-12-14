/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (((((var_14 >= var_0) * var_7)) + var_3));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_0] [i_0] [i_0] &= (!7);

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_1] = (!var_16);
                        arr_14 [i_1] [i_1] = (!var_16);

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_17 = ((((var_4 ? var_9 : var_9)) ^ var_8));
                            var_18 = ((var_4 ? var_13 : (((var_14 ? var_11 : var_11)))));
                        }
                        var_19 = ((((var_16 ? var_3 : var_11))));
                        var_20 = ((var_6 | (var_15 | var_12)));
                    }
                    /* vectorizable */
                    for (int i_5 = 4; i_5 < 17;i_5 += 1)
                    {
                        arr_19 [i_0] [i_1] [i_1] [i_5] = ((((var_3 ? var_9 : var_0)) % (((var_6 ? var_10 : var_11)))));
                        arr_20 [i_0] [i_2] [i_1] [i_0] [i_5] [i_5] &= (((~var_6) == ((var_0 ? var_6 : var_10))));
                        var_21 |= (((var_14 * var_12) != var_8));
                        arr_21 [i_0] [i_1] [i_2] = ((var_11 ? var_4 : var_6));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_28 [i_0] [i_0] [i_1] [i_2] [i_6] [i_1] [i_7] = (((((2877780245426614065 << 1) & (((var_16 + 9223372036854775807) >> (var_14 + 56))))) < (((3161810860239375869 ? 1 : 517766168275389663)))));
                                var_22 = (max(var_22, ((((((var_11 ? var_14 : var_8))) ? ((var_8 ? var_10 : var_2)) : var_1)))));
                                arr_29 [i_0] [i_0] [i_0] [i_6] [i_1] = ((((var_15 == (var_11 <= var_0))) ? (min((~var_6), ((var_3 ? var_16 : var_11)))) : var_7));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        arr_34 [i_8] = var_3;
        arr_35 [i_8] = ((!((((max(var_16, var_9))) || (((var_16 ? var_10 : var_9)))))));
        var_23 = (((var_15 ^ var_9) || (1 << 1)));
    }
    var_24 = ((((var_0 ? (max(var_0, var_9)) : var_4)) * ((var_1 | (var_3 + var_9)))));
    var_25 = ((((((((var_3 ? var_1 : var_3))) ? (var_5 >> var_12) : var_5))) ? ((~(var_12 & var_1))) : (min(0, ((1 ? 1 : 1))))));
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        {
                            arr_48 [i_9] [i_10] [i_9] [i_9] = var_4;
                            var_26 = ((var_16 ? (~var_15) : (!var_8)));
                            arr_49 [i_9] = ((1 << (((min(3968274738, -2877780245426614065)) + 2877780245426614078))));
                        }
                    }
                }
                var_27 -= ((((((max(var_6, var_7))) ? (max(var_13, var_6)) : var_15))) ? (((var_13 ? var_15 : var_13))) : (((var_4 ^ var_5) ^ (((var_15 ? var_1 : var_12))))));

                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            {
                                var_28 = (((min(var_13, var_8)) << ((((((var_10 ? var_5 : var_0)) ^ (((var_5 ? var_13 : var_2))))) - 12660542163145254322))));
                                var_29 ^= (((((-23100 != 6879330552431928835) < 18446744073709551615)) ? (min(var_3, var_9)) : (((~(min(-3340164929532148857, -3161810860239375869)))))));
                                var_30 = (((((200 ? 128 : 1056964608))) / (var_11 | var_16)));
                            }
                        }
                    }
                    var_31 = (((var_14 + var_15) != var_7));
                    arr_58 [i_9] [i_9] [i_9] [i_9] = (((!var_13) >= ((~((var_3 ? var_8 : var_15))))));
                    arr_59 [i_9] = (!var_6);
                }
                for (int i_16 = 0; i_16 < 21;i_16 += 1)
                {
                    arr_63 [i_9] [i_9] [i_16] [i_9] = (((var_12 ? var_10 : var_16)));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 21;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 21;i_18 += 1)
                        {
                            {
                                var_32 &= (((((var_2 && var_11) ? (min(var_16, var_5)) : (var_11 || var_1))) - (((var_10 ? (var_8 < var_0) : (var_3 != var_1))))));
                                var_33 = (max(var_33, (((var_13 ^ ((var_7 >> (var_4 - 38850))))))));
                                arr_69 [i_9] [i_9] [i_16] [i_10] = (((var_14 | var_0) ? var_16 : -var_13));
                                var_34 = ((((min((~var_1), var_16))) && ((max((3968274739 == -62), var_4)))));
                                var_35 = (max(var_35, ((((var_3 && var_1) || 3)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 21;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 21;i_20 += 1)
                        {
                            {
                                arr_75 [i_9] [i_10] [i_16] [i_9] [i_10] [i_10] = (var_7 / var_10);
                                var_36 ^= ((((var_7 ^ (~var_10)))) != 7811560384254768339);
                                var_37 = ((max(var_2, var_14)));
                            }
                        }
                    }
                    arr_76 [i_16] [i_16] [i_9] [i_16] = (13 | 15771014797702073134);
                    arr_77 [i_9] [i_10] [i_9] [i_16] = (((((((max(var_7, var_14))) & var_3))) != ((((var_0 ? var_9 : var_1)) | (var_1 / var_2)))));
                }
                arr_78 [i_9] [i_9] = ((-3161810860239375880 ? 0 : 23099));
            }
        }
    }
    #pragma endscop
}
