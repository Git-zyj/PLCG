/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76643
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_13 = ((/* implicit */signed char) var_3);
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned char) ((var_1) <= (var_1))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        arr_9 [i_2] [3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) (unsigned char)0))));
                        var_15 = ((long long int) ((unsigned long long int) var_9));
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_7) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */int) (unsigned short)65535)) : (0)));
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_6 = 4; i_6 < 22; i_6 += 4) 
                {
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((unsigned int) (~(((/* implicit */int) var_9))))))));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0])) - (((/* implicit */int) (unsigned char)255))))) / (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) -1)) : (var_7)))));
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_4 - 1] [i_5])) : (((/* implicit */int) arr_10 [i_0] [21LL] [i_5])))))));
                }
                arr_18 [i_0] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_4]))) : (var_4)));
                arr_19 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_4] [i_0] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (arr_8 [i_4] [i_4] [1U] [i_4])))) ? (var_6) : (((/* implicit */long long int) ((int) (unsigned char)20)))));
                /* LoopSeq 1 */
                for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 3; i_8 < 22; i_8 += 2) 
                    {
                        var_20 = ((/* implicit */long long int) var_1);
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) % (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [3U] [i_0] [i_8])) ? (var_6) : (((/* implicit */long long int) 4294967289U))))));
                        var_22 = ((/* implicit */unsigned char) (((+(var_4))) * (((/* implicit */long long int) ((/* implicit */int) ((var_6) == (var_4)))))));
                        var_23 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_8 + 2] [i_7])) || (((/* implicit */_Bool) (unsigned char)1)))) ? (((-1) / (((/* implicit */int) (unsigned char)15)))) : (((/* implicit */int) ((unsigned short) arr_15 [i_0] [i_4] [22ULL] [i_7] [i_7])))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        arr_29 [i_4] [i_4] = ((/* implicit */signed char) var_0);
                        var_24 &= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)0))))) ? (arr_25 [i_0] [i_7] [i_5] [i_7] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-126))))))));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_28 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_7])) > (((/* implicit */int) arr_28 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_4]))));
                    }
                    arr_30 [i_0] [(unsigned short)16] [i_5] [i_7] [i_7] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_4 - 1] [i_4 - 1])) && (((/* implicit */_Bool) arr_7 [i_4 - 1] [i_4 - 1]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        arr_33 [i_4] [i_4] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 18446744073709551615ULL)))) & ((~(12U)))));
                        var_26 = ((/* implicit */unsigned int) ((unsigned long long int) (short)0));
                    }
                    /* LoopSeq 4 */
                    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
                        arr_37 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_7])) | (((/* implicit */int) arr_36 [i_0] [i_4] [i_4] [i_7] [i_7]))))) >= (((((/* implicit */_Bool) arr_2 [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))) : (var_1)))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        arr_41 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0])) >> (((var_6) + (6679460688030140942LL)))))) % (4294967295U)));
                        var_28 = ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (signed char)(-127 - 1)))))));
                        arr_42 [i_4] [i_4] [i_4] [i_4] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((arr_35 [i_4] [i_4] [i_4] [i_12]) % (((/* implicit */int) arr_1 [i_0] [i_12])))));
                        var_29 += ((/* implicit */unsigned char) (-(((/* implicit */int) arr_36 [i_0] [i_0] [i_5] [i_0] [i_0]))));
                        var_30 += ((/* implicit */unsigned char) ((((var_4) < (var_6))) ? (((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */int) var_5)))) : ((+(((/* implicit */int) arr_15 [i_0] [i_4 - 1] [i_5] [i_7] [i_12]))))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 24; i_13 += 4) 
                    {
                        var_31 = ((/* implicit */short) (+(((/* implicit */int) var_11))));
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((signed char) var_10))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) arr_3 [i_13]))))));
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_7] [i_13] [7ULL])) < (((0) << (((((/* implicit */int) var_5)) + (2828)))))));
                        var_34 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) (signed char)(-127 - 1)))))));
                        var_35 |= ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
                    }
                    for (short i_14 = 0; i_14 < 24; i_14 += 3) 
                    {
                        var_36 = ((/* implicit */unsigned short) (unsigned char)255);
                        var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_2 [i_0]))))) : (((((/* implicit */_Bool) 4294967273U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
                    }
                }
                var_38 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))) == (((/* implicit */int) var_3))));
            }
        }
        for (short i_15 = 2; i_15 < 23; i_15 += 1) 
        {
            var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) ((((/* implicit */_Bool) arr_49 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_0] [i_0]))) : (arr_25 [i_15 - 2] [i_0] [i_15] [i_15 - 2] [i_15 + 1]))))));
            var_40 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) var_8))) <= (var_7))) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) arr_12 [i_0] [i_15] [i_0] [i_15]))));
            /* LoopNest 3 */
            for (unsigned char i_16 = 0; i_16 < 24; i_16 += 3) 
            {
                for (signed char i_17 = 0; i_17 < 24; i_17 += 4) 
                {
                    for (unsigned short i_18 = 0; i_18 < 24; i_18 += 3) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 4503599627370495ULL)) ? (((/* implicit */long long int) 4294967295U)) : (var_7))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_0] [(short)15] [i_0] [i_17] [i_18]))))));
                            var_42 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (unsigned char)255))) ? (((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (unsigned char)254)))) : (((/* implicit */int) arr_44 [(unsigned char)7] [i_15 - 1] [(unsigned char)7] [i_15 - 1] [i_15 - 2] [i_15]))));
                        }
                    } 
                } 
            } 
        }
        for (short i_19 = 2; i_19 < 20; i_19 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_20 = 0; i_20 < 24; i_20 += 1) 
            {
                var_43 -= ((/* implicit */int) ((long long int) var_9));
                /* LoopNest 2 */
                for (short i_21 = 0; i_21 < 24; i_21 += 1) 
                {
                    for (unsigned char i_22 = 2; i_22 < 22; i_22 += 2) 
                    {
                        {
                            var_44 = ((/* implicit */long long int) (-(((/* implicit */int) arr_39 [i_19] [i_19] [i_19 + 3] [i_19] [i_19]))));
                            arr_72 [i_0] [i_19] [i_19] [i_19] [i_22] = ((/* implicit */unsigned char) ((int) 4294967295U));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_23 = 0; i_23 < 24; i_23 += 4) 
                {
                    for (signed char i_24 = 4; i_24 < 22; i_24 += 1) 
                    {
                        {
                            arr_79 [i_20] [(signed char)14] [i_19] [i_19] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 0LL)))))) % (4294967295U)));
                            var_45 = ((/* implicit */long long int) arr_0 [i_0]);
                        }
                    } 
                } 
                arr_80 [i_0] [i_19] [i_19] = ((/* implicit */unsigned char) 4294967295U);
            }
            for (short i_25 = 0; i_25 < 24; i_25 += 3) 
            {
                var_46 *= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0])) <= (((/* implicit */int) (unsigned char)253))))) >> (0)));
                /* LoopSeq 1 */
                for (short i_26 = 0; i_26 < 24; i_26 += 4) 
                {
                    var_47 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)3)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64512)))));
                    var_48 = ((/* implicit */short) arr_84 [i_0] [i_0] [i_25] [i_25]);
                    /* LoopSeq 2 */
                    for (unsigned char i_27 = 0; i_27 < 24; i_27 += 4) 
                    {
                        var_49 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)0)) > (((/* implicit */int) arr_36 [i_0] [i_0] [4ULL] [i_0] [i_0]))));
                        var_50 *= ((/* implicit */unsigned int) var_9);
                        var_51 = ((/* implicit */unsigned char) max((var_51), (((/* implicit */unsigned char) (+((+(var_1))))))));
                        arr_88 [i_19] = ((arr_16 [i_0] [i_19]) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0] [i_19] [i_25] [i_26] [i_27] [(signed char)8])) || (((/* implicit */_Bool) (short)(-32767 - 1))))))));
                    }
                    for (unsigned char i_28 = 0; i_28 < 24; i_28 += 3) 
                    {
                        var_52 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_25] [i_25] [i_25] [i_25] [i_19 - 2] [i_0])) ? (((/* implicit */unsigned long long int) var_1)) : (arr_23 [i_0] [i_19] [i_0] [i_26] [i_19 - 2] [i_28])));
                        var_53 = ((/* implicit */long long int) ((((/* implicit */int) var_11)) & (((/* implicit */int) (short)32739))));
                        var_54 = ((/* implicit */signed char) (-(((/* implicit */int) arr_91 [i_19] [i_19 + 3] [i_19] [i_19 + 3] [i_19 + 4] [i_19 + 3]))));
                        var_55 = ((/* implicit */short) max((var_55), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_73 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_67 [i_0] [i_26] [i_26] [i_19 - 1] [i_28])))) ? (((4503599627370495LL) | (((/* implicit */long long int) var_1)))) : (((((arr_31 [i_0] [i_0] [i_19] [i_25] [i_0] [i_25] [i_25]) + (9223372036854775807LL))) << (((var_1) - (3581941487U))))))))));
                    }
                }
            }
            var_56 = ((/* implicit */unsigned char) max((var_56), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_28 [i_19] [(unsigned short)3] [i_19] [(unsigned short)3] [21LL] [i_0] [i_0])) != (((/* implicit */int) (signed char)127)))) ? (arr_32 [i_0] [i_19] [i_19 - 2] [i_0]) : (((((/* implicit */_Bool) arr_77 [i_0] [i_19])) ? (arr_31 [i_19] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) 4294967287U)))))))));
        }
        for (unsigned int i_29 = 1; i_29 < 23; i_29 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_30 = 0; i_30 < 24; i_30 += 2) 
            {
                for (signed char i_31 = 0; i_31 < 24; i_31 += 4) 
                {
                    {
                        var_57 = ((/* implicit */unsigned char) (~((-(var_6)))));
                        var_58 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (signed char)127)) ? (var_10) : (((/* implicit */unsigned long long int) 0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_32 = 0; i_32 < 24; i_32 += 3) 
            {
                var_59 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_36 [i_0] [i_0] [i_29] [i_32] [i_32])) : (((/* implicit */int) (unsigned char)255))))));
                var_60 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_62 [i_29 + 1] [i_29])) ? (((((/* implicit */int) var_5)) * (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) arr_3 [i_32])) ? (((/* implicit */int) arr_91 [(unsigned char)13] [i_0] [(unsigned char)13] [(unsigned char)9] [(unsigned char)9] [i_32])) : (((/* implicit */int) var_9))))));
                /* LoopNest 2 */
                for (unsigned char i_33 = 0; i_33 < 24; i_33 += 4) 
                {
                    for (unsigned int i_34 = 0; i_34 < 24; i_34 += 4) 
                    {
                        {
                            var_61 = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_0] [22] [i_29 - 1])) & (((/* implicit */int) arr_10 [(unsigned char)21] [i_29] [i_29 + 1]))));
                            var_62 *= ((arr_93 [i_0] [i_29] [i_29 + 1]) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))));
                            var_63 = ((/* implicit */_Bool) ((((/* implicit */int) var_12)) << (((((/* implicit */int) var_11)) - (67)))));
                            var_64 = ((/* implicit */unsigned char) max((var_64), (((/* implicit */unsigned char) (-((~(((/* implicit */int) var_12)))))))));
                        }
                    } 
                } 
                arr_107 [i_29] [i_29] = ((/* implicit */short) ((var_7) + (((/* implicit */long long int) ((/* implicit */int) arr_90 [i_29 - 1] [i_29 - 1] [i_29 - 1] [i_32] [5U] [(unsigned char)4])))));
            }
        }
        var_65 = (((_Bool)1) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) arr_95 [(short)20] [i_0] [i_0])));
    }
}
