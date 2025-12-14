/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94275
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
    var_13 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) 2147483640))));
            arr_6 [i_1] [i_1] = ((/* implicit */short) (_Bool)0);
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) -2147483640))));
            var_16 = ((/* implicit */_Bool) arr_2 [(signed char)7] [i_2] [i_2]);
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                var_17 = ((/* implicit */short) arr_10 [i_2]);
                arr_12 [i_0] [i_0] [i_2] = ((/* implicit */short) arr_7 [i_0] [i_2] [i_2]);
            }
            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                var_18 = ((/* implicit */_Bool) (-(arr_4 [i_0] [i_2] [i_2])));
                var_19 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -2147483642)) ? (-2037440933) : (2037440957))));
                var_20 = ((/* implicit */unsigned int) ((134217600U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_4] [i_4])))));
            }
        }
        for (short i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((_Bool) ((int) ((((/* implicit */_Bool) arr_5 [i_0] [i_5] [i_5])) ? (((/* implicit */int) arr_15 [i_0] [i_5] [i_5] [i_5])) : (((/* implicit */int) (short)-9)))))))));
            arr_18 [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) (unsigned short)127));
            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (((~(2037440932))) - ((+(var_2)))));
        }
        for (short i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    for (unsigned short i_9 = 1; i_9 < 23; i_9 += 3) 
                    {
                        {
                            var_22 = ((((/* implicit */_Bool) 127ULL)) || (((/* implicit */_Bool) var_0)));
                            var_23 = ((((/* implicit */int) ((_Bool) var_2))) >= ((+(((/* implicit */int) arr_27 [i_9] [i_9 + 1] [i_9] [i_9 - 1] [i_9 + 1] [i_7])))));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) arr_28 [4] [4] [(_Bool)0] [i_8] [4]))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */_Bool) ((arr_10 [i_7]) ? ((-(((/* implicit */int) arr_13 [i_0] [i_6])))) : (((/* implicit */int) ((unsigned char) ((var_2) == (((/* implicit */int) var_6))))))));
                /* LoopSeq 3 */
                for (int i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */signed char) arr_1 [i_6]);
                    var_27 = ((/* implicit */short) ((long long int) ((unsigned long long int) (-(((/* implicit */int) arr_11 [i_7] [i_7] [i_10]))))));
                }
                for (int i_11 = 0; i_11 < 24; i_11 += 4) /* same iter space */
                {
                    var_28 |= ((/* implicit */unsigned long long int) (~(((unsigned int) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_15 [i_0] [i_0] [23ULL] [i_11])))))));
                    var_29 = ((-2147483630) > (((/* implicit */int) ((short) ((arr_28 [i_0] [i_6] [i_11] [i_6] [i_11]) / (((/* implicit */int) (signed char)-89)))))));
                    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (+(2147483642))))));
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) (unsigned short)8);
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(var_3)))) | (((((/* implicit */unsigned long long int) 2147483640)) & (arr_16 [i_12] [i_0])))))) && (((/* implicit */_Bool) var_2))));
                    }
                    for (long long int i_13 = 2; i_13 < 23; i_13 += 2) 
                    {
                        arr_40 [i_13] [i_7] [i_13] |= ((/* implicit */unsigned long long int) var_7);
                        arr_41 [i_7] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_11);
                    }
                }
                for (int i_14 = 0; i_14 < 24; i_14 += 4) /* same iter space */
                {
                    var_33 = (i_7 % 2 == zero) ? (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_3))))) << (((arr_30 [i_7] [i_7] [i_6] [i_7]) + (1551503434))))))) : (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_3))))) << (((((arr_30 [i_7] [i_7] [i_6] [i_7]) - (1551503434))) - (585352253)))))));
                    var_34 = ((/* implicit */unsigned short) (+((~(((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_16 [i_0] [i_6])))))));
                    var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3790521000U)) ? (((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_7))))) << (((9223372036854775807LL) - (9223372036854775801LL))))) : (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_11 [i_7] [i_7] [i_7])) : (((/* implicit */int) ((signed char) var_0)))))));
                }
                arr_44 [i_0] [i_6] |= ((((/* implicit */_Bool) (~(((var_12) + (((/* implicit */int) arr_27 [(_Bool)1] [i_6] [i_6] [i_0] [i_0] [17ULL]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) && (((/* implicit */_Bool) ((arr_29 [i_0] [i_0] [i_0] [i_0] [i_6] [i_0] [i_0]) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (0U))))))) : (max((((/* implicit */int) ((((/* implicit */int) arr_23 [i_0] [i_0])) == (((/* implicit */int) arr_20 [i_6] [i_6] [i_6]))))), ((+(((/* implicit */int) (signed char)-15)))))));
            }
            var_36 &= ((/* implicit */unsigned short) ((_Bool) max((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (short)-21513)))), (((/* implicit */int) arr_25 [i_6])))));
            var_37 = ((/* implicit */short) var_9);
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 3) 
            {
                var_38 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-15)) / (((/* implicit */int) var_6))));
                var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) (unsigned short)29133))));
            }
            for (unsigned int i_16 = 1; i_16 < 23; i_16 += 3) 
            {
                var_40 = ((/* implicit */unsigned int) (unsigned short)126);
                var_41 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)65522)) ? (((513728012909654449ULL) << (((/* implicit */int) (signed char)16)))) : (((var_6) ? (((/* implicit */unsigned long long int) arr_34 [i_0] [i_16])) : (9941902432642187137ULL)))))));
                var_42 = ((/* implicit */unsigned short) (signed char)-66);
                /* LoopSeq 1 */
                for (int i_17 = 0; i_17 < 24; i_17 += 4) 
                {
                    arr_51 [i_16] [i_16 - 1] = ((_Bool) (~(((/* implicit */int) ((unsigned char) 8863188154367242346ULL)))));
                    arr_52 [i_6] [i_6] [i_16] [(_Bool)1] [i_16] = ((/* implicit */unsigned long long int) var_12);
                }
            }
            for (int i_18 = 0; i_18 < 24; i_18 += 4) 
            {
                /* LoopSeq 3 */
                for (short i_19 = 3; i_19 < 22; i_19 += 1) 
                {
                    arr_57 [i_0] = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [15U] [0U]))) : (((((/* implicit */unsigned int) var_9)) | (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) var_12)) : (var_10))))));
                    var_43 = max((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (max((((/* implicit */unsigned int) arr_27 [i_0] [i_6] [i_19 + 1] [i_6] [i_6] [i_6])), (2097406227U))));
                }
                for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 4) 
                {
                    var_44 = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */unsigned char) arr_20 [i_6] [i_18] [i_20])), ((unsigned char)112)))) << (((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_18] [i_6] [i_18]))) / (2472798254U)))));
                    /* LoopSeq 1 */
                    for (long long int i_21 = 0; i_21 < 24; i_21 += 2) 
                    {
                        var_45 += ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_47 [i_20] [i_6] [i_20])) ? (((/* implicit */int) arr_47 [i_21] [i_6] [i_6])) : (((/* implicit */int) arr_47 [i_6] [i_21] [i_18]))))));
                        var_46 = ((((((/* implicit */_Bool) 2133476154)) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) var_8)))) > ((~(((/* implicit */int) (unsigned char)1)))));
                    }
                    var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_43 [i_20] [i_18] [(_Bool)1] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) arr_43 [i_18] [i_20] [i_18] [i_6] [i_0])) : (((/* implicit */int) arr_43 [i_20] [i_18] [i_18] [i_6] [i_0]))))))));
                    var_48 = ((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) arr_37 [i_0] [i_6] [i_18] [i_0] [i_20])))));
                }
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    var_49 = ((/* implicit */short) min((((/* implicit */int) ((((arr_36 [i_22]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [(_Bool)1] [i_0] [(_Bool)1]))))) && (((/* implicit */_Bool) var_11))))), (((var_6) ? (((/* implicit */int) (short)-6004)) : (-799640356)))));
                    var_50 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned int) var_2)) : (var_11)));
                }
                var_51 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)24862))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) (signed char)14)) * (((/* implicit */int) var_0))))))) : (-7785808361870489770LL)));
            }
        }
        /* LoopNest 2 */
        for (short i_23 = 0; i_23 < 24; i_23 += 1) 
        {
            for (short i_24 = 0; i_24 < 24; i_24 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_25 = 0; i_25 < 24; i_25 += 3) 
                    {
                        var_52 = ((/* implicit */_Bool) min((var_52), (((/* implicit */_Bool) (signed char)-16))));
                        arr_74 [i_0] [i_0] [6U] |= ((/* implicit */int) ((((/* implicit */_Bool) arr_67 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) arr_69 [i_25] [i_25] [6] [i_25])) == (-1))) && (((_Bool) 4294967295U)))))) : (((((/* implicit */_Bool) 7785808361870489760LL)) ? (2661248366U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-40)))))));
                        var_53 = ((/* implicit */_Bool) max((((/* implicit */int) (signed char)2)), ((~(((/* implicit */int) var_1))))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        var_54 = ((/* implicit */_Bool) (unsigned short)65535);
                        var_55 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((2577489377U) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_50 [i_24] [i_24] [i_23] [i_23] [i_23] [i_24])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-8)))))))) ? (((/* implicit */int) ((_Bool) max((((/* implicit */unsigned short) arr_69 [i_26] [i_24] [i_24] [i_0])), ((unsigned short)23))))) : (((/* implicit */int) (_Bool)1))));
                        arr_77 [i_0] [i_24] [i_0] [i_0] = ((/* implicit */unsigned short) min((((unsigned int) arr_45 [i_0] [i_23] [i_24] [i_26])), (((/* implicit */unsigned int) (signed char)31))));
                        arr_78 [i_24] = ((/* implicit */int) var_0);
                    }
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        var_56 = ((/* implicit */unsigned int) (_Bool)1);
                        var_57 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (signed char)-7))));
                        arr_81 [2ULL] [i_27] |= ((/* implicit */unsigned int) var_8);
                    }
                    var_58 = ((/* implicit */long long int) arr_71 [i_0] [i_23] [i_24] [i_24]);
                }
            } 
        } 
    }
    var_59 = var_3;
}
