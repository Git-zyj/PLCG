/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9551
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
    var_12 -= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | (((unsigned int) max((var_2), (((/* implicit */long long int) var_3)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_13 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) (signed char)126))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)2947))) : (3640275525U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (((unsigned long long int) (signed char)115))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_11 [i_0] [10] [i_2] = ((int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65530))))), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_2 [i_2] [10U]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 4; i_3 < 10; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_17 [i_0 - 1] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2] [i_3 + 2])) || (((/* implicit */_Bool) arr_7 [i_0] [9LL] [i_0] [i_3 - 2])))))) != (max((((/* implicit */unsigned long long int) arr_7 [(unsigned short)7] [10] [(unsigned short)7] [i_3 - 1])), (5072368248599915036ULL)))));
                                var_14 = ((/* implicit */unsigned short) var_3);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_22 [i_0] [i_0] [i_2] [i_5] = ((/* implicit */unsigned int) arr_7 [i_1] [i_2] [i_1] [i_0]);
                        arr_23 [i_2] = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) arr_1 [i_0 - 2])) ^ (0ULL)))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (signed char i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
                        {
                            arr_30 [i_0] = var_10;
                            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)5320)))))));
                            arr_31 [i_0] [(_Bool)1] [8] [i_1] [i_1] [i_6] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) arr_12 [i_0] [i_0 - 2] [i_0 - 2] [i_0 - 2]))))) ? (((3969489010U) * (arr_1 [i_0]))) : (min((arr_5 [i_0 - 1] [i_1]), (((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) (short)2955)))))))));
                        }
                        for (signed char i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned int) (+(2147483647)));
                            var_17 = ((/* implicit */signed char) var_9);
                        }
                        for (signed char i_9 = 0; i_9 < 12; i_9 += 2) /* same iter space */
                        {
                            var_18 |= ((/* implicit */unsigned short) var_5);
                            var_19 = (((-(((((/* implicit */long long int) ((/* implicit */int) (short)-27743))) + (-6568117118242616538LL))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775801LL)) ? (((/* implicit */unsigned int) -2147483638)) : (3833452400U)))));
                            var_20 = ((/* implicit */int) var_11);
                        }
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_28 [i_0] [1] [i_0] [1] [4U] [i_0 + 2]))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (long long int i_11 = 0; i_11 < 12; i_11 += 2) 
                        {
                            var_22 -= ((/* implicit */unsigned int) ((signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 70368744177663ULL)) ? (((/* implicit */int) (short)2947)) : (2147483644)))), (((463680135U) + (3640275525U))))));
                            arr_41 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [10LL] = ((/* implicit */int) var_1);
                            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) arr_25 [i_0 + 1]))));
                            arr_42 [i_0] [i_1] [i_2] [i_10] = ((unsigned int) (unsigned char)255);
                        }
                        /* vectorizable */
                        for (unsigned int i_12 = 0; i_12 < 12; i_12 += 3) 
                        {
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) arr_44 [i_0] [i_1] [i_2] [i_10] [i_1]))))))));
                            arr_47 [i_0] [i_0] [i_0] [i_0] [i_12] = ((/* implicit */int) (~((+(var_3)))));
                        }
                        var_25 = ((/* implicit */long long int) 7754187019123558425ULL);
                        /* LoopSeq 3 */
                        for (long long int i_13 = 0; i_13 < 12; i_13 += 3) 
                        {
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((min((((/* implicit */unsigned int) (signed char)104)), (3969489033U))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0]))))))));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967294U)) || (((/* implicit */_Bool) var_0))));
                            var_28 = ((/* implicit */signed char) (-(min((-2147483644), (((/* implicit */int) var_6))))));
                        }
                        for (long long int i_14 = 4; i_14 < 10; i_14 += 4) 
                        {
                            arr_54 [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 2350487018732619254LL)) != (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (14ULL)))));
                            var_29 -= ((/* implicit */int) arr_20 [i_0]);
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_30 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 1099034455755883409LL))) ? (((/* implicit */long long int) 596971674U)) : (((var_9) | (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                            var_31 = ((/* implicit */int) ((min((((unsigned long long int) var_8)), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)23))))))) * (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1] [i_2])) / (((/* implicit */int) arr_21 [i_10] [i_10] [i_1] [i_0]))))), (((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned long long int) var_9))))))));
                            arr_58 [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) 9789652884097443929ULL)) ? (-2350487018732619254LL) : (((/* implicit */long long int) 767594300U))));
                        }
                    }
                }
            } 
        } 
    }
    for (signed char i_16 = 1; i_16 < 11; i_16 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_17 = 0; i_17 < 12; i_17 += 3) 
        {
            arr_66 [i_16] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 6057344942793289358LL)) ? (arr_55 [4] [i_17] [i_17] [i_17] [i_17] [(unsigned short)4] [i_17]) : (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)65535))))) : (((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 498560439)) && (((/* implicit */_Bool) 18446744073709551601ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 3697995622U)) ? (7885399821043525822ULL) : (((/* implicit */unsigned long long int) 2479546831267106666LL)))))))))));
            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (-(((unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_16] [i_17] [i_17])) || (((/* implicit */_Bool) arr_2 [5LL] [5LL]))))))))));
            var_33 = ((/* implicit */int) ((var_9) / (min((var_2), (var_9)))));
            var_34 ^= ((/* implicit */unsigned long long int) var_3);
            /* LoopNest 2 */
            for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 3) 
            {
                for (int i_19 = 3; i_19 < 11; i_19 += 4) 
                {
                    {
                        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) arr_48 [i_19] [i_16] [(_Bool)1] [i_16] [i_16]))));
                        var_36 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)32765))));
                        /* LoopSeq 3 */
                        for (long long int i_20 = 0; i_20 < 12; i_20 += 4) 
                        {
                            arr_77 [i_16] [i_18] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (var_10) : (var_10)))))) ? (((((/* implicit */_Bool) arr_64 [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_55 [i_18] [i_18] [i_16 + 1] [9U] [i_19 - 3] [i_19] [i_19 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)77)), (((unsigned short) (unsigned char)63))))))));
                            arr_78 [i_16] [i_16] [i_18] [i_18] [i_19] [i_19] = ((/* implicit */short) var_5);
                            arr_79 [i_18] [i_17] = ((/* implicit */unsigned char) var_11);
                            arr_80 [i_16] [i_17] [i_17] [(signed char)6] [i_18] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)10686))))) ? (((/* implicit */unsigned long long int) ((long long int) var_4))) : (arr_70 [i_19 - 3] [i_19 - 1] [i_16 - 1] [i_16 - 1] [i_16])));
                        }
                        for (long long int i_21 = 2; i_21 < 10; i_21 += 3) 
                        {
                            var_37 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned int) arr_20 [i_16]))), (max((var_10), (((/* implicit */unsigned long long int) (signed char)-25))))));
                            arr_85 [1U] [i_17] [i_18] = (-(-421769854));
                            var_38 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((unsigned long long int) var_0)) != (((/* implicit */unsigned long long int) arr_50 [i_21] [i_19 - 2] [i_16] [i_16 + 1] [i_16] [i_16] [i_16]))))), (var_9)));
                        }
                        for (long long int i_22 = 1; i_22 < 10; i_22 += 4) 
                        {
                            arr_88 [i_18] [i_18] = 281474976710655LL;
                            var_39 ^= ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (var_10)))) ? (max((arr_14 [i_22] [i_19] [11U] [i_16] [i_16]), (((/* implicit */long long int) (unsigned short)65524)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_16] [i_17])) ? (var_4) : (-2147483620)))))));
                        }
                        var_40 += ((/* implicit */long long int) ((unsigned long long int) min((max((((/* implicit */long long int) var_3)), (-9099269740647175000LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_16 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]))))))));
                    }
                } 
            } 
        }
        for (int i_23 = 0; i_23 < 12; i_23 += 2) 
        {
            var_41 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2097144U))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_24 [i_16] [i_23] [i_16] [i_16] [i_16] [i_16])) : (var_5)))))) ? (((/* implicit */long long int) (+(((var_3) % (((/* implicit */unsigned int) var_0))))))) : (max((((/* implicit */long long int) arr_26 [i_16] [i_23] [i_16] [i_16])), (((long long int) 11993112354868707719ULL))))));
            var_42 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_0)), (var_5)));
            /* LoopNest 3 */
            for (long long int i_24 = 0; i_24 < 12; i_24 += 2) 
            {
                for (signed char i_25 = 1; i_25 < 11; i_25 += 2) 
                {
                    for (signed char i_26 = 0; i_26 < 12; i_26 += 3) 
                    {
                        {
                            arr_98 [i_23] [i_23] [i_23] [i_23] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (10561344252666025794ULL)))) ? (((/* implicit */int) arr_28 [i_16] [i_16 + 1] [i_23] [i_24] [i_23] [i_23])) : (((((/* implicit */_Bool) (short)-32766)) ? (var_0) : (((/* implicit */int) (_Bool)0))))))), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (11993112354868707718ULL))), (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */int) arr_92 [i_16] [i_16] [i_16])))))))));
                            var_43 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_46 [i_25 - 1] [i_16 - 1] [i_24] [(unsigned char)8] [i_24] [i_16] [i_16 - 1])), (((((/* implicit */_Bool) 95726439357617446LL)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (17318315882372485598ULL)))));
                            arr_99 [(unsigned short)6] [i_23] [i_23] [i_23] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_87 [i_16] [1LL] [i_24] [1LL] [4] [7LL]))));
                            var_44 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_86 [i_26] [i_25] [i_24] [i_23] [i_16 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32766))) : (max((((/* implicit */unsigned int) -2147483620)), (3637388724U))))) : (((/* implicit */unsigned int) ((int) arr_57 [i_16] [i_16] [i_24] [i_16] [i_26] [i_16])))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_27 = 3; i_27 < 11; i_27 += 3) 
            {
                for (_Bool i_28 = 1; i_28 < 1; i_28 += 1) 
                {
                    {
                        var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) (-(((((((/* implicit */_Bool) 18LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)30))) : (-4159030982529729285LL))) / (arr_14 [i_28 - 1] [i_28 - 1] [i_28] [i_28 - 1] [i_28]))))))));
                        var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) ((unsigned long long int) arr_18 [i_28 - 1] [i_27] [i_16] [(unsigned char)8] [i_16] [i_16])))));
                        var_47 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : ((~(arr_25 [i_27 + 1]))));
                    }
                } 
            } 
        }
        arr_105 [i_16] = ((/* implicit */signed char) ((long long int) var_4));
        /* LoopSeq 1 */
        for (int i_29 = 0; i_29 < 12; i_29 += 4) 
        {
            var_48 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_29] [i_29] [i_29] [i_29]))) : (857882349U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_29]))) : (((((/* implicit */_Bool) min((var_2), (arr_43 [i_16] [i_16 - 1] [i_16 - 1] [i_16] [i_29])))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_16] [i_16] [i_16] [i_16 + 1] [i_16]))) : (var_5))) : (((/* implicit */unsigned long long int) var_9))))));
            var_49 = ((/* implicit */unsigned int) 16022964228502650579ULL);
            var_50 = ((/* implicit */long long int) (signed char)-116);
        }
    }
    /* LoopSeq 1 */
    for (signed char i_30 = 0; i_30 < 17; i_30 += 3) 
    {
        arr_110 [(signed char)16] |= ((min((var_8), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (unsigned char)53))))))) <= (((/* implicit */unsigned int) var_0)));
        arr_111 [i_30] = (unsigned char)75;
        arr_112 [i_30] [9LL] = ((/* implicit */long long int) var_8);
    }
    var_51 = ((/* implicit */int) 15708281929911047765ULL);
}
