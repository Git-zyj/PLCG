/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82158
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
    var_18 = ((/* implicit */unsigned int) ((int) ((max((0U), (((/* implicit */unsigned int) (unsigned short)9555)))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)23913)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_1 + 1] [i_1 + 1] [i_0] &= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56364))) : (arr_4 [i_0])))) ? ((~(arr_0 [i_0]))) : (arr_0 [i_1 + 1])))));
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 2; i_4 < 18; i_4 += 3) 
                        {
                            var_19 += ((/* implicit */short) ((unsigned int) (unsigned char)199));
                            arr_15 [i_0] [i_4] [i_2] = ((/* implicit */unsigned char) var_15);
                        }
                        arr_16 [i_0] [i_1 - 1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)30261))))) ? (min((arr_0 [i_1 + 1]), (((/* implicit */long long int) arr_11 [i_1 + 1] [i_1 + 1] [i_1 + 1])))) : (arr_0 [i_1 + 1])));
                    }
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        arr_19 [i_2] [i_1 + 1] [i_2] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])) : (arr_2 [i_1 + 1] [i_1 - 1])))) ? (((arr_2 [i_1 - 1] [i_1 + 1]) ^ (((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1])))) : ((-(((/* implicit */int) arr_7 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]))))));
                        arr_20 [i_0] [i_0] [i_0] [i_1 + 1] [i_2] [i_5] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_5)) ? ((~(var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1 + 1] [i_2] [i_5])) ? (((/* implicit */int) (short)-27676)) : (((/* implicit */int) var_10)))))))));
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (~(18446744073709551615ULL))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        var_21 -= (~((-(((unsigned int) arr_14 [i_0] [i_1 - 1] [i_2] [i_2] [i_6] [i_0] [i_1 + 1])))));
                        arr_24 [i_0] [i_1 - 1] [i_2] [i_1 - 1] = arr_11 [i_0] [i_1 + 1] [i_6];
                        arr_25 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (~((~(((((/* implicit */_Bool) 2749273229275547506LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (arr_23 [i_0] [i_0] [i_1 - 1] [i_2] [i_2] [i_6])))))));
                        var_22 = ((/* implicit */short) min((var_22), (max((max(((short)-27676), (((/* implicit */short) (unsigned char)124)))), (((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_0] [i_6] [i_1 + 1] [i_6])))))))));
                    }
                    for (short i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        arr_30 [i_0] [i_7] = ((/* implicit */unsigned short) arr_4 [i_7]);
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) max(((+(arr_8 [i_0] [i_1 + 1] [i_2] [i_7]))), (((/* implicit */long long int) arr_13 [i_0] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))))) ? ((-(((/* implicit */int) arr_21 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_0] [i_0])))) : (((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (((/* implicit */int) arr_17 [i_0] [i_1 + 1] [i_2] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_1 - 1])))))))));
                        arr_31 [i_7] = ((/* implicit */unsigned short) min((920655501), (var_4)));
                    }
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_36 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : ((~(min((((/* implicit */unsigned long long int) arr_26 [i_0] [i_1 + 1] [i_2] [i_9])), (0ULL)))))));
                                arr_38 [i_9] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)54272))));
                            }
                        } 
                    } 
                    arr_39 [i_0] = ((/* implicit */_Bool) ((int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_1 - 1] [i_1 + 1] [i_2]))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_1 + 1] [i_2])))))));
                }
                for (signed char i_10 = 0; i_10 < 19; i_10 += 2) /* same iter space */
                {
                    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_1 - 1] [i_10])), (min((arr_28 [i_10] [i_0] [i_1 + 1] [i_10]), (arr_28 [i_0] [i_1 - 1] [i_10] [i_0])))))) ? (arr_32 [i_0] [i_0] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))))));
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 19; i_11 += 3) 
                    {
                        for (int i_12 = 4; i_12 < 16; i_12 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)1272))));
                                var_27 = ((/* implicit */int) max((var_27), (min((((/* implicit */int) min((((/* implicit */unsigned short) arr_41 [i_12 + 2] [i_11] [i_10])), (var_16)))), (((((/* implicit */_Bool) arr_18 [i_0] [i_1 + 1] [i_10] [i_10])) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) ((_Bool) arr_9 [i_1 - 1] [i_11])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 1; i_13 < 17; i_13 += 4) 
                    {
                        for (unsigned short i_14 = 0; i_14 < 19; i_14 += 1) 
                        {
                            {
                                var_28 += ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((arr_17 [i_0] [i_1 - 1] [i_13 + 2] [i_13 + 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_4 [i_0])))) ? (((/* implicit */int) arr_9 [i_10] [i_0])) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_14 [i_14] [i_14] [i_14] [i_13 + 2] [i_10] [i_1 + 1] [i_0])))))), (((/* implicit */int) (signed char)-48))));
                                var_29 ^= (-(((/* implicit */int) (short)0)));
                                var_30 = ((/* implicit */unsigned int) max((var_30), (arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                                var_31 = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned int) arr_35 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1])), (arr_45 [i_0] [i_1 + 1] [i_1 + 1] [i_13 + 2] [i_14] [i_14])))));
                                var_32 ^= ((/* implicit */int) arr_50 [i_0] [i_1 - 1] [i_10] [i_13 - 1] [i_14]);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_15 = 0; i_15 < 19; i_15 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 19; i_16 += 4) 
                    {
                        for (short i_17 = 0; i_17 < 19; i_17 += 4) 
                        {
                            {
                                var_33 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) < (4062511295U)));
                                arr_61 [i_1 - 1] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (short)-8079))))));
                                var_34 = (~(((/* implicit */int) arr_33 [i_15] [i_1 + 1] [i_15] [i_16])));
                                arr_62 [i_17] [i_16] [i_1 + 1] [i_16] [i_17] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) (short)11223)) : ((~(((/* implicit */int) arr_47 [i_17] [i_15] [i_15] [i_15] [i_0]))))));
                                var_35 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) var_14))) == (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_42 [i_0] [i_1 - 1] [i_15] [i_16] [i_17])) : (arr_13 [i_16] [i_1 - 1] [i_15] [i_16] [i_16] [i_17])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 0; i_18 < 19; i_18 += 4) 
                    {
                        for (signed char i_19 = 4; i_19 < 18; i_19 += 2) 
                        {
                            {
                                arr_70 [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) (~(((/* implicit */int) (short)8061))));
                                arr_71 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) ((signed char) arr_27 [i_1 - 1] [i_1 + 1]));
                                var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_0] [i_1 + 1] [i_15] [i_18] [i_19 - 4] [i_19 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8044))) : (18446744073709551615ULL)))) ? (arr_23 [i_0] [i_19 - 4] [i_15] [i_0] [i_1 + 1] [i_19 - 1]) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-74)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_20 = 1; i_20 < 18; i_20 += 2) 
                    {
                        for (unsigned char i_21 = 0; i_21 < 19; i_21 += 2) 
                        {
                            {
                                arr_77 [i_0] [i_1 + 1] [i_20] [i_20 - 1] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_41 [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) (~(arr_2 [i_0] [i_0])))) : (((((/* implicit */_Bool) 15U)) ? (10663363925876757887ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8079)))))));
                                arr_78 [i_0] [i_20] [i_15] [i_20 - 1] [i_21] = ((/* implicit */unsigned long long int) ((long long int) arr_26 [i_20 + 1] [i_20 - 1] [i_20 + 1] [i_20 + 1]));
                                var_37 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)28273))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_22 = 0; i_22 < 19; i_22 += 4) 
                    {
                        var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_74 [i_0] [i_1 - 1] [i_0] [i_22] [i_22] [i_1 + 1])) ? (((/* implicit */int) arr_9 [i_1 - 1] [i_22])) : ((-(((/* implicit */int) (signed char)-74)))))))));
                        var_39 -= ((/* implicit */short) (-(arr_45 [i_1 + 1] [i_1 + 1] [i_22] [i_1 - 1] [i_15] [i_0])));
                    }
                    var_40 = ((/* implicit */unsigned int) (_Bool)1);
                }
                /* LoopSeq 1 */
                for (short i_23 = 0; i_23 < 19; i_23 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_24 = 0; i_24 < 19; i_24 += 2) 
                    {
                        var_41 |= ((/* implicit */long long int) ((max((((/* implicit */int) arr_22 [i_24] [i_23] [i_1 + 1] [i_1 - 1] [i_0] [i_0])), ((~(((/* implicit */int) (signed char)-79)))))) & ((~((~(((/* implicit */int) arr_12 [i_0] [i_1 - 1] [i_1 - 1] [i_23] [i_24]))))))));
                        /* LoopSeq 1 */
                        for (int i_25 = 0; i_25 < 19; i_25 += 4) 
                        {
                            var_42 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) -1))))) ? (((/* implicit */int) arr_49 [i_1 - 1] [i_24] [i_25])) : ((-(arr_87 [i_0] [i_1 + 1] [i_23] [i_24])))))));
                            var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) (!((!(((((/* implicit */int) (short)8044)) == (((/* implicit */int) arr_74 [i_25] [i_25] [i_25] [i_25] [i_25] [i_25])))))))))));
                            arr_91 [i_1 + 1] [i_23] [i_24] = ((/* implicit */signed char) ((int) ((((arr_83 [i_0] [i_1 - 1] [i_24]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_90 [i_0] [i_1 + 1] [i_23] [i_24] [i_25])))) < (((/* implicit */int) arr_26 [i_25] [i_23] [i_1 + 1] [i_0])))));
                            var_44 = (-(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_40 [i_25] [i_24] [i_1 + 1] [i_0])) ? (((/* implicit */int) arr_50 [i_0] [i_1 + 1] [i_23] [i_24] [i_25])) : (var_2))))));
                        }
                        /* LoopSeq 1 */
                        for (int i_26 = 0; i_26 < 19; i_26 += 2) 
                        {
                            arr_94 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_49 [i_1 - 1] [i_1 - 1] [i_1 - 1])) + (((/* implicit */int) arr_49 [i_1 - 1] [i_1 + 1] [i_1 + 1]))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_49 [i_1 + 1] [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_49 [i_0] [i_1 + 1] [i_1 - 1])))) : (((/* implicit */int) arr_49 [i_1 + 1] [i_1 + 1] [i_1 + 1]))));
                            arr_95 [i_0] [i_1 - 1] [i_23] [i_24] [i_26] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) min((var_1), (((/* implicit */unsigned short) arr_68 [i_24] [i_23] [i_1 + 1])))))))));
                            arr_96 [i_1 + 1] = (~(arr_66 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]));
                            arr_97 [i_1 - 1] [i_1 + 1] [i_26] [i_24] [i_26] = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
                            arr_98 [i_0] [i_1 + 1] [i_26] = ((/* implicit */unsigned int) var_5);
                        }
                    }
                    var_45 = ((/* implicit */int) var_15);
                }
                /* LoopNest 2 */
                for (unsigned int i_27 = 0; i_27 < 19; i_27 += 1) 
                {
                    for (int i_28 = 1; i_28 < 17; i_28 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (short i_29 = 2; i_29 < 16; i_29 += 3) 
                            {
                                var_46 = ((/* implicit */_Bool) max((min((6452989709824032560LL), (((/* implicit */long long int) (short)-8045)))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_66 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_57 [i_0] [i_1 - 1] [i_27] [i_28 - 1] [i_29 + 1] [i_29 - 1])) : (((/* implicit */int) arr_26 [i_0] [i_1 - 1] [i_29 - 2] [i_1 + 1]))))) ? ((~(609801972U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                                var_47 = min((((/* implicit */long long int) arr_101 [i_1 - 1] [i_27] [i_29 + 1])), (max((((/* implicit */long long int) (-(arr_65 [i_0] [i_1 + 1] [i_27] [i_28 - 1] [i_29 - 1] [i_29 - 2])))), (((long long int) (short)16657)))));
                            }
                            var_48 |= ((/* implicit */_Bool) arr_88 [i_0] [i_1 + 1] [i_27] [i_28 + 1] [i_28 + 2] [i_0]);
                        }
                    } 
                } 
                var_49 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((var_0) ? (arr_29 [i_1 + 1] [i_0] [i_1 - 1] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_0]))))))))));
            }
        } 
    } 
}
