/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59651
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
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) -6608581051213783808LL))));
    var_16 = ((/* implicit */signed char) min((((unsigned long long int) (~(((/* implicit */int) var_0))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) min((-6608581051213783832LL), (((/* implicit */long long int) var_3))))) : (min((((/* implicit */unsigned long long int) (unsigned short)65535)), (var_1)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (int i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 3] [i_1 + 1] [i_2 + 1])) ? (-6608581051213783832LL) : (((/* implicit */long long int) arr_3 [i_0 - 2] [i_1 - 1] [i_2 + 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)38473)) / ((-2147483647 - 1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)11861)) % (arr_7 [i_0] [i_0] [i_2])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [0ULL] [18ULL] [18ULL]))) * (arr_0 [(short)18]))))) : (((((/* implicit */_Bool) ((signed char) arr_7 [i_0] [i_1] [i_2]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5296045728976529190ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)11853))))) : (1252098613030433898ULL)))));
                    var_18 |= ((/* implicit */signed char) (short)-944);
                }
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
                {
                    arr_10 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) (short)9736)))), (((/* implicit */int) min(((unsigned short)1), (((/* implicit */unsigned short) arr_8 [i_1] [i_1])))))));
                    /* LoopSeq 3 */
                    for (long long int i_4 = 1; i_4 < 18; i_4 += 4) /* same iter space */
                    {
                        var_19 *= ((/* implicit */short) -1858418975);
                        arr_13 [6U] [18ULL] [i_3] [i_1] = ((/* implicit */signed char) var_5);
                        /* LoopSeq 3 */
                        for (int i_5 = 1; i_5 < 18; i_5 += 4) 
                        {
                            arr_17 [i_1] = ((/* implicit */int) ((6906147517069560264LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                            arr_18 [i_5 + 1] [i_1] [i_4 + 1] [i_3] [i_1] [i_0] = ((/* implicit */int) var_6);
                        }
                        for (short i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((var_14) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_2 [i_1]))))) + (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_6))))))));
                            var_21 |= ((/* implicit */short) ((((/* implicit */_Bool) ((int) min((arr_0 [(signed char)14]), (2920103868160686780ULL))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (min((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_2 [i_0])))) : (((/* implicit */unsigned int) ((var_14) ? (arr_19 [i_4] [i_6] [i_6] [i_4 + 2] [i_6]) : (((/* implicit */int) (unsigned short)11781))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_14 [i_0] [i_1 - 1] [i_3] [i_4 + 1] [i_6])) >= (((/* implicit */int) arr_14 [(short)1] [i_1 + 1] [(short)1] [i_4 + 1] [i_4 - 1]))))))));
                            var_22 = ((/* implicit */int) (unsigned short)30720);
                            var_23 *= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) min((12160850770062885553ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) && (((/* implicit */_Bool) (signed char)-109)))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned short) arr_3 [i_0 + 2] [i_0 + 1] [i_0]);
                            var_25 |= ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_0])), (var_10)))) ? (max((11114202001282844362ULL), (((/* implicit */unsigned long long int) (short)32767)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_4] [(_Bool)0])) ? (((/* implicit */int) arr_8 [(unsigned char)16] [i_0])) : (arr_19 [i_0] [i_4] [i_3] [i_1] [i_0])))) ? (((/* implicit */unsigned int) min((arr_9 [i_7]), (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_2)) ? (arr_3 [(_Bool)1] [i_1] [i_1]) : (((/* implicit */unsigned int) 9)))))))));
                        }
                        arr_24 [i_1] [i_4] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_5 [i_4 + 1] [i_1 - 1] [i_1 - 1] [i_0 - 2])) ? (((/* implicit */unsigned long long int) var_6)) : (arr_5 [i_4 + 2] [i_1 + 1] [i_1 - 1] [i_0 + 2]))), (((/* implicit */unsigned long long int) arr_22 [8ULL] [8ULL]))));
                    }
                    /* vectorizable */
                    for (long long int i_8 = 1; i_8 < 18; i_8 += 4) /* same iter space */
                    {
                        arr_28 [i_0] [(_Bool)1] [i_0] [i_3] [i_3] [i_8] |= ((/* implicit */unsigned short) var_7);
                        arr_29 [i_1] [i_1] [i_3] [i_8] [i_0 - 2] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 2322636835U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)17096)))));
                    }
                    /* vectorizable */
                    for (long long int i_9 = 1; i_9 < 18; i_9 += 4) /* same iter space */
                    {
                        arr_32 [i_0] [i_1] [i_3] [i_9] = ((/* implicit */long long int) -1412231307);
                        arr_33 [i_1] [i_3] [i_1] = ((/* implicit */signed char) arr_3 [i_9] [i_1] [i_0 - 2]);
                    }
                    arr_34 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0 - 3] [i_0] [18LL])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-13651)) ? (((arr_2 [i_1]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)35)))) : (arr_25 [(unsigned short)9] [i_1] [(unsigned short)9])))) : (((((arr_0 [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))) / (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) var_7)))))))));
                }
                for (unsigned char i_10 = 0; i_10 < 20; i_10 += 1) /* same iter space */
                {
                    arr_39 [5ULL] [i_1] = min((min((((arr_27 [i_0] [i_0] [i_1] [i_10]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0 - 3] [i_1] [i_10] [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32763))) | (arr_22 [i_1] [i_10])))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_6 [i_0 - 4] [i_0 - 3] [i_1] [i_10])))) % (((((/* implicit */_Bool) (unsigned char)24)) ? (arr_27 [3] [3] [(unsigned short)13] [13ULL]) : (var_1))))));
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 4; i_11 < 18; i_11 += 2) 
                    {
                        for (signed char i_12 = 2; i_12 < 19; i_12 += 1) 
                        {
                            {
                                arr_45 [i_0] [i_0] [i_1] [i_11] [i_12] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((unsigned int) 7332542072426707253ULL))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13638)) ? (((/* implicit */unsigned long long int) var_6)) : (7332542072426707249ULL)))) ? (((((/* implicit */int) (unsigned short)56716)) ^ (((/* implicit */int) (signed char)6)))) : (((/* implicit */int) (unsigned short)8820)))) : (((((/* implicit */_Bool) ((arr_14 [i_0] [i_1] [i_0] [17ULL] [i_0]) ? (7332542072426707274ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [(signed char)18] [i_0] [14] [i_0])))))) ? (((((/* implicit */int) arr_36 [i_1] [i_1] [i_10] [i_10])) % (arr_31 [i_1] [(signed char)5]))) : (((((/* implicit */int) (unsigned short)8816)) * (((/* implicit */int) (_Bool)0))))))));
                                arr_46 [i_0] [i_1] [(signed char)8] [i_10] [i_11] [(unsigned short)11] [i_12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)3411)), (var_8)))) ? (((long long int) 7332542072426707253ULL)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_35 [9])) == (((/* implicit */int) arr_8 [i_1] [i_1])))))))))));
                                arr_47 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((arr_42 [i_0] [i_1 + 1] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_1] [i_1]))) : (7332542072426707274ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_8 [i_0] [i_1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)56708)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2013179334U))) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18067))))))) : (min((arr_15 [i_0 + 2] [i_12 - 1] [i_12] [i_12] [(signed char)11]), (((/* implicit */unsigned long long int) arr_4 [i_0 - 1] [i_0 - 3] [17LL]))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_13 = 2; i_13 < 16; i_13 += 4) 
                {
                    var_26 = ((/* implicit */unsigned char) ((unsigned int) (signed char)-111));
                    arr_51 [i_1] [i_1] [(signed char)5] = ((/* implicit */_Bool) arr_41 [i_1] [i_1] [i_1]);
                    /* LoopSeq 3 */
                    for (long long int i_14 = 0; i_14 < 20; i_14 += 2) 
                    {
                        var_27 = ((/* implicit */short) (~(914719305)));
                        arr_55 [i_1] [i_1] [i_0 - 3] [i_14] [i_13] [2] = ((/* implicit */unsigned long long int) (unsigned char)0);
                        arr_56 [7LL] [6] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) arr_44 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 + 1]);
                    }
                    for (unsigned int i_15 = 0; i_15 < 20; i_15 += 2) /* same iter space */
                    {
                        arr_61 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0 + 2] = (((_Bool)1) ? (((/* implicit */int) var_4)) : (arr_49 [4U] [i_1] [i_0 - 4]));
                        var_28 = (-(arr_25 [i_15] [i_1] [i_0 - 3]));
                        /* LoopSeq 4 */
                        for (unsigned short i_16 = 2; i_16 < 19; i_16 += 4) 
                        {
                            var_29 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)235)) >= (((/* implicit */int) (signed char)-89)))))) <= (4223097587U)));
                            arr_64 [i_0] [i_1] [(short)15] [2] [(short)15] [i_1] = ((/* implicit */unsigned char) (!(((11114202001282844324ULL) >= (12161050766441914604ULL)))));
                            var_30 |= ((/* implicit */long long int) ((unsigned int) (+(-759020112))));
                        }
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            arr_68 [i_13] [i_13] [i_17] |= ((/* implicit */unsigned char) (short)-1667);
                            var_31 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_0] [i_15] [i_17]))) ? (arr_20 [i_13] [i_1 - 1] [i_13] [i_13] [i_15] [i_1 - 1]) : (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) >> (0U))))));
                            arr_69 [1U] [i_1] [i_15] [i_17] = ((((/* implicit */_Bool) 3849913240458682627ULL)) ? (9174140324073796994LL) : (((/* implicit */long long int) 1113978088)));
                            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_1 - 1])) ? (((/* implicit */long long int) arr_9 [i_1 + 1])) : (-2084407547266584398LL)));
                        }
                        for (int i_18 = 1; i_18 < 19; i_18 += 3) /* same iter space */
                        {
                            arr_74 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1])) ? (arr_16 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1]) : (arr_16 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1])));
                            arr_75 [i_18] [i_1] [i_1] [i_15] [i_0] |= ((/* implicit */short) (((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 457645096U)) ? (((/* implicit */int) (unsigned short)11278)) : (((/* implicit */int) var_0))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (var_12)))));
                            var_33 = ((/* implicit */long long int) arr_4 [i_0] [(short)4] [i_0]);
                            arr_76 [(signed char)1] [i_13] [12] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 4968944701194912238LL)) ? (((/* implicit */int) arr_1 [i_1 + 1] [i_18 - 1])) : (((/* implicit */int) arr_1 [i_1 - 1] [i_18 + 1]))));
                        }
                        for (int i_19 = 1; i_19 < 19; i_19 += 3) /* same iter space */
                        {
                            arr_80 [i_15] |= ((unsigned long long int) arr_54 [0U] [i_1 + 1] [(unsigned short)3] [(signed char)8]);
                            arr_81 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((arr_52 [i_1 + 1]) ? (((/* implicit */int) arr_52 [i_1 + 1])) : (((/* implicit */int) arr_30 [i_13 - 2] [i_19 + 1] [i_0 - 1] [i_1]))));
                            arr_82 [i_1] = (!(((/* implicit */_Bool) arr_57 [i_19 - 1])));
                        }
                        arr_83 [i_0 - 1] [i_1] [(_Bool)1] [i_13] [16ULL] [(unsigned char)9] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_36 [i_1] [i_13] [i_1 - 1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_8));
                    }
                    for (unsigned int i_20 = 0; i_20 < 20; i_20 += 2) /* same iter space */
                    {
                        arr_88 [i_0 - 4] [i_1] [i_1] [i_0 - 4] = ((((/* implicit */_Bool) arr_53 [i_13 + 3] [i_13 + 2] [i_13 - 2] [i_13 - 2])) ? (((/* implicit */int) arr_53 [i_13 - 1] [i_13 - 1] [i_13 - 2] [i_13 + 1])) : (((/* implicit */int) arr_53 [i_13 + 1] [i_13 - 2] [i_13 + 4] [i_13 + 4])));
                        var_34 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)64))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_1 - 1] [(signed char)8] [i_1 - 1] [i_13])))));
                    }
                }
                arr_89 [i_1 - 1] [i_0] [i_0] |= ((/* implicit */int) arr_70 [i_0] [(unsigned short)14] [i_0] [i_0] [i_1 + 1] [i_1]);
                var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((/* implicit */int) min((arr_26 [i_0 - 1] [(_Bool)1] [i_0] [i_1 + 1]), (arr_26 [i_0 - 4] [i_1 - 1] [i_1 - 1] [i_1 - 1])))) & (((((/* implicit */_Bool) (short)-20623)) ? (((/* implicit */int) (short)-1667)) : (((/* implicit */int) var_11)))))))));
            }
        } 
    } 
    var_36 = ((/* implicit */unsigned int) -282906086);
    var_37 |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */int) (short)26093)) : (((/* implicit */int) (unsigned short)1016)))))));
}
