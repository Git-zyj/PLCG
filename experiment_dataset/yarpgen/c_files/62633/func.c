/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62633
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
    var_12 = ((/* implicit */unsigned short) max((((/* implicit */int) ((signed char) (unsigned short)26099))), ((+((-(((/* implicit */int) var_11))))))));
    var_13 = ((/* implicit */unsigned short) (+((((+(((/* implicit */int) var_7)))) - (((/* implicit */int) min((var_11), ((unsigned char)255))))))));
    var_14 = ((/* implicit */int) var_5);
    /* LoopSeq 4 */
    for (long long int i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
            {
                var_15 = ((/* implicit */int) min((var_15), (min((((((/* implicit */_Bool) (unsigned short)448)) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) (unsigned short)53587)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_0])))))))));
                /* LoopSeq 1 */
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    arr_13 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) var_10)) * (min((((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_11)))))))));
                    arr_14 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (-5079946154247184420LL))) == (((((/* implicit */_Bool) arr_10 [i_1] [i_0] [i_1] [i_1 - 4])) ? (arr_10 [i_0] [i_0] [i_0] [i_1 - 2]) : (arr_10 [i_0] [i_0] [i_1] [i_1 - 2])))));
                    arr_15 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_5 [i_2] [i_1] [i_0])))) <= ((~((((_Bool)1) ? (1070859629U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
                }
            }
            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
            {
                arr_19 [i_0] = ((/* implicit */signed char) 2013684765608111982LL);
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_1])) ? (((arr_7 [i_1] [i_0] [i_4]) - (((/* implicit */long long int) arr_17 [i_4])))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)23)))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_0 + 1])) ? (((/* implicit */long long int) var_2)) : (arr_1 [i_1 - 3] [i_0 - 4])));
                        arr_27 [i_0] [i_0] [i_5] [i_6] = arr_1 [i_1 + 1] [i_0 - 1];
                        arr_28 [i_0] [i_0] [i_4] [i_1] [i_1] [i_1] = (~(((/* implicit */int) arr_24 [i_0] [i_0 + 2] [i_1] [i_1 - 4] [i_1 + 3])));
                    }
                    for (short i_7 = 2; i_7 < 8; i_7 += 3) 
                    {
                        var_18 = (+(((/* implicit */int) arr_4 [i_0])));
                        var_19 = ((/* implicit */unsigned char) ((arr_9 [i_1 + 3] [i_1 - 3] [i_1 + 1] [i_1 - 3]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_1 - 3] [i_1 - 4] [i_1 - 4] [i_1 - 3])))));
                        var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)967)) : (((/* implicit */int) (unsigned char)23))));
                        var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-12193))))));
                    }
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((unsigned short) var_7)))));
                    arr_31 [i_0] [i_4] [i_1] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)222)) && (((/* implicit */_Bool) -807474052))))) : (((/* implicit */int) arr_21 [i_0] [i_0 - 3] [i_4] [i_0]))));
                    var_23 = arr_29 [i_0] [i_0] [i_0] [i_0] [i_0];
                }
            }
            var_24 = ((/* implicit */unsigned short) min((var_24), (min((((/* implicit */unsigned short) ((((/* implicit */int) min(((unsigned char)73), ((unsigned char)222)))) != (((/* implicit */int) ((-5079946154247184420LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5738))))))))), (((unsigned short) (~(((/* implicit */int) (signed char)11)))))))));
            arr_32 [i_0] [i_0] = ((/* implicit */unsigned int) (+((~((+(arr_12 [i_0] [i_0])))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_8 = 2; i_8 < 11; i_8 += 3) 
            {
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_25 [i_0] [i_1] [i_0] [i_8] [i_0] [i_8] [i_1]))))) : (var_9)));
                var_26 += ((/* implicit */signed char) (~(((/* implicit */int) arr_18 [i_1 - 3] [i_1 + 3]))));
                var_27 ^= ((/* implicit */unsigned int) ((long long int) arr_9 [i_8] [i_8] [i_1] [i_0]));
                arr_36 [i_0] [i_0] [i_1] [i_8] |= ((/* implicit */unsigned long long int) var_5);
            }
            arr_37 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */int) arr_35 [i_0] [i_0] [i_0 - 1] [i_0 - 2])) : (((/* implicit */int) (_Bool)1))));
        }
        for (signed char i_9 = 1; i_9 < 9; i_9 += 3) 
        {
            var_28 = ((/* implicit */signed char) ((-398398148137786062LL) / (((/* implicit */long long int) 1950428519U))));
            arr_41 [i_0] = ((/* implicit */unsigned char) ((long long int) (+(arr_39 [i_0] [i_9 - 1] [i_9 - 1]))));
            arr_42 [i_0] [i_0] = (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_0 - 3]))))));
            var_29 ^= ((/* implicit */short) (+(((/* implicit */int) (short)-979))));
            var_30 = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_34 [i_9] [i_0 + 2])) + (((/* implicit */int) arr_34 [i_0] [i_0 - 4]))))));
        }
        for (short i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            var_31 = ((/* implicit */unsigned short) max((arr_1 [i_10] [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) max((-8596709289086585766LL), (((/* implicit */long long int) arr_17 [i_0]))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_0]))) : (var_3))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)81))))))))));
            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (arr_17 [i_10]))))));
        }
        var_33 = min((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) 2121572374)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)23))) : (-5079946154247184420LL))));
        arr_46 [i_0] = ((/* implicit */short) (+(((2013684765608111982LL) / (((/* implicit */long long int) var_8))))));
    }
    for (unsigned int i_11 = 0; i_11 < 18; i_11 += 3) /* same iter space */
    {
        var_34 = ((/* implicit */unsigned long long int) arr_48 [i_11]);
        arr_50 [i_11] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)209))));
        arr_51 [i_11] [i_11] = ((/* implicit */_Bool) (+(((((/* implicit */long long int) (+(arr_47 [i_11])))) - (min((var_4), (((/* implicit */long long int) var_6))))))));
    }
    for (unsigned int i_12 = 0; i_12 < 18; i_12 += 3) /* same iter space */
    {
        var_35 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) max(((short)32767), ((short)3837)))) <= (((/* implicit */int) (unsigned char)64))))) << (((((/* implicit */int) arr_48 [i_12])) - (25640)))));
        arr_55 [i_12] [i_12] = ((/* implicit */unsigned short) min((var_2), (min((((((/* implicit */int) (short)32767)) ^ (((/* implicit */int) var_5)))), (-1897307498)))));
        arr_56 [i_12] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (unsigned short)32817))))));
    }
    for (unsigned short i_13 = 0; i_13 < 11; i_13 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_14 = 0; i_14 < 11; i_14 += 3) /* same iter space */
        {
            var_36 &= ((/* implicit */_Bool) var_10);
            var_37 = ((/* implicit */unsigned short) (unsigned char)22);
        }
        for (int i_15 = 0; i_15 < 11; i_15 += 3) /* same iter space */
        {
            var_38 = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_4 [i_15])) + (((/* implicit */int) arr_4 [i_15]))))));
            var_39 = ((/* implicit */unsigned int) (-(18446744073709551615ULL)));
            var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) arr_38 [i_13]))));
            /* LoopNest 2 */
            for (short i_16 = 3; i_16 < 9; i_16 += 2) 
            {
                for (signed char i_17 = 0; i_17 < 11; i_17 += 1) 
                {
                    {
                        arr_70 [i_15] = ((/* implicit */unsigned char) (_Bool)1);
                        var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((-1) * (((((/* implicit */int) (short)12850)) * (((/* implicit */int) (unsigned short)35775))))))) ? (((/* implicit */int) arr_11 [i_13] [i_13] [i_13] [i_13])) : ((-(((/* implicit */int) min((((/* implicit */short) var_1)), (arr_61 [i_13] [i_15]))))))));
                        var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_2)), (arr_7 [i_16 - 1] [i_13] [i_16 + 1]))))));
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (int i_18 = 0; i_18 < 11; i_18 += 1) 
            {
                var_43 = ((((/* implicit */_Bool) (short)22318)) ? (8596709289086585765LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)209))));
                arr_74 [i_13] [i_15] |= ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)11))));
            }
            for (long long int i_19 = 0; i_19 < 11; i_19 += 2) 
            {
                var_44 = ((/* implicit */unsigned char) ((min((8589934591LL), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_19])) ^ (((/* implicit */int) (unsigned char)1))))))) >= (((/* implicit */long long int) (-(((/* implicit */int) ((signed char) -8012850350753450871LL))))))));
                var_45 += ((/* implicit */short) arr_60 [i_15] [i_15]);
            }
            for (unsigned char i_20 = 0; i_20 < 11; i_20 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_21 = 1; i_21 < 10; i_21 += 4) 
                {
                    for (unsigned short i_22 = 1; i_22 < 9; i_22 += 4) 
                    {
                        {
                            var_46 = ((unsigned short) min((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) -8589934592LL)) : (8797134224605449870ULL))), (((/* implicit */unsigned long long int) -1665457723481162010LL))));
                            arr_85 [i_13] [i_13] [i_13] [i_13] [i_15] [i_13] [i_13] = ((/* implicit */unsigned int) var_0);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned int i_23 = 0; i_23 < 11; i_23 += 3) 
                {
                    var_47 = 4026531840U;
                    var_48 = ((/* implicit */unsigned short) ((short) max((2013684765608111982LL), (((/* implicit */long long int) -146298966)))));
                }
                for (int i_24 = 1; i_24 < 10; i_24 += 2) 
                {
                    var_49 = ((/* implicit */short) max((((/* implicit */long long int) max((793014900U), (((/* implicit */unsigned int) (unsigned char)255))))), (min((((/* implicit */long long int) 2875451715U)), ((-(-8596709289086585766LL)))))));
                    arr_91 [i_13] [i_15] [i_15] [i_24] = ((/* implicit */int) ((signed char) -8589934592LL));
                    arr_92 [i_13] [i_15] [i_20] [i_24] = ((/* implicit */unsigned char) var_9);
                    arr_93 [i_13] [i_15] [i_20] [i_20] [i_24] [i_15] = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2792802970698909424ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (-8927213217587380847LL)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-34))))) : (max((((/* implicit */unsigned int) (unsigned short)127)), (2395618700U)))))));
                    arr_94 [i_13] [i_13] [i_20] [i_15] = ((/* implicit */short) max((((/* implicit */unsigned short) (unsigned char)171)), ((unsigned short)14595)));
                }
                for (unsigned short i_25 = 3; i_25 < 9; i_25 += 3) 
                {
                    arr_97 [i_13] [i_13] [i_15] = 3382621870722865100ULL;
                    var_50 = (-(((/* implicit */int) ((unsigned short) (+(var_4))))));
                }
            }
            for (long long int i_26 = 0; i_26 < 11; i_26 += 2) 
            {
                var_51 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (-6012375678761868790LL)));
                var_52 += ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 2875451715U)) && (((/* implicit */_Bool) (signed char)120))))) : (((/* implicit */int) arr_3 [i_26])))));
                arr_101 [i_13] [i_15] [i_26] = ((/* implicit */long long int) (unsigned short)58944);
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_27 = 0; i_27 < 11; i_27 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_28 = 4; i_28 < 10; i_28 += 3) 
                    {
                        var_53 = ((/* implicit */unsigned long long int) max((var_53), (((/* implicit */unsigned long long int) var_1))));
                        arr_108 [i_26] [i_15] [i_26] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 4861869806333986291ULL))));
                        var_54 ^= ((/* implicit */unsigned char) arr_69 [i_13] [i_15] [i_26] [i_26] [i_15] [i_28]);
                    }
                    arr_109 [i_26] [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-17719)) || (((/* implicit */_Bool) var_7))));
                }
            }
        }
        var_55 = ((/* implicit */unsigned short) arr_24 [i_13] [i_13] [i_13] [i_13] [i_13]);
        arr_110 [i_13] = ((/* implicit */unsigned short) ((int) arr_69 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]));
    }
}
