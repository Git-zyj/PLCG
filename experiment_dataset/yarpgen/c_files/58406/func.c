/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58406
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
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 7; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((3959892007U), (((/* implicit */unsigned int) arr_1 [(short)5]))))) ? (((long long int) var_11)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (2726215989U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 1]))))))))) ? (((unsigned int) ((unsigned long long int) (signed char)-36))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-36))) : (1ULL)))) ? (((/* implicit */int) min((arr_5 [i_0 - 2] [i_2] [i_1] [(unsigned short)8]), (((/* implicit */unsigned char) var_10))))) : (((((/* implicit */_Bool) (signed char)68)) ? (((/* implicit */int) arr_4 [i_1] [i_2] [(short)6])) : (((/* implicit */int) arr_2 [i_0] [i_0])))))))));
                    arr_6 [i_0] [i_1] [(unsigned char)3] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (arr_0 [i_1 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_0 + 3] [i_0] [i_0] [i_0 + 3]), (((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_0])))))) : (((unsigned long long int) (signed char)-126)))), (((/* implicit */unsigned long long int) ((unsigned char) min((var_7), (((/* implicit */signed char) var_0))))))));
                    arr_7 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) ((unsigned short) 746980761))) : (((/* implicit */int) (unsigned char)11)))), (((/* implicit */int) ((_Bool) ((arr_4 [i_0] [i_0] [i_2]) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_5 [i_2] [i_0] [i_2] [i_2]))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 467407465U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)3010)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)3010)) : (((/* implicit */int) (short)-3010))))))), (((unsigned long long int) ((unsigned long long int) var_1)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        arr_10 [i_3] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)18735)) : (((/* implicit */int) (short)-14996))));
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            var_19 = ((/* implicit */signed char) ((_Bool) ((unsigned short) (_Bool)1)));
            /* LoopSeq 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
            {
                arr_17 [(short)17] [i_4] = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned int) var_5)));
                arr_18 [i_3] [i_4] [4ULL] = ((/* implicit */long long int) ((((_Bool) arr_8 [i_3])) ? (((unsigned long long int) arr_15 [i_4] [i_4])) : (((((/* implicit */_Bool) -746980761)) ? (7913107780424529829ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4] [i_4] [i_3])))))));
                arr_19 [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_13 [i_3] [i_3] [i_3] [i_3]))) ? (((/* implicit */int) ((unsigned short) arr_9 [i_3]))) : (((/* implicit */int) ((_Bool) var_1)))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                var_20 = ((signed char) ((arr_14 [i_3] [i_4] [i_6]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)18735))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3])) ? (2581408047U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 10533636293285021786ULL)))) : (((unsigned long long int) 746980750))));
                var_22 = ((_Bool) ((unsigned long long int) (unsigned short)3962));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned char) ((long long int) ((var_0) ? (312602712) : (((/* implicit */int) (unsigned short)61585)))));
                arr_26 [i_3] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_11))) ? (((((/* implicit */_Bool) arr_16 [i_7] [i_4] [i_3])) ? (((/* implicit */int) (signed char)62)) : (arr_12 [i_4]))) : (((/* implicit */int) ((unsigned short) var_0)))));
                var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)23))) : (2581408047U)))) : (((unsigned long long int) (_Bool)1))));
                arr_27 [i_4] [i_4] = ((/* implicit */int) ((signed char) ((unsigned int) var_0)));
                arr_28 [i_4] [(unsigned short)1] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_20 [i_3] [i_4] [i_7]))) ? (((arr_9 [i_7]) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53433))))) : (((((/* implicit */_Bool) 4294967295U)) ? (4294967273U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62)))))));
            }
            arr_29 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_20 [i_3] [i_3] [(unsigned char)10]))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) -1601754914)) : (1950939568U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_4))))));
            arr_30 [i_3] [i_3] |= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) 992174061)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-27699)))));
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                /* LoopSeq 4 */
                for (long long int i_9 = 0; i_9 < 20; i_9 += 3) 
                {
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (17419550879071873748ULL)))) ? (((((/* implicit */_Bool) arr_15 [12] [i_4])) ? (((/* implicit */int) var_11)) : (arr_12 [i_3]))) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)36792)))))))));
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((unsigned short) 503877535U)))));
                    arr_37 [14ULL] [i_3] [(signed char)4] [i_3] [i_3] [i_3] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 503877537U)) ? (6635456087190163821ULL) : (((/* implicit */unsigned long long int) 4294967295U))))) ? (((/* implicit */int) ((signed char) var_3))) : (((/* implicit */int) ((_Bool) var_10)))));
                }
                for (short i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_45 [i_3] [i_3] [i_3] [i_8] [i_8] [i_4] [(short)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_9 [i_4]))) ? (((((/* implicit */_Bool) (signed char)-79)) ? (54237656U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-40))))) : (((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (1950939568U)))));
                        arr_46 [i_4] [i_4] [i_4] [5ULL] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (short)-14678))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_13 [i_3] [i_8] [i_10] [i_8]))))) : (((long long int) arr_33 [i_4] [i_8] [i_10] [i_11]))));
                        arr_47 [i_4] [i_4] [i_10] [i_8] [i_3] [i_4] [i_4] = ((/* implicit */signed char) ((short) (_Bool)1));
                    }
                    var_27 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned short)60865)) : (((/* implicit */int) (signed char)94)))));
                    arr_48 [i_3] [i_4] [i_3] = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned short) var_11)));
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((unsigned short) ((long long int) arr_41 [i_3] [(unsigned short)2] [i_3] [i_3]))))));
                }
                for (int i_12 = 2; i_12 < 17; i_12 += 3) 
                {
                    var_29 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-8497)) : (((/* implicit */int) arr_38 [i_3] [i_4] [(signed char)4] [i_3] [(unsigned char)15])))));
                    var_30 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) 10U)) : (var_2)))) ? (((/* implicit */int) ((signed char) -8532202888368298191LL))) : (((((/* implicit */_Bool) -5261820106054044837LL)) ? (((/* implicit */int) arr_11 [i_8])) : (((/* implicit */int) (signed char)47))))));
                    /* LoopSeq 1 */
                    for (short i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        arr_55 [i_3] [i_4] [i_8] [i_12 - 2] [i_13] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)8478)) ? (1613123791) : (((/* implicit */int) (signed char)89))))) : (((((/* implicit */_Bool) 7177702851775498533ULL)) ? (-5261820106054044845LL) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
                        var_31 = ((/* implicit */unsigned int) ((((_Bool) (short)-25752)) ? (((/* implicit */int) ((unsigned char) var_15))) : (((/* implicit */int) ((unsigned short) arr_36 [i_13] [i_8])))));
                    }
                    arr_56 [i_3] [i_4] = ((/* implicit */long long int) ((_Bool) ((signed char) var_5)));
                }
                for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 2) 
                {
                    var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((signed char) ((long long int) 7884502512498220147ULL))))));
                    var_33 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (signed char)126)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_8] [i_8] [i_8]))))));
                }
                arr_59 [i_3] [i_4] [i_4] [i_8] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (short)31734)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_39 [i_3] [(short)16] [19U] [i_8])))));
                var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((unsigned int) (short)-32303)) : (268709329U))))));
                arr_60 [i_3] [i_4] [i_4] [i_8] = ((/* implicit */unsigned char) ((unsigned short) (signed char)29));
                /* LoopSeq 1 */
                for (short i_15 = 1; i_15 < 17; i_15 += 3) 
                {
                    arr_64 [i_4] [i_8] [i_15 + 3] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)190)) ? (((/* implicit */int) arr_52 [i_3] [i_4] [i_4] [i_8] [i_8] [i_15 + 3])) : (((/* implicit */int) (signed char)52)))));
                    var_35 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (17293822569102704640ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_33 [i_3] [i_4] [i_8] [i_15])) : (((/* implicit */int) arr_43 [i_3]))))) : (((unsigned long long int) var_9))));
                }
            }
        }
        arr_65 [i_3] [i_3] = ((unsigned char) ((unsigned short) (unsigned short)63));
    }
    /* LoopSeq 1 */
    for (short i_16 = 3; i_16 < 22; i_16 += 4) 
    {
        var_36 &= ((/* implicit */long long int) ((unsigned long long int) (short)-1));
        arr_69 [i_16] = ((/* implicit */unsigned short) ((unsigned long long int) max((((signed char) var_4)), (((/* implicit */signed char) ((_Bool) (short)-22778))))));
    }
    /* LoopSeq 1 */
    for (signed char i_17 = 0; i_17 < 25; i_17 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_18 = 4; i_18 < 22; i_18 += 3) 
        {
            var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((13253931136424192277ULL), (((/* implicit */unsigned long long int) (unsigned short)51443))))) ? (((/* implicit */int) ((signed char) (unsigned char)237))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_72 [i_17])) : (((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) arr_73 [i_17] [i_18 + 3])), (17668135683408620020ULL)))))) : (((((/* implicit */_Bool) -3165846198246286700LL)) ? (2814622212U) : (((/* implicit */unsigned int) -1270728173))))));
            var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((arr_73 [i_18] [i_17]) ? (2974115421880101759LL) : (((/* implicit */long long int) ((/* implicit */int) arr_73 [i_18 + 3] [i_17])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12))))) : (min((arr_71 [(unsigned short)20]), (((/* implicit */long long int) (signed char)-74)))))), (((((/* implicit */_Bool) ((signed char) -2015372698))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_12), (((/* implicit */unsigned short) var_15)))))) : (min((((/* implicit */long long int) arr_73 [i_17] [2LL])), (var_2))))))))));
        }
        for (int i_19 = 2; i_19 < 22; i_19 += 2) 
        {
            arr_78 [i_17] [i_17] [i_19] = ((/* implicit */_Bool) max((((/* implicit */int) max((((short) arr_73 [i_17] [0LL])), (((/* implicit */short) max(((signed char)-125), ((signed char)30))))))), (((int) ((arr_73 [i_17] [i_19 - 2]) ? (((/* implicit */int) (short)-27964)) : (((/* implicit */int) (unsigned char)212)))))));
            arr_79 [i_17] [i_17] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) arr_73 [i_19] [(_Bool)1]))) : (arr_71 [i_17])))) ? (((/* implicit */int) min((((/* implicit */signed char) var_9)), (var_10)))) : (min((((/* implicit */int) (short)-14601)), (-1500932335))))));
        }
        var_39 -= ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) min(((short)-1), ((short)8000)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)27963)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)27938))))) : (((unsigned int) (unsigned char)93)))));
    }
}
