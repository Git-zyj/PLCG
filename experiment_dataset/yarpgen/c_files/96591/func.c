/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96591
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) (unsigned char)62);
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((var_3) % (6798295084223756945LL)));
        var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((arr_0 [i_0]) & (((/* implicit */int) (unsigned char)95))))))) ? ((((~(7605008413206152337LL))) & (((/* implicit */long long int) max((((/* implicit */int) var_8)), (arr_0 [i_0])))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_0 [i_0])) ^ (min((913254409U), (242315379U))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_2 - 2] [i_1] = ((/* implicit */long long int) arr_11 [i_0]);
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (short)-12698))));
                        var_21 = ((/* implicit */unsigned long long int) arr_12 [i_1] [i_1] [i_2 + 2] [i_3] [i_1]);
                        arr_14 [i_3] [i_1] [(short)0] [i_1] [i_0] = (unsigned char)161;
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        arr_17 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_14)) % (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4] [8ULL]))) : (12603234852644733176ULL)));
        /* LoopSeq 1 */
        for (unsigned short i_5 = 1; i_5 < 9; i_5 += 3) 
        {
            arr_22 [i_5 - 1] [i_4] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_21 [i_5 + 1] [i_5] [i_5])) ? (9611055289182542708ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
            var_22 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)157)))) + (((/* implicit */int) ((short) var_6)))));
            /* LoopSeq 3 */
            for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 2; i_7 < 10; i_7 += 3) 
                {
                    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) arr_28 [i_8] [i_7] [i_6] [i_5 + 2] [i_4]);
                            arr_33 [i_4] [i_4] [i_6] [i_7] [i_8] = ((/* implicit */_Bool) ((unsigned int) (unsigned char)83));
                        }
                    } 
                } 
                arr_34 [(unsigned short)4] = ((/* implicit */int) arr_21 [i_4] [i_5] [i_6]);
                arr_35 [i_6] [i_5] [i_4] = ((/* implicit */_Bool) var_15);
            }
            for (short i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) 4ULL)) ? (((/* implicit */int) arr_15 [i_4] [2LL])) : (((/* implicit */int) var_0)))))))));
                /* LoopSeq 3 */
                for (unsigned char i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    arr_42 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) arr_28 [i_4] [7LL] [i_9] [7LL] [(short)1]);
                    arr_43 [i_10] [i_10] [i_9] [i_5] [(unsigned char)2] [i_4] = ((/* implicit */unsigned long long int) var_14);
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5571541015540282939ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (12987921577228085900ULL)));
                    /* LoopSeq 4 */
                    for (unsigned char i_11 = 0; i_11 < 11; i_11 += 3) /* same iter space */
                    {
                        arr_47 [2ULL] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */long long int) var_15);
                        arr_48 [i_4] [i_5 - 1] [i_9] [i_10] [(unsigned char)8] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 6259648700477779697ULL)))))) >= (var_6)));
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) var_4)) : ((+(5571541015540282939ULL))))))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 11; i_12 += 3) /* same iter space */
                    {
                        var_27 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_5] [i_5 + 1] [i_5 + 1] [i_5 - 1]))));
                        var_28 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)30100)) ? (((/* implicit */int) (unsigned short)7363)) : (((/* implicit */int) (short)-5530)))) * (((/* implicit */int) ((unsigned short) var_3)))));
                    }
                    for (unsigned long long int i_13 = 1; i_13 < 9; i_13 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned int) ((1058687746206992964ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31)))));
                        arr_55 [i_4] [i_13 - 1] = ((/* implicit */_Bool) ((unsigned int) (unsigned char)105));
                        arr_56 [i_13 + 2] [i_13 + 1] [i_10] [i_9] [1] [1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)10891)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_17)))) & ((+(arr_23 [i_4] [i_4] [i_4] [i_4])))));
                        var_30 |= ((/* implicit */long long int) 4393460315136953242ULL);
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_59 [i_14] [i_5] [i_5] [i_5] [i_4] &= ((/* implicit */unsigned char) arr_6 [(short)0] [i_5 - 1] [i_5 + 2]);
                        arr_60 [i_4] [i_4] [i_9] [i_10] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_31 [i_4] [i_4] [i_4] [(_Bool)1] [i_4])) * (((/* implicit */int) var_5))))) >= (((((/* implicit */_Bool) 3499048863U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_1)))));
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 275622309)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)27))) : (4294967284U)));
                    }
                }
                for (long long int i_15 = 0; i_15 < 11; i_15 += 3) 
                {
                    var_32 = (unsigned char)117;
                    /* LoopSeq 2 */
                    for (long long int i_16 = 0; i_16 < 11; i_16 += 3) 
                    {
                        arr_65 [(unsigned char)0] [i_5] [i_5 + 1] [i_15] [i_16] |= ((/* implicit */long long int) ((((/* implicit */int) arr_58 [i_16] [i_16] [i_16] [i_15] [i_5 + 1] [i_5 + 1])) >= (arr_0 [i_5 + 1])));
                        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (unsigned char)154))));
                    }
                    for (unsigned long long int i_17 = 1; i_17 < 10; i_17 += 3) 
                    {
                        var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_45 [i_17] [i_17 + 1] [i_5 + 2] [i_4])))))));
                        var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) (((~(1915666722U))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)31))))))))));
                    }
                    arr_68 [i_15] [10U] [i_9] [i_5 - 1] [i_4] |= ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)86)) > (((/* implicit */int) (_Bool)1)))) ? (3222828414U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3)))));
                }
                for (short i_18 = 0; i_18 < 11; i_18 += 3) 
                {
                    var_36 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) var_6)) < (var_3)))) >> (((/* implicit */int) (_Bool)1))));
                    arr_72 [i_5] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) >= ((+(var_17)))));
                    var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 13ULL)) ? (((/* implicit */int) (short)-2615)) : (((((/* implicit */_Bool) arr_5 [i_4] [i_9])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)3112)))))))));
                }
                arr_73 [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)13412))));
                var_38 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)65535)))) + (((unsigned long long int) var_9))));
            }
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                arr_77 [i_19] [i_19] [i_19] = ((/* implicit */_Bool) 10302989052875927369ULL);
                /* LoopNest 2 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 11; i_21 += 3) 
                    {
                        {
                            arr_83 [i_19] [i_19] [i_19] [(_Bool)1] = ((/* implicit */int) var_17);
                            arr_84 [i_4] [i_5] [i_5] [i_19] [i_21] = arr_53 [i_5 + 1] [i_5] [i_5 + 1] [i_19] [i_21] [(_Bool)1] [i_21];
                            arr_85 [i_4] [i_5] [i_19] [i_21] [i_21] = ((/* implicit */_Bool) (((+(arr_24 [i_4]))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_82 [i_5] [(short)4] [i_5] [i_19]))))))));
                            var_39 = ((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned char)173))))));
                        }
                    } 
                } 
                var_40 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [(unsigned char)0] [i_5 - 1] [i_19])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_6 [6ULL] [i_5 - 1] [i_5 - 1])));
                /* LoopNest 2 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    for (unsigned char i_23 = 0; i_23 < 11; i_23 += 3) 
                    {
                        {
                            arr_94 [i_22] [i_19] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
                            var_41 = ((/* implicit */unsigned int) max((var_41), ((~(((((/* implicit */_Bool) (unsigned char)91)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (836447901U)))))));
                            var_42 = ((/* implicit */short) (((_Bool)1) ? (((((/* implicit */_Bool) arr_91 [i_19] [i_5] [i_19] [i_19])) ? (var_15) : (10302989052875927369ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11306)))));
                        }
                    } 
                } 
                arr_95 [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_15 [i_4] [i_4])) : (((/* implicit */int) arr_54 [0LL] [i_5 + 2] [(short)10] [i_5] [(_Bool)1] [i_5] [i_5]))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))));
            }
            arr_96 [i_4] [(_Bool)1] [i_4] = ((/* implicit */unsigned short) var_17);
        }
        /* LoopSeq 3 */
        for (unsigned int i_24 = 0; i_24 < 11; i_24 += 3) /* same iter space */
        {
            arr_100 [i_24] [i_24] = ((/* implicit */unsigned short) ((unsigned char) var_14));
            arr_101 [i_24] = ((/* implicit */unsigned char) ((unsigned long long int) var_3));
        }
        for (unsigned int i_25 = 0; i_25 < 11; i_25 += 3) /* same iter space */
        {
            var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) ((arr_86 [6] [i_25] [i_25] [i_25]) < (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)95)) & (((/* implicit */int) var_18))))))))));
            var_44 ^= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_91 [(unsigned short)0] [i_25] [i_25] [(unsigned short)0])))))));
            var_45 ^= ((/* implicit */unsigned char) 3458519394U);
            var_46 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)225))))) ? (((/* implicit */int) var_7)) : (((arr_90 [i_4] [6LL] [(unsigned short)2] [i_25] [i_25]) ? (((/* implicit */int) arr_46 [i_4] [i_25] [i_25] [i_25] [i_25] [i_4] [i_4])) : (((/* implicit */int) (_Bool)0))))));
        }
        for (unsigned int i_26 = 0; i_26 < 11; i_26 += 3) /* same iter space */
        {
            var_47 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_78 [i_4] [i_4] [i_26] [(_Bool)1])) ? (((/* implicit */int) (short)448)) : (var_4)))) ? (((/* implicit */int) ((8360107224125035401ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2053276331250902038ULL)))))));
            var_48 *= ((/* implicit */short) var_15);
        }
        /* LoopNest 3 */
        for (short i_27 = 0; i_27 < 11; i_27 += 3) 
        {
            for (unsigned long long int i_28 = 2; i_28 < 10; i_28 += 3) 
            {
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                {
                    {
                        arr_116 [i_28] = (((!(((/* implicit */_Bool) (unsigned short)0)))) || (((/* implicit */_Bool) ((10302989052875927369ULL) << (((((/* implicit */int) (unsigned short)52477)) - (52454)))))));
                        arr_117 [i_28] [i_28] [i_28] [i_28] [i_28] [i_28] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_71 [i_28 - 1] [i_28 - 1] [i_28] [i_28 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4] [i_4]))) : (-8850435372125862818LL))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_30 = 2; i_30 < 9; i_30 += 3) 
                        {
                            var_49 ^= (+(arr_71 [i_4] [i_4] [i_4] [i_4]));
                            var_50 = ((/* implicit */int) ((unsigned long long int) arr_110 [i_28 - 1] [i_28] [i_29]));
                            var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_29 [i_30 - 2] [i_30 + 2] [i_29] [i_28] [i_28 + 1] [i_28 - 1])) : (((/* implicit */int) arr_29 [i_30 - 2] [i_30 + 1] [6ULL] [i_30] [i_28 - 2] [i_28 - 2]))));
                            var_52 -= ((/* implicit */unsigned int) 16929739010815763940ULL);
                        }
                        for (unsigned long long int i_31 = 0; i_31 < 11; i_31 += 3) 
                        {
                            var_53 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_122 [i_28 - 2] [i_28] [i_28 - 1] [i_28] [i_4])) : (var_12)));
                            var_54 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_31] [i_27] [i_31] [i_28 + 1]))));
                        }
                    }
                } 
            } 
        } 
    }
    for (int i_32 = 2; i_32 < 12; i_32 += 3) /* same iter space */
    {
        var_55 = (i_32 % 2 == zero) ? (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_32])) << (((arr_123 [i_32] [i_32 - 2]) - (10911812926867181548ULL)))))), (((((/* implicit */_Bool) 1763048879U)) ? (18446744073709551615ULL) : (13998900124055289883ULL)))))) : (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_32])) << (((((arr_123 [i_32] [i_32 - 2]) - (10911812926867181548ULL))) - (12777937747651707851ULL)))))), (((((/* implicit */_Bool) 1763048879U)) ? (18446744073709551615ULL) : (13998900124055289883ULL))))));
        var_56 *= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) max((arr_1 [i_32]), (((/* implicit */unsigned long long int) 2789320132064880974LL))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(short)11]))))))));
    }
    for (int i_33 = 2; i_33 < 12; i_33 += 3) /* same iter space */
    {
        arr_127 [i_33 - 1] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) var_4)) == (max((((/* implicit */unsigned int) var_4)), (var_6))))) ? (min((((arr_1 [i_33]) + (arr_11 [8ULL]))), (((((/* implicit */_Bool) arr_9 [i_33 - 1] [i_33 - 2])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (max((((/* implicit */unsigned long long int) (short)21915)), ((-(3799589723999635769ULL)))))));
        arr_128 [i_33] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(unsigned char)1] [i_33 - 1])) ? (((/* implicit */int) ((2964877887894083591ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145)))))) : (((/* implicit */int) (!(var_0))))));
        var_57 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) ((int) var_1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (max((1517005062893787676ULL), (arr_11 [i_33]))))) : (((((var_12) << (((/* implicit */int) (_Bool)1)))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)180)) << (((((/* implicit */int) (unsigned char)246)) - (223))))))))));
        var_58 &= ((/* implicit */_Bool) min((((((((/* implicit */_Bool) (unsigned short)0)) ? (var_10) : (((/* implicit */int) var_5)))) >> (((/* implicit */int) ((((/* implicit */int) (unsigned char)74)) >= (((/* implicit */int) var_5))))))), (((/* implicit */int) ((_Bool) (unsigned char)55)))));
    }
    var_59 = ((/* implicit */long long int) (-((+(((/* implicit */int) var_18))))));
    var_60 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_10)) / (var_12)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -7940265356148642763LL)) ? (((/* implicit */unsigned long long int) var_3)) : (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (max((var_3), (((/* implicit */long long int) -2115324623)))))) : (((/* implicit */long long int) var_4))));
}
