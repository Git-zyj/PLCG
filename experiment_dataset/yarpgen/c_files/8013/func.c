/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8013
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
    var_12 = (((!(((/* implicit */_Bool) ((unsigned int) -229367844))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32763)) ? (var_8) : (((/* implicit */int) var_2)))))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) 3668393332683782223ULL)))) && (((/* implicit */_Bool) max(((short)-32763), ((short)32753))))))));
    var_13 = ((/* implicit */unsigned int) var_11);
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) (-(2287039668U)));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_1])) + (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)246)), (arr_2 [i_2] [i_2])))) ? (((/* implicit */int) (short)-32726)) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)32753)), (arr_7 [i_2]))))))));
                        var_16 = ((/* implicit */long long int) ((((/* implicit */int) var_6)) - ((-(((((/* implicit */_Bool) (short)32753)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) arr_0 [i_0]))))))));
                        var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) (short)32762)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)32762))))))) ? ((-(((/* implicit */int) arr_0 [i_0 - 1])))) : ((((+(((/* implicit */int) var_1)))) - ((+(-5015074)))))));
                    }
                } 
            } 
            var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)24)) ? (((/* implicit */int) (short)4817)) : (((/* implicit */int) (short)-4818)))) & (((((((/* implicit */int) (short)-32754)) + (2147483647))) << (((((((/* implicit */int) (signed char)-67)) + (80))) - (13)))))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_4 [i_1]) : (arr_4 [i_0])))) ? (((/* implicit */unsigned int) ((int) (unsigned char)250))) : ((-(var_9)))))));
        }
        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((arr_11 [i_4]) < (var_4))) ? (((((/* implicit */int) arr_13 [i_4] [i_0])) & (((/* implicit */int) arr_10 [i_0])))) : ((-(((/* implicit */int) (short)-32763)))))))));
            var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) || ((((-(((/* implicit */int) (signed char)-54)))) == (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)89))) < (7909795009505555915ULL))))))));
        }
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            arr_17 [i_0] = ((/* implicit */_Bool) 18446744073709551615ULL);
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_5] [i_0] [i_5])) : (((/* implicit */int) (short)-4820))));
        }
    }
    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
    {
        /* LoopSeq 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned char) (~(2147483647)));
            var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)8))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 21; i_9 += 3) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 4) 
                {
                    {
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) arr_32 [i_6] [i_9] [i_10]))));
                        arr_33 [i_6] [i_6] [i_8] [i_9] [i_6] [i_10] |= (~(((/* implicit */int) (short)32753)));
                    }
                } 
            } 
            arr_34 [i_6] [i_6] [12] = ((/* implicit */long long int) ((max(((-(((/* implicit */int) arr_32 [i_6] [i_6] [17])))), (((/* implicit */int) arr_25 [i_6] [i_6])))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32737)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) arr_27 [12LL] [i_6] [12LL] [i_6]))))) ? (((/* implicit */int) arr_31 [i_6] [i_6] [i_6] [i_6])) : (max((arr_23 [i_6] [i_6]), (((/* implicit */int) (short)14190))))))));
        }
        for (unsigned int i_11 = 1; i_11 < 17; i_11 += 2) 
        {
            arr_37 [i_6] [i_6] = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_24 [i_11] [i_6])) : (1621001133)))))) ? ((~(((((/* implicit */_Bool) var_1)) ? (arr_30 [i_11] [i_11] [i_11] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))) : (((((((/* implicit */_Bool) 267289264U)) ? (267289275U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) << (((((/* implicit */int) (unsigned char)89)) - (77)))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned int i_12 = 0; i_12 < 21; i_12 += 4) 
            {
                arr_40 [i_12] [i_11] [(signed char)10] = ((/* implicit */int) arr_35 [i_11]);
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    for (int i_14 = 0; i_14 < 21; i_14 += 2) 
                    {
                        {
                            arr_45 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((652509629) & (((/* implicit */int) arr_32 [i_6] [i_11 + 1] [i_13]))));
                            var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)26595)) ? (((/* implicit */int) arr_39 [i_6] [i_11 + 1] [i_13] [i_14])) : (((/* implicit */int) (short)32757)))) <= (((/* implicit */int) arr_28 [i_11 + 3] [i_11 - 1] [i_11] [i_11]))));
                            arr_46 [i_11] [7] [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)32754)) : (((/* implicit */int) (short)-32763)))) != (((((/* implicit */_Bool) arr_19 [i_12] [i_11])) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) arr_25 [i_13] [i_13]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 21; i_15 += 3) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */short) arr_31 [i_12] [(unsigned char)15] [(unsigned char)15] [i_6]);
                            var_27 = ((/* implicit */long long int) ((((/* implicit */int) arr_29 [i_6] [i_11 + 2])) == (((/* implicit */int) (unsigned short)54192))));
                        }
                    } 
                } 
                var_28 ^= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_6] [i_6] [i_6] [i_6])))))));
                arr_52 [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32754)) ? (1783702821) : (((/* implicit */int) (short)-29732))));
            }
            for (unsigned char i_17 = 4; i_17 < 18; i_17 += 3) 
            {
                var_29 = ((((/* implicit */int) arr_43 [(unsigned short)18] [(unsigned short)18] [i_17] [i_11] [i_6])) >= (((/* implicit */int) (unsigned short)17503)));
                var_30 = arr_28 [i_6] [i_6] [(unsigned short)15] [(unsigned short)15];
            }
            for (unsigned int i_18 = 0; i_18 < 21; i_18 += 4) /* same iter space */
            {
                arr_58 [i_6] [i_6] [i_6] [i_18] = ((((/* implicit */unsigned int) (~(((/* implicit */int) ((short) var_4)))))) + (((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-114))))) % (((unsigned int) 2570875887U)))));
                var_31 = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) arr_31 [i_11] [i_18] [i_11] [i_6])), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)248)))))), ((((((-(((/* implicit */int) (short)32767)))) + (2147483647))) >> (((((var_8) | (((/* implicit */int) var_1)))) - (1884219489)))))));
            }
            for (unsigned int i_19 = 0; i_19 < 21; i_19 += 4) /* same iter space */
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (int i_20 = 0; i_20 < 21; i_20 += 4) 
                {
                    arr_65 [i_6] [i_11 + 2] [i_19] [i_19] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_48 [i_6] [i_6] [(unsigned short)8] [i_11 - 1] [i_6] [i_20])) ? (((/* implicit */int) arr_48 [i_6] [i_6] [i_19] [i_11 - 1] [i_6] [i_6])) : (((/* implicit */int) arr_48 [i_6] [i_19] [i_19] [i_11 - 1] [i_11] [i_11]))));
                    var_32 = ((/* implicit */_Bool) 3933225484391311000ULL);
                }
                for (unsigned long long int i_21 = 0; i_21 < 21; i_21 += 4) 
                {
                    var_33 = ((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_54 [i_21] [i_19] [i_11 + 1])) : (((/* implicit */int) (signed char)-9))))), (arr_41 [i_21] [i_19] [i_11] [i_11] [i_6]))));
                    var_34 *= (!(((/* implicit */_Bool) arr_61 [i_11] [i_19])));
                }
                for (short i_22 = 0; i_22 < 21; i_22 += 1) 
                {
                    arr_73 [i_19] [i_19] [i_19] [i_19] = ((/* implicit */unsigned short) (-(((/* implicit */int) (((-(var_4))) < (((/* implicit */int) ((((/* implicit */int) arr_36 [i_6])) >= (((/* implicit */int) (short)-32763))))))))));
                    /* LoopSeq 2 */
                    for (signed char i_23 = 1; i_23 < 20; i_23 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) (-(((int) var_0))));
                        var_36 -= ((/* implicit */unsigned short) arr_18 [i_6] [i_6]);
                    }
                    /* vectorizable */
                    for (unsigned short i_24 = 0; i_24 < 21; i_24 += 1) 
                    {
                        var_37 -= ((/* implicit */signed char) arr_36 [i_6]);
                        var_38 = ((/* implicit */signed char) ((unsigned char) ((short) arr_80 [i_11])));
                        arr_81 [i_6] [i_6] [i_6] [i_6] [i_6] [i_22] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_50 [i_11 + 1])))) ? (((int) (short)-32754)) : (((/* implicit */int) var_7))));
                    }
                    arr_82 [i_6] = ((/* implicit */unsigned int) ((arr_53 [i_6] [i_6] [i_6] [i_6]) >> (((((/* implicit */int) var_10)) + (134)))));
                }
                /* vectorizable */
                for (int i_25 = 0; i_25 < 21; i_25 += 1) 
                {
                    var_39 &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_11 - 1] [i_11 - 1]))));
                    var_40 = (signed char)-35;
                    var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_49 [i_25])) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) arr_49 [i_25]))));
                }
                /* LoopNest 2 */
                for (signed char i_26 = 0; i_26 < 21; i_26 += 2) 
                {
                    for (unsigned char i_27 = 4; i_27 < 17; i_27 += 1) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_11 + 3] [i_11 + 3] [i_11] [7U])) ? (((/* implicit */int) arr_39 [i_11 + 4] [i_11] [i_11] [i_11])) : (((/* implicit */int) ((((/* implicit */int) arr_39 [i_11 + 1] [i_11] [i_11] [i_11])) < (((/* implicit */int) (unsigned short)4095)))))));
                            var_43 = ((/* implicit */long long int) ((((/* implicit */int) (!(arr_62 [i_6] [i_11 - 1] [i_19])))) << (((min((((((/* implicit */_Bool) 131071ULL)) ? (arr_47 [i_6] [i_11] [i_19]) : (((/* implicit */long long int) ((/* implicit */int) arr_80 [i_27]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_6] [i_27 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))))) - (55LL)))));
                            var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_62 [i_11 + 1] [i_11] [i_27 - 3]) ? ((-(((/* implicit */int) (short)-32753)))) : (((((/* implicit */_Bool) (short)-16744)) ? (((/* implicit */int) (short)32762)) : (((/* implicit */int) (unsigned char)86))))))) ? (((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-32767))))), (arr_42 [i_26] [i_19] [i_6] [i_6])))) : (((/* implicit */int) ((((/* implicit */int) max(((unsigned short)60632), (((/* implicit */unsigned short) arr_64 [i_6]))))) == (((/* implicit */int) (unsigned char)15)))))));
                            var_45 &= ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                        }
                    } 
                } 
            }
        }
        var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (short)-32763)) < (((/* implicit */int) arr_72 [i_6] [i_6] [1LL] [i_6] [19ULL]))))) + (((((/* implicit */_Bool) 173140729)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (short)32762))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)150)), (var_6)))) : (((((/* implicit */_Bool) (short)-32753)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)-4831))))));
    }
    /* LoopNest 3 */
    for (signed char i_28 = 0; i_28 < 12; i_28 += 1) 
    {
        for (int i_29 = 0; i_29 < 12; i_29 += 4) 
        {
            for (int i_30 = 2; i_30 < 10; i_30 += 3) 
            {
                {
                    var_47 = ((/* implicit */_Bool) max(((unsigned char)13), ((unsigned char)136)));
                    /* LoopNest 2 */
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                        {
                            {
                                arr_104 [10] [10] [i_31] [i_31] [i_32] = (-(((((/* implicit */int) ((((/* implicit */int) arr_39 [i_28] [i_29] [i_31] [i_31])) < (0)))) + (((((/* implicit */_Bool) arr_38 [i_28] [(unsigned char)17] [i_28] [(_Bool)1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-32764)))))));
                                var_48 = ((/* implicit */_Bool) (unsigned char)120);
                                var_49 += ((/* implicit */int) max((arr_9 [i_28] [i_28] [(signed char)6] [i_28] [i_28] [i_28]), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)117)) ? (((/* implicit */int) (unsigned char)169)) : (-2102659818))) <= (((/* implicit */int) (unsigned char)117)))))));
                                var_50 = arr_101 [i_28] [i_28] [i_30] [i_28];
                                var_51 *= ((/* implicit */unsigned int) ((((arr_96 [i_28] [i_29] [i_30 + 1]) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) -8932446987464397193LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_76 [i_28] [i_28] [i_30] [i_31] [i_32]))))))) ? (((((/* implicit */_Bool) max((((/* implicit */short) var_11)), (arr_3 [i_32] [i_31] [i_30])))) ? (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) (unsigned char)14))))) : (((/* implicit */int) ((((/* implicit */int) (short)-25389)) <= (173140729)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_28] [i_28]))))) ? ((~(((/* implicit */int) (short)-32762)))) : ((~(((/* implicit */int) var_0))))))));
                            }
                        } 
                    } 
                    var_52 = ((/* implicit */int) (-(min((((unsigned long long int) arr_50 [i_28])), (((arr_95 [i_28] [i_29] [i_30] [i_28]) << (((-173140730) + (173140751)))))))));
                    var_53 = ((/* implicit */unsigned char) min((var_53), (((/* implicit */unsigned char) 173140758))));
                }
            } 
        } 
    } 
}
