/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71130
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_11 *= ((/* implicit */unsigned long long int) (~(max((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))));
        var_12 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [0ULL])) ? (var_5) : (((((var_4) ^ (((/* implicit */int) var_8)))) + (((/* implicit */int) ((10278131691678208066ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                /* LoopSeq 4 */
                for (unsigned char i_3 = 2; i_3 < 11; i_3 += 2) 
                {
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) var_4))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_2 [i_0]) ^ (((/* implicit */unsigned long long int) arr_10 [(unsigned short)0] [11] [8U]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [1ULL])) : (((/* implicit */int) var_7))))) : (((unsigned int) arr_9 [i_3] [(_Bool)1] [i_1]))));
                    arr_11 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_3 - 1] [i_1 + 2]))));
                }
                for (short i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
                {
                    var_15 -= ((/* implicit */unsigned short) ((unsigned int) arr_4 [1U] [(_Bool)1] [i_1 + 2]));
                    var_16 -= ((/* implicit */unsigned short) (unsigned char)197);
                }
                for (short i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (short i_6 = 3; i_6 < 10; i_6 += 4) 
                    {
                        var_17 += ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */int) (short)32751)) : (arr_10 [i_0] [i_1] [i_5]))));
                        var_18 = (+(var_5));
                        var_19 = ((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_1 + 2] [i_1 - 1] [7U]))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) 219924944318037273ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))))));
                        var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2965052438U)) ? (var_5) : (((/* implicit */int) var_1))))) : (((10278131691678208053ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-85))))));
                        arr_22 [i_2] [i_7] [i_7] [i_2] [11] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((unsigned long long int) 0U)) : (var_0)));
                    }
                    var_22 = (_Bool)1;
                }
                for (unsigned short i_8 = 2; i_8 < 11; i_8 += 2) 
                {
                    var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
                    var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_5) + (((/* implicit */int) arr_23 [i_2] [i_2] [i_2] [i_2]))))) ? (((unsigned int) var_4)) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                    /* LoopSeq 3 */
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) arr_20 [i_8] [(unsigned short)4] [i_2] [(_Bool)1] [i_2])) != (((/* implicit */int) var_7)))));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_1))));
                        var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_1 + 2] [i_8] [i_9]))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 12; i_10 += 2) /* same iter space */
                    {
                        arr_30 [i_2] [i_1] = ((/* implicit */unsigned short) (!(arr_4 [i_1 + 1] [i_2] [i_8 + 1])));
                        var_28 &= ((/* implicit */int) ((arr_18 [i_1 + 1] [i_8 - 1] [0ULL] [i_10] [i_10]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                        var_29 = ((/* implicit */unsigned int) ((unsigned short) (-(arr_6 [2] [(_Bool)1] [i_8]))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 12; i_11 += 2) /* same iter space */
                    {
                        arr_33 [5] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */int) (unsigned short)12))));
                        arr_34 [i_11] [7ULL] [i_2] &= ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (arr_29 [i_0] [i_0] [i_0] [i_1 + 1] [i_8 + 1]));
                        var_30 = ((/* implicit */_Bool) (((-(((/* implicit */int) var_8)))) / (((/* implicit */int) arr_25 [i_8 - 1] [i_8 - 1] [i_8 - 2] [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1 + 2]))));
                    }
                    arr_35 [i_0] [i_0] [i_2] [(_Bool)1] [(_Bool)1] [11ULL] = (_Bool)1;
                }
                var_31 = ((/* implicit */int) ((short) arr_4 [i_1 + 2] [i_1 + 1] [i_0]));
                arr_36 [i_0] [8ULL] = ((/* implicit */unsigned short) var_6);
            }
            for (unsigned int i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (signed char i_14 = 0; i_14 < 12; i_14 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1 + 2] [i_1])) ? (((/* implicit */long long int) 229416563U)) : (arr_12 [i_1 + 2] [i_1 + 2] [i_0]))))));
                            arr_48 [(unsigned char)0] [i_13] [(unsigned short)10] [i_1] [i_1] = ((/* implicit */unsigned int) var_0);
                        }
                    } 
                } 
                arr_49 [i_0] [i_0] [(_Bool)1] [i_0] = ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_9)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1 - 1] [i_1 - 1]))));
                /* LoopSeq 1 */
                for (signed char i_15 = 4; i_15 < 8; i_15 += 4) 
                {
                    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (arr_29 [i_1 - 1] [(short)5] [i_15 + 4] [i_15] [i_15 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_15] [i_15] [i_15 + 2] [i_15])))));
                    var_34 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (var_5)))) ? (((/* implicit */long long int) ((arr_16 [9ULL] [(signed char)11] [(signed char)11] [i_15] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3934676390U)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_4)) : (72057592964186112LL)))));
                    var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_15 - 2] [i_15 + 2] [i_1 + 2] [10LL] [i_1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_31 [i_15 + 1] [i_15 - 2] [i_1 + 2] [i_1] [i_1 + 1] [i_1 + 1])));
                    arr_53 [i_0] = ((/* implicit */unsigned long long int) var_8);
                }
            }
            for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
            {
                var_36 -= ((/* implicit */unsigned short) (~(((/* implicit */int) var_6))));
                arr_56 [i_16] [i_16] [i_1] [i_16] = ((/* implicit */long long int) (+(((/* implicit */int) var_9))));
                var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_16] [0LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2163750165U)))) ? (((/* implicit */int) arr_45 [i_16] [i_16] [i_16 + 1] [i_16] [i_1 - 1])) : (((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_8)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 4) 
                {
                    for (int i_18 = 0; i_18 < 12; i_18 += 4) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) var_1))));
                            var_39 |= ((/* implicit */int) (-(var_0)));
                        }
                    } 
                } 
            }
            var_40 = (!(((/* implicit */_Bool) ((((/* implicit */int) (short)17502)) / (((/* implicit */int) var_7))))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_19 = 0; i_19 < 12; i_19 += 3) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
            {
                var_41 = arr_58 [i_0] [i_0] [i_19] [(unsigned char)10];
                var_42 -= ((/* implicit */int) (_Bool)1);
                var_43 = ((/* implicit */unsigned int) var_10);
                var_44 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-114)) ^ (((/* implicit */int) arr_19 [0U] [i_19] [0U] [i_19] [i_19] [i_19]))))) ? (((/* implicit */int) var_9)) : ((~(((/* implicit */int) (signed char)-73))))));
                arr_65 [i_0] [i_0] [i_20] [i_20] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_6))));
            }
            /* vectorizable */
            for (signed char i_21 = 2; i_21 < 8; i_21 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_22 = 0; i_22 < 12; i_22 += 2) 
                {
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        {
                            var_45 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_39 [i_21] [i_21 + 2]))));
                            var_46 = ((/* implicit */short) ((((6354583836019496059ULL) >> (((((/* implicit */int) var_1)) - (37550))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21 + 2] [i_21])))));
                            var_47 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_60 [i_0] [i_21] [i_21] [i_21] [i_21 + 4]))));
                            arr_73 [1U] [1U] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)255))));
                        }
                    } 
                } 
                var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) > (arr_12 [i_0] [i_19] [6ULL])))) >> ((((~(((/* implicit */int) var_6)))) + (1985)))));
                /* LoopSeq 3 */
                for (short i_24 = 1; i_24 < 8; i_24 += 4) 
                {
                    var_49 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_63 [i_0] [0ULL] [i_0]) : (((/* implicit */unsigned long long int) arr_41 [i_0] [i_21] [i_21] [i_24]))))) ? (1732211035286585776ULL) : (var_2)));
                    /* LoopSeq 4 */
                    for (unsigned short i_25 = 0; i_25 < 12; i_25 += 1) 
                    {
                        var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)16352)) : (((/* implicit */int) ((var_5) >= (((/* implicit */int) var_1))))))))));
                        var_51 *= ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (var_0)))) : (((/* implicit */int) var_6)));
                        var_52 = ((/* implicit */long long int) var_9);
                    }
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        var_53 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)608))) : (arr_29 [i_0] [3U] [i_21] [i_24] [i_0])));
                        var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775805LL)) ? (arr_5 [i_0] [i_19] [9ULL]) : (((/* implicit */unsigned int) 432008739))));
                    }
                    for (signed char i_27 = 2; i_27 < 9; i_27 += 2) 
                    {
                        arr_84 [i_19] [i_27] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_82 [(_Bool)0] [(_Bool)1] [i_21 + 4] [i_27] [i_21 + 4] [4]))));
                        var_55 = ((/* implicit */_Bool) min((var_55), (((/* implicit */_Bool) arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        var_56 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) % (((/* implicit */int) arr_60 [(unsigned char)1] [9ULL] [3] [i_24] [(_Bool)0])))) << (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) var_3)))) - (20)))));
                        var_57 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)50981))));
                    }
                    for (int i_28 = 3; i_28 < 9; i_28 += 3) 
                    {
                        var_58 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) ((((/* implicit */int) arr_32 [3ULL] [4] [i_0] [i_19] [i_0])) != (((/* implicit */int) var_3))))) : (arr_85 [i_19] [i_21 + 3] [i_24 + 2] [i_24 + 1] [i_28 - 3])));
                        var_59 &= ((/* implicit */short) (_Bool)1);
                    }
                }
                for (signed char i_29 = 1; i_29 < 11; i_29 += 1) 
                {
                    var_60 ^= ((/* implicit */int) ((((((/* implicit */int) arr_52 [(unsigned char)4] [i_19] [(unsigned char)4] [4U])) ^ (-1))) > (((/* implicit */int) var_1))));
                    arr_90 [i_29] [i_21] [10U] [i_29] = ((/* implicit */short) ((((/* implicit */int) arr_46 [i_29] [i_29 - 1] [i_29] [i_21 - 2])) & (((/* implicit */int) var_1))));
                    arr_91 [i_29] [11] [(short)9] [i_29] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */int) var_1)))) == (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_16 [i_0] [i_19] [i_21] [(unsigned short)1] [(short)10])))))));
                }
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                {
                    arr_95 [i_0] [6LL] [6LL] [i_30] = ((/* implicit */unsigned long long int) arr_78 [i_0] [i_0] [i_21 - 2] [i_30]);
                    var_61 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_54 [i_21])) ? (((((/* implicit */_Bool) arr_46 [i_0] [i_19] [i_19] [11U])) ? (229416585U) : (((/* implicit */unsigned int) arr_21 [i_21])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_83 [i_0] [i_0] [i_21] [(_Bool)1]) == (var_0)))))));
                    var_62 = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_2) >= (((/* implicit */unsigned long long int) var_4))))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                    var_63 += (+(((((/* implicit */_Bool) 15332222147086310029ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_0))));
                    var_64 = ((/* implicit */int) ((unsigned int) var_9));
                }
            }
            for (unsigned short i_31 = 0; i_31 < 12; i_31 += 2) 
            {
                var_65 = ((/* implicit */_Bool) var_1);
                var_66 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((((/* implicit */int) max(((short)32294), (var_10)))) >= (min((((/* implicit */int) var_9)), (arr_68 [i_0] [i_19] [i_31] [(_Bool)1])))))), (min((arr_46 [i_31] [(signed char)10] [i_19] [i_0]), (var_8)))));
                /* LoopSeq 2 */
                for (unsigned short i_32 = 3; i_32 < 10; i_32 += 2) 
                {
                    var_67 += ((/* implicit */signed char) min((var_8), (((/* implicit */unsigned short) ((_Bool) arr_27 [10ULL] [i_32 - 3] [i_32 + 2] [i_32] [i_32 - 2] [(short)0])))));
                    var_68 = ((/* implicit */_Bool) max((var_68), (((/* implicit */_Bool) arr_70 [i_0] [i_19] [11U] [i_32] [(unsigned short)10]))));
                    var_69 = ((/* implicit */_Bool) arr_59 [i_32] [i_32] [(unsigned short)1] [i_32] [(unsigned short)1]);
                }
                for (long long int i_33 = 0; i_33 < 12; i_33 += 2) 
                {
                    var_70 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))), (((unsigned long long int) ((((/* implicit */int) (signed char)12)) / (((/* implicit */int) arr_47 [i_0] [i_19] [(_Bool)1] [5] [5] [3U] [i_0])))))));
                    var_71 = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) (_Bool)1)), (arr_3 [i_33] [i_19] [i_19]))), (((((/* implicit */_Bool) arr_52 [(unsigned char)2] [i_31] [6U] [3])) ? (arr_3 [i_33] [(_Bool)1] [i_0]) : (arr_3 [0U] [i_19] [i_0])))));
                    var_72 &= ((/* implicit */signed char) ((2491998031U) >> (((((/* implicit */int) var_7)) - (50316)))));
                    var_73 = ((/* implicit */_Bool) (+(((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))) & (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_101 [i_0] [i_0] [i_0]))))))));
                }
            }
            var_74 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((unsigned int) var_3))))) + (max((((((/* implicit */_Bool) arr_94 [i_0] [i_19] [i_0] [(unsigned short)4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (1193917013005147509ULL))), (min((5355175226732279187ULL), (((/* implicit */unsigned long long int) var_4))))))));
        }
        var_75 = ((/* implicit */long long int) max((-832947422), ((+(((/* implicit */int) (signed char)10))))));
    }
    for (unsigned char i_34 = 0; i_34 < 21; i_34 += 2) 
    {
        arr_107 [i_34] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_105 [i_34] [i_34])) ? ((~(((/* implicit */int) arr_105 [i_34] [(unsigned short)5])))) : (((((/* implicit */int) var_7)) & (((/* implicit */int) var_8)))))) | (max((var_5), (max((var_5), (1728859492)))))));
        var_76 *= ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((1126757546), (((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_106 [(unsigned short)3] [i_34])) : (1332226776)))), (2491998031U)));
    }
    var_77 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-32763)) : (var_5)))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_8)))))))) ? (var_4) : (((/* implicit */int) (!(((/* implicit */_Bool) ((var_2) / (((/* implicit */unsigned long long int) var_4))))))))));
    var_78 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65524)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (var_9)))) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (12249266488454698575ULL)))))));
    var_79 = ((/* implicit */_Bool) var_0);
}
