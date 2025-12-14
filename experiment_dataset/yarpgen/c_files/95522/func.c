/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95522
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
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_19))));
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(min((3981489066U), (313478229U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 313478211U)) : (var_6)))) ? (((((/* implicit */_Bool) 313478229U)) ? (15480458338407006989ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14284))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (4294967295U))) == (max((313478243U), (2754633990U)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_22 = ((/* implicit */short) (-(1761381752U)));
        var_23 = ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 + 2])) ? (arr_1 [i_0 + 1] [i_0 + 3]) : (((/* implicit */unsigned long long int) 3981489056U)));
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_8 [i_1] = ((/* implicit */unsigned int) ((signed char) arr_7 [i_1]));
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    for (unsigned int i_5 = 1; i_5 < 9; i_5 += 3) 
                    {
                        {
                            var_24 -= ((/* implicit */unsigned int) arr_11 [i_5] [i_5] [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1]);
                            var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(10999309569174433355ULL))))));
                            arr_15 [i_5] [i_1] [i_5] [i_4] [i_1] [i_4] = ((/* implicit */signed char) var_3);
                            arr_16 [i_5] [i_4] [i_3] [i_2] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_5] [i_5 - 1] [i_5] [i_5] [i_2] [i_2]))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_6 = 1; i_6 < 7; i_6 += 2) 
                {
                    var_26 = 576460752303423487ULL;
                    var_27 = ((/* implicit */signed char) (~(10999309569174433355ULL)));
                }
                arr_19 [i_3] [i_2] [i_2] [i_1] = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_3] [i_2] [i_1] [i_1])))));
            }
            for (short i_7 = 2; i_7 < 7; i_7 += 4) 
            {
                var_28 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (var_11) : (var_11)))) == (arr_14 [i_7 + 3] [i_7 - 1] [i_7 - 2])));
                /* LoopSeq 4 */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        arr_29 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_27 [i_7] [i_7] [i_7] [i_8] [i_1] [i_9])) : (((/* implicit */int) arr_27 [i_9] [i_1] [i_7] [i_8] [i_9] [i_2]))));
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) (!((_Bool)0)))) ^ ((~(((/* implicit */int) (_Bool)0))))));
                        arr_30 [i_1] [i_2] [i_7] [i_8] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
                    }
                    var_30 = ((/* implicit */signed char) (~(4294967289U)));
                }
                for (unsigned int i_10 = 3; i_10 < 8; i_10 += 1) 
                {
                    arr_35 [i_1] [i_10] [i_7] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967289U)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_1] [i_1]))) == (14631089828647636512ULL)))) : (((/* implicit */int) arr_34 [i_1] [i_2]))));
                    var_31 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_20 [i_1] [i_2] [i_7] [i_10])))) ? (((/* implicit */int) arr_21 [i_7 + 3] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_3 [i_1] [i_7]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_7] [i_10] [i_10] [i_11])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_12 [i_1] [i_2] [i_1] [i_10] [i_11] [i_10]))));
                        arr_38 [i_10] [i_2] [i_7] [i_7] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3981489070U)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127)))))) ? (((var_8) + (((/* implicit */long long int) ((/* implicit */int) var_4))))) : ((((_Bool)0) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 3981489053U))))));
                    }
                    for (int i_12 = 3; i_12 < 9; i_12 += 2) 
                    {
                        var_33 = ((/* implicit */short) var_15);
                        var_34 = ((/* implicit */_Bool) ((unsigned long long int) (unsigned char)94));
                        var_35 = (-(10607649727154470311ULL));
                        arr_43 [i_1] [i_10] [i_7] [i_10] [i_12] = ((/* implicit */long long int) var_3);
                        var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_10 - 3] [i_7 - 2] [i_2])))))));
                    }
                }
                for (short i_13 = 3; i_13 < 8; i_13 += 4) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_37 = ((/* implicit */signed char) ((((/* implicit */int) (short)6580)) >> (((var_17) - (16476148369763912340ULL)))));
                        var_38 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) != (((/* implicit */int) (short)-6580))))) == (((/* implicit */int) arr_42 [i_14] [i_13] [i_7] [i_2] [i_1]))));
                        var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_25 [i_13 - 3] [i_1] [i_7] [i_7 + 3] [i_14]))));
                    }
                    for (unsigned char i_15 = 2; i_15 < 7; i_15 += 3) 
                    {
                        var_40 ^= ((/* implicit */_Bool) 9223372036854775807LL);
                        arr_53 [i_15] [i_2] [i_7] [i_13] [i_15] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))));
                        var_41 = ((/* implicit */short) ((_Bool) arr_25 [i_7 - 1] [i_7 - 1] [i_7 + 3] [i_7 - 1] [i_7 + 3]));
                    }
                    arr_54 [i_1] [i_2] [i_7] [i_13] = ((unsigned int) var_5);
                    /* LoopSeq 1 */
                    for (short i_16 = 1; i_16 < 8; i_16 += 4) 
                    {
                        var_42 = ((/* implicit */int) (_Bool)0);
                        var_43 += ((/* implicit */_Bool) 6630138558730555853LL);
                    }
                }
                for (short i_17 = 1; i_17 < 8; i_17 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_18 = 3; i_18 < 9; i_18 += 2) 
                    {
                        arr_64 [i_18] [i_17] [i_18] [i_2] [i_1] = ((/* implicit */signed char) ((arr_11 [i_1] [i_2] [i_7] [i_17] [i_18] [i_7 - 1]) ? (((/* implicit */int) arr_11 [i_18] [i_17] [i_7 + 3] [i_2] [i_1] [i_1])) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                        arr_65 [i_18] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 72057594037911552ULL)) ? (((/* implicit */long long int) arr_40 [i_1])) : (var_6))) + (arr_56 [i_1] [i_2] [i_7] [i_17] [i_18] [i_18] [i_18])));
                        var_44 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 547916197U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (268435455ULL)))) ? (arr_17 [i_1] [i_2]) : (((((/* implicit */_Bool) 15104037569932813267ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (2243003720663040ULL)))));
                        var_45 ^= ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (3815654245061915093ULL)));
                    }
                    for (unsigned int i_19 = 0; i_19 < 10; i_19 += 3) 
                    {
                        arr_68 [i_1] [i_2] [i_7] [i_17] [i_19] = ((/* implicit */int) ((((/* implicit */int) arr_66 [i_2] [i_7 - 1] [i_7 + 2] [i_7])) > (((/* implicit */int) var_12))));
                        var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) (~(0ULL))))));
                    }
                    /* LoopSeq 4 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        arr_71 [i_1] = ((/* implicit */signed char) ((arr_13 [i_17 + 1] [i_2] [i_7 + 1] [i_17] [i_7]) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_50 [i_20] [i_2] [i_7] [i_17] [i_20] [i_20])) || (((/* implicit */_Bool) 3981489069U)))))));
                        var_47 = arr_33 [i_1] [i_17] [i_7] [i_1];
                    }
                    for (long long int i_21 = 0; i_21 < 10; i_21 += 3) 
                    {
                        var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) arr_25 [i_1] [i_17] [i_7] [i_17] [i_21]))));
                        var_49 = ((/* implicit */unsigned short) min((var_49), (((/* implicit */unsigned short) (-(arr_61 [i_21] [i_17 - 1] [i_7 + 2]))))));
                    }
                    for (short i_22 = 0; i_22 < 10; i_22 += 4) 
                    {
                        var_50 = ((/* implicit */short) ((((((/* implicit */int) var_0)) + (2147483647))) >> (((((/* implicit */int) arr_59 [i_2] [i_7 - 2] [i_17 - 1] [i_17] [i_17])) - (49115)))));
                        var_51 &= ((/* implicit */int) var_5);
                        var_52 = ((/* implicit */int) min((var_52), (((/* implicit */int) var_6))));
                    }
                    for (short i_23 = 0; i_23 < 10; i_23 += 1) 
                    {
                        arr_79 [i_1] = ((/* implicit */long long int) (signed char)-40);
                        var_53 |= ((/* implicit */unsigned char) (~((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_1] [i_17]))) : (var_17)))));
                    }
                    var_54 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_36 [i_1] [i_2] [i_2] [i_7] [i_1] [i_17]))));
                }
            }
        }
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
        {
            var_55 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_1] [i_24] [i_1])) ? (arr_45 [i_1] [i_1] [i_24]) : (arr_45 [i_24] [i_24] [i_1])))) || (((/* implicit */_Bool) ((short) (_Bool)1)))));
            var_56 -= ((/* implicit */short) var_4);
        }
        for (short i_25 = 0; i_25 < 10; i_25 += 4) 
        {
            /* LoopNest 2 */
            for (short i_26 = 0; i_26 < 10; i_26 += 4) 
            {
                for (short i_27 = 0; i_27 < 10; i_27 += 4) 
                {
                    {
                        arr_93 [i_1] [i_1] [i_1] [i_1] [i_1] = (((!(((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) 13433497164755942927ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(1079848509)))) ? (4294967295U) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)-11752)) & (arr_67 [i_27] [i_26] [i_26] [i_25] [i_1]))))))) : (((((/* implicit */_Bool) arr_78 [i_1] [i_1] [i_25] [i_26] [i_27])) ? (arr_78 [i_27] [i_26] [i_26] [i_25] [i_1]) : (((/* implicit */unsigned long long int) var_8)))));
                        var_57 = (-(((/* implicit */int) min((arr_72 [i_26] [i_25] [i_26] [i_27] [i_25] [i_26]), (((/* implicit */short) (_Bool)1))))));
                        var_58 = ((/* implicit */unsigned long long int) min((var_58), (((/* implicit */unsigned long long int) (!((!((_Bool)1))))))));
                    }
                } 
            } 
            var_59 -= ((/* implicit */_Bool) arr_61 [i_1] [i_25] [i_25]);
        }
        /* LoopNest 3 */
        for (int i_28 = 1; i_28 < 9; i_28 += 4) 
        {
            for (unsigned long long int i_29 = 2; i_29 < 9; i_29 += 2) 
            {
                for (_Bool i_30 = 0; i_30 < 0; i_30 += 1) 
                {
                    {
                        arr_101 [i_1] [i_28] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                        arr_102 [i_28] [i_29] [i_28] [i_28] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)38))))) + (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_77 [i_29] [i_30 + 1] [i_30] [i_30] [i_30])) : (((/* implicit */int) arr_77 [i_29] [i_30 + 1] [i_30] [i_30] [i_30]))))));
                        var_60 ^= ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) max((arr_99 [i_30] [i_29] [i_29] [i_28] [i_1]), (((/* implicit */unsigned long long int) arr_86 [i_1] [i_1] [i_29] [i_28]))))))) ? (((arr_50 [i_30 + 1] [i_30 + 1] [i_30 + 1] [i_29 + 1] [i_29 - 2] [i_28 - 1]) + (arr_50 [i_30 + 1] [i_30 + 1] [i_30 + 1] [i_29 + 1] [i_29 - 2] [i_28 - 1]))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)9)) ? (((/* implicit */int) (short)23565)) : (((/* implicit */int) (_Bool)1))))), (((var_2) ? (15499605554925360067ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_31 = 4; i_31 < 18; i_31 += 2) 
    {
        arr_107 [i_31] = ((/* implicit */unsigned char) var_16);
        var_61 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (_Bool)0))) ? (((((/* implicit */_Bool) arr_0 [i_31 - 4])) ? (988549204U) : (arr_106 [i_31 + 1]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
    }
}
