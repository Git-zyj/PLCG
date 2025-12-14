/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82034
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_0)) : (134217696U)))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65516)) | (((/* implicit */int) var_1)))))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (var_13) : (((/* implicit */long long int) -738432230))))) ? (((((/* implicit */_Bool) 1U)) ? (var_0) : (((/* implicit */int) (unsigned short)2)))) : (((((/* implicit */int) (signed char)-91)) - (((/* implicit */int) var_7)))))) - (839987802)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_15 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) var_7)))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1891454585U))));
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_2 = 4; i_2 < 9; i_2 += 4) 
        {
            arr_8 [i_1] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_2 - 4] [i_2 - 2] [i_2 + 3]))));
            arr_9 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))) == ((+(((/* implicit */int) var_2))))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            arr_12 [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) <= (var_5)));
            arr_13 [i_1] [i_1] [i_3] = ((/* implicit */long long int) (unsigned short)21965);
            /* LoopSeq 3 */
            for (short i_4 = 1; i_4 < 11; i_4 += 1) /* same iter space */
            {
                var_16 -= ((/* implicit */unsigned long long int) (+(arr_3 [i_4 + 1])));
                arr_16 [i_3] [i_3] [i_4 + 1] [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) (short)-29668)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (4160749600U))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
                arr_17 [i_3] [i_3] [i_1] [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) != (4160749599U))))));
            }
            for (short i_5 = 1; i_5 < 11; i_5 += 1) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_9)))))))));
                arr_21 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (+(0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : ((-(arr_10 [i_1] [i_3])))));
            }
            for (short i_6 = 1; i_6 < 11; i_6 += 1) /* same iter space */
            {
                arr_26 [i_6] [i_1] |= ((/* implicit */_Bool) (~((-(var_8)))));
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_18 [i_6] [i_3] [i_1]))) != (((/* implicit */int) ((short) arr_7 [i_1] [i_1] [i_6])))));
                arr_27 [i_3] = ((/* implicit */unsigned char) 134217696U);
                arr_28 [i_3] [i_1] = ((/* implicit */long long int) (+(arr_6 [i_6 - 1] [i_6 - 1] [i_6])));
            }
            arr_29 [i_1] [i_3] = ((/* implicit */int) ((unsigned int) var_2));
            arr_30 [i_1] [i_1] [i_3] = ((/* implicit */int) ((unsigned int) arr_11 [i_3]));
        }
        /* vectorizable */
        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            arr_35 [i_1] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_33 [i_1] [i_1] [i_1])))));
            var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1] [i_7])) + (((/* implicit */int) var_9))));
            arr_36 [i_1] [i_7] = ((/* implicit */unsigned short) (((((-(((/* implicit */int) arr_18 [i_1] [i_7] [i_7])))) + (2147483647))) << (((((/* implicit */int) arr_7 [i_7] [i_7] [i_1])) - (1)))));
            arr_37 [i_1] = ((/* implicit */unsigned int) ((unsigned short) (unsigned short)29891));
            var_20 *= ((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_1] [i_7] [i_7] [i_1]))));
        }
        arr_38 [i_1] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_20 [i_1] [i_1] [i_1])) : (arr_6 [(_Bool)1] [i_1] [i_1]))))))));
        arr_39 [(_Bool)1] |= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (signed char)16)))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_34 [i_1])))))))) : ((~(-6645988056375528350LL)))));
        var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (738432229) : (((/* implicit */int) (unsigned short)35036)))) >= (var_8)))) : ((+(((/* implicit */int) var_9))))));
    }
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_9 = 0; i_9 < 14; i_9 += 4) 
        {
            arr_44 [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_8 - 1]))));
            arr_45 [i_8] [i_8] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_3)))));
        }
        for (unsigned char i_10 = 2; i_10 < 10; i_10 += 3) 
        {
            arr_49 [i_10] [i_10] [i_8 - 1] = ((/* implicit */unsigned short) ((((((/* implicit */int) min((((/* implicit */unsigned short) arr_46 [i_8] [i_10] [i_8])), (var_2)))) << ((((~(var_13))) - (72306412012740877LL))))) & (((((/* implicit */_Bool) var_2)) ? (arr_48 [i_8]) : (((/* implicit */int) (!(var_10))))))));
            var_22 *= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_43 [i_8 - 1])) && (((/* implicit */_Bool) 134217696U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_10 + 4]))) : (arr_41 [i_8 - 1] [i_10 + 3]))) >> ((((~(var_13))) - (72306412012740881LL)))));
        }
        arr_50 [i_8 - 1] [i_8 - 1] = ((/* implicit */unsigned short) ((min((arr_0 [i_8]), (((arr_41 [i_8] [i_8 - 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) ? ((+((-(898406131U))))) : (((arr_0 [i_8 - 1]) ? (max((arr_41 [i_8] [i_8 - 1]), (((/* implicit */unsigned int) arr_48 [i_8])))) : (((/* implicit */unsigned int) ((int) var_6)))))));
        /* LoopSeq 3 */
        for (long long int i_11 = 0; i_11 < 14; i_11 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_12 = 2; i_12 < 12; i_12 += 2) 
            {
                arr_56 [i_8 - 1] [i_11] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_12)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_41 [i_11] [i_11])))) ? (max((((/* implicit */unsigned long long int) arr_43 [i_12])), (6199163912937919213ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)32)) ? (((/* implicit */int) (unsigned short)20)) : (((/* implicit */int) (signed char)-1))))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_13 = 1; i_13 < 13; i_13 += 2) 
                {
                    var_23 *= ((/* implicit */unsigned char) arr_57 [i_8] [i_11] [i_8] [i_8] [i_13] [i_13 - 1]);
                    arr_60 [i_8 - 1] [i_11] [i_11] [i_11] [i_12] [i_13] = ((/* implicit */signed char) (~((-(arr_57 [i_8] [i_11] [i_8] [i_12 - 2] [i_13 + 1] [i_8])))));
                }
                /* vectorizable */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    arr_63 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (var_10)))) : (((/* implicit */int) (!((_Bool)1))))));
                    arr_64 [i_11] [i_12] [i_11] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (short)-24852))))));
                }
                /* LoopNest 2 */
                for (short i_15 = 0; i_15 < 14; i_15 += 3) 
                {
                    for (unsigned int i_16 = 0; i_16 < 14; i_16 += 4) 
                    {
                        {
                            arr_70 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)20))))) > (((((/* implicit */_Bool) (short)-24852)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8))) : (arr_66 [i_8])))))) << (((((((((/* implicit */int) arr_65 [i_15])) >= (((/* implicit */int) arr_68 [i_8] [i_11] [i_12] [i_15] [(unsigned short)3])))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-694))) : ((~(var_4))))) + (8222268589615745882LL)))));
                            arr_71 [i_12] [i_12] [i_12] &= ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_47 [i_16]), (((/* implicit */unsigned long long int) var_9)))))))), ((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) arr_1 [i_8]))))))));
                            arr_72 [i_8 - 1] [i_11] [i_11] [i_15] [i_16] = ((/* implicit */short) ((_Bool) var_7));
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_69 [i_8 - 1] [i_11] [i_11] [i_15] [i_16])))) ? (((/* implicit */int) (_Bool)0)) : ((-(((/* implicit */int) (unsigned short)3))))));
                        }
                    } 
                } 
            }
            /* LoopSeq 4 */
            for (short i_17 = 0; i_17 < 14; i_17 += 1) 
            {
                arr_75 [i_8] [i_11] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-24852))));
                var_25 |= ((((/* implicit */_Bool) (-((-(var_5)))))) ? (((((/* implicit */_Bool) ((-628290885) | (((/* implicit */int) var_10))))) ? (arr_74 [i_8] [i_8] [i_8 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)65534)))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65534)))))))));
            }
            /* vectorizable */
            for (unsigned int i_18 = 0; i_18 < 14; i_18 += 2) /* same iter space */
            {
                arr_78 [i_11] = ((/* implicit */short) (unsigned short)65533);
                /* LoopNest 2 */
                for (short i_19 = 0; i_19 < 14; i_19 += 3) 
                {
                    for (unsigned long long int i_20 = 0; i_20 < 14; i_20 += 4) 
                    {
                        {
                            arr_84 [i_8] [i_11] [i_18] [i_11] [i_20] = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_20])) ^ (((/* implicit */int) arr_0 [i_8 - 1]))));
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) 76881767U))));
                            arr_85 [i_11] [i_11] [i_11] = ((/* implicit */_Bool) (+(((unsigned int) (short)-24853))));
                        }
                    } 
                } 
                arr_86 [i_11] [i_11] [i_11] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_47 [4])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 17131842711853055905ULL))))) : ((((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_81 [i_11] [i_11] [i_11] [i_11]))))));
                var_27 += ((/* implicit */unsigned long long int) ((unsigned int) (+(arr_67 [i_18] [i_8] [i_11] [i_8] [i_8] [i_8 - 1]))));
                arr_87 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_46 [i_8 - 1] [i_8 - 1] [i_8 - 1])) && (((/* implicit */_Bool) arr_46 [i_8] [i_8 - 1] [i_8 - 1]))));
            }
            /* vectorizable */
            for (unsigned int i_21 = 0; i_21 < 14; i_21 += 2) /* same iter space */
            {
                var_28 -= (-(17131842711853055930ULL));
                arr_90 [i_8] [i_8] [i_11] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_43 [i_21])) ? (arr_55 [i_11] [i_21]) : (((/* implicit */int) var_3)))) | (((/* implicit */int) (unsigned char)184))));
                arr_91 [i_21] [i_11] [i_11] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_83 [i_8] [i_11] [i_8] [i_8 - 1])) : (((/* implicit */int) arr_76 [i_8] [i_11] [i_11]))));
            }
            for (int i_22 = 3; i_22 < 10; i_22 += 1) 
            {
                arr_94 [i_8 - 1] [(_Bool)0] [i_8 - 1] [i_11] = ((/* implicit */long long int) (~((+((~(((/* implicit */int) (unsigned short)20))))))));
                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) (((((~(((/* implicit */int) (unsigned char)103)))) + (2147483647))) << (((((/* implicit */int) var_2)) - (30516))))))));
                arr_95 [i_11] [i_22 + 4] [i_22] = ((/* implicit */int) min(((-(9500249739387104110ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65533))))) != (10982146824525506509ULL))))));
                arr_96 [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) ((unsigned long long int) (+(arr_61 [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1]))));
            }
        }
        /* vectorizable */
        for (unsigned int i_23 = 2; i_23 < 10; i_23 += 1) 
        {
            arr_101 [i_8] [i_23] [i_23] |= ((((((/* implicit */int) var_6)) / (var_8))) + ((~(((/* implicit */int) (signed char)127)))));
            arr_102 [i_8 - 1] [i_23 + 3] = arr_66 [i_8];
            arr_103 [i_8] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_48 [i_8 - 1])) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) (signed char)(-127 - 1))))));
            arr_104 [i_8] = ((/* implicit */_Bool) (~((+(((/* implicit */int) (short)32767))))));
        }
        for (short i_24 = 0; i_24 < 14; i_24 += 4) 
        {
            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (+(((/* implicit */int) (!(((_Bool) arr_65 [2ULL]))))))))));
            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_69 [i_8 - 1] [i_8 - 1] [i_24] [i_8 - 1] [i_8 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17528)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((((/* implicit */_Bool) arr_80 [i_8] [i_24] [(unsigned short)0])) ? (((/* implicit */int) arr_62 [i_8 - 1] [(signed char)13] [i_24])) : (var_8)))))) : (((((/* implicit */_Bool) arr_74 [i_8 - 1] [i_24] [i_8 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_74 [i_8 - 1] [13LL] [i_8 - 1]))))))));
            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_52 [i_24])) && (((/* implicit */_Bool) arr_66 [i_8 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_66 [i_8 - 1]))))) : (((/* implicit */int) ((signed char) 9493354030192547523ULL))))))));
        }
    }
}
