/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82955
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
    var_20 = ((/* implicit */long long int) (+(max((((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_7)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-75))))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_7))))) : (((((var_13) + (9223372036854775807LL))) << (((((/* implicit */int) var_19)) - (60147)))))))) ? (max((((/* implicit */unsigned long long int) var_7)), (((unsigned long long int) var_7)))) : (var_4)));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) (-(((int) max((((/* implicit */long long int) arr_2 [20ULL])), (5902472754477457406LL))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) max((min((arr_1 [i_0]), (((long long int) 18446744073709551615ULL)))), (((/* implicit */long long int) ((((/* implicit */unsigned int) 2147483647)) != (arr_2 [13ULL]))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            var_23 |= ((/* implicit */unsigned char) var_17);
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_13 [i_0] [(unsigned short)17] [i_0] [i_2]) - (((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_3])))))))) ? (-1646912552132852957LL) : ((~(arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0])))));
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3867772485039018981LL))));
                            var_26 = ((/* implicit */int) var_8);
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_1] [i_5] [i_0])) ? (arr_14 [i_0] [0] [1ULL] [i_5] [i_5] [i_0]) : (arr_14 [i_0] [i_0] [i_0] [i_0] [(unsigned char)18] [i_0])));
                            arr_22 [i_0] [i_0] [17] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_15 [i_0] [i_1] [9LL] [(signed char)18] [i_3] [i_0] [19ULL]))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            var_28 = ((/* implicit */int) 2388003466992508807LL);
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_17)))))));
                        }
                        arr_26 [(unsigned char)10] [i_1] [i_0] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_6 [i_0] [i_3])) : (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_2] [i_2] [i_1] [i_0]))))) ? ((+(0))) : (((/* implicit */int) var_14))));
                        /* LoopSeq 3 */
                        for (long long int i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            arr_29 [i_0] [5LL] [i_0] [i_0] [i_3] [i_7] = ((/* implicit */unsigned long long int) var_3);
                            var_30 = ((/* implicit */int) arr_16 [(unsigned char)17] [i_1] [i_1] [i_2] [(signed char)17] [i_3] [(unsigned char)17]);
                            arr_30 [i_0] [i_1] [i_0] [i_0] [i_7] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_21 [i_0])), (arr_8 [i_0] [i_0])));
                            var_31 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_23 [i_0] [(unsigned short)9] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_8))))) && (((var_15) <= (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_3))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (arr_7 [i_2] [i_2] [12ULL]) : (((/* implicit */int) arr_12 [(signed char)20] [i_0] [(signed char)20] [i_0]))))), (max((((/* implicit */long long int) var_2)), (arr_1 [i_0])))))));
                            var_32 = ((/* implicit */unsigned long long int) var_1);
                        }
                        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            arr_35 [i_0] [(unsigned char)16] [i_0] [i_3] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((int) 10ULL))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (((long long int) min((((/* implicit */long long int) 258048U)), (-1646912552132852957LL))))));
                            arr_36 [i_8] [i_0] [i_3] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) arr_31 [i_1] [i_1] [15LL] [i_1] [i_1] [(unsigned char)20] [i_1]);
                        }
                        for (unsigned char i_9 = 0; i_9 < 21; i_9 += 4) 
                        {
                            var_33 = ((/* implicit */unsigned short) 6270775107342752621LL);
                            arr_39 [(short)2] [i_1] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 2064306122)) ? (3641153936910780090LL) : (((/* implicit */long long int) 893664377U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) -2064306122)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_16 [(unsigned char)15] [11] [i_2] [i_2] [(unsigned char)15] [i_2] [i_2])))))));
                            arr_40 [i_0] [i_0] [i_2] [i_3] [i_9] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)129))) : (arr_1 [20]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (arr_13 [16] [i_1] [i_0] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_9] [15ULL] [i_3] [i_3] [i_2] [i_0] [i_0]))))))));
                            var_34 = -6332582758214129554LL;
                        }
                    }
                    for (long long int i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_11 = 0; i_11 < 21; i_11 += 1) 
                        {
                            arr_45 [i_0] [i_1] [i_0] [(short)16] [13LL] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_14)))))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) 16569524964689335203ULL)))))))));
                            arr_46 [i_0] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) (((-9223372036854775807LL - 1LL)) <= (((/* implicit */long long int) 75866067U)))))))) ? (((arr_8 [i_10] [i_11]) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_34 [i_1] [i_1] [i_2] [i_10] [i_0]) <= (((/* implicit */long long int) arr_2 [i_0])))))))) : (((1877219109020216412ULL) ^ (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)52080)), (311289458))))))));
                            arr_47 [11] [(_Bool)1] [0] [10ULL] [i_0] = ((/* implicit */int) max((((/* implicit */long long int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_42 [i_0] [i_1] [i_11])) && (((/* implicit */_Bool) 6270775107342752621LL))))), (var_19)))), (max((-6270775107342752621LL), (((/* implicit */long long int) (unsigned char)81))))));
                            var_35 *= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (min((((/* implicit */unsigned long long int) (signed char)-1)), (14354098260848929889ULL))))) / (((/* implicit */unsigned long long int) var_17))));
                            var_36 = (!(((/* implicit */_Bool) ((int) arr_6 [i_0] [i_1]))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 2) 
                        {
                            var_37 = ((/* implicit */unsigned short) max((((/* implicit */int) var_14)), (((int) -6332582758214129526LL))));
                            arr_52 [4] [12LL] [12LL] [15] [i_0] = ((/* implicit */unsigned char) 14372711064149477235ULL);
                            var_38 &= ((/* implicit */short) min((max((((10115006200670352746ULL) + (((/* implicit */unsigned long long int) arr_24 [i_0] [11ULL] [i_0] [(signed char)13] [i_0] [i_0] [i_0])))), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) * (min((var_15), (arr_21 [i_12]))))))));
                            var_39 += ((/* implicit */short) min((max((((/* implicit */int) var_14)), (min((arr_37 [i_10] [9U] [i_2] [i_10] [i_12] [i_2]), (((/* implicit */int) var_16)))))), (var_12)));
                        }
                        arr_53 [i_0] [i_0] [19] [i_0] = ((/* implicit */long long int) ((((unsigned int) arr_17 [i_0] [16U])) - (((((/* implicit */_Bool) var_16)) ? (arr_13 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) -793964923))))));
                        var_40 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_44 [i_0] [i_1] [i_2] [i_10]), (arr_44 [i_0] [(unsigned char)19] [i_2] [(unsigned char)19]))))));
                        var_41 &= ((/* implicit */unsigned short) max((var_18), (((/* implicit */long long int) (short)25977))));
                        var_42 = ((/* implicit */long long int) var_2);
                    }
                    for (unsigned char i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        arr_57 [i_0] [i_2] [15] [i_0] = ((/* implicit */int) (-(4294709248U)));
                        var_43 = ((/* implicit */int) max((arr_4 [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_20 [i_13] [i_1] [i_0] [i_13] [i_0] [i_1])))))));
                        arr_58 [i_0] [i_1] [8LL] [i_13] [i_0] [8LL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_24 [i_0] [(_Bool)1] [i_0] [(unsigned char)13] [i_0] [12ULL] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_16)))) / (((/* implicit */int) var_16)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 0; i_14 < 21; i_14 += 4) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 21; i_15 += 3) 
                        {
                            {
                                var_44 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)220), (((/* implicit */unsigned char) var_5)))))) <= (max((arr_2 [(unsigned char)0]), (((/* implicit */unsigned int) -793964923))))));
                                var_45 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) == (4038268098894844914ULL)));
                                var_46 = ((/* implicit */long long int) arr_8 [i_15] [i_0]);
                            }
                        } 
                    } 
                    var_47 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((arr_25 [(short)17] [(short)17] [i_0] [i_0] [18LL] [(short)12]), (((/* implicit */int) var_5))))), (max((arr_63 [i_0] [i_1] [0LL] [i_2] [i_2]), (arr_63 [(unsigned char)3] [i_1] [i_1] [i_1] [19U])))));
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 0; i_16 < 21; i_16 += 1) 
                    {
                        for (short i_17 = 0; i_17 < 21; i_17 += 4) 
                        {
                            {
                                var_48 = ((/* implicit */unsigned char) (((-9223372036854775807LL - 1LL)) < (((/* implicit */long long int) ((arr_10 [i_17] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
                                var_49 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_17])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) < (var_0)))) : ((-(((/* implicit */int) var_8))))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) var_7))))) / (((((/* implicit */_Bool) var_6)) ? (-1646912552132852957LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-25159))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (short i_18 = 0; i_18 < 10; i_18 += 3) 
    {
        arr_75 [i_18] [i_18] = ((/* implicit */int) (~(7050895690046525970ULL)));
        var_50 = ((/* implicit */int) min((((/* implicit */unsigned long long int) 1413190563)), (1877219109020216412ULL)));
        var_51 = ((/* implicit */_Bool) max((var_51), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_21 [20])) >= (max((((/* implicit */long long int) var_19)), (var_18))))))) - (min((((/* implicit */unsigned int) arr_74 [i_18])), (var_15))))))));
        /* LoopSeq 1 */
        for (int i_19 = 0; i_19 < 10; i_19 += 2) 
        {
            arr_79 [i_18] = ((/* implicit */long long int) (signed char)-15);
            var_52 = ((/* implicit */unsigned char) min((var_52), (((/* implicit */unsigned char) (+(((/* implicit */int) (short)-32754)))))));
            arr_80 [i_19] [i_19] [i_19] &= ((/* implicit */long long int) ((var_2) >= (min((((/* implicit */unsigned int) arr_32 [i_18] [i_19] [12LL] [i_18] [i_19])), (3419273108U)))));
        }
    }
    for (signed char i_20 = 0; i_20 < 21; i_20 += 1) 
    {
        var_53 = ((/* implicit */unsigned short) max((var_53), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_20] [i_20])) || (((/* implicit */_Bool) arr_42 [i_20] [i_20] [11LL]))))), (min((((/* implicit */unsigned int) arr_16 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] [i_20])), (((((/* implicit */_Bool) arr_54 [i_20] [i_20] [i_20] [i_20] [i_20] [(short)2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)124))) : (var_15))))))))));
        var_54 = ((((/* implicit */_Bool) max((arr_61 [16LL] [i_20] [(short)16]), (((/* implicit */long long int) arr_6 [i_20] [i_20]))))) ? ((-(((/* implicit */int) arr_17 [i_20] [i_20])))) : ((-(((/* implicit */int) arr_6 [i_20] [i_20])))));
        /* LoopSeq 1 */
        for (unsigned long long int i_21 = 0; i_21 < 21; i_21 += 4) 
        {
            var_55 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) max((max((arr_16 [i_20] [i_21] [19ULL] [i_21] [2] [i_21] [i_21]), (((/* implicit */short) var_16)))), (((/* implicit */short) (!(((/* implicit */_Bool) arr_65 [i_20] [i_20] [10] [i_20]))))))))));
            /* LoopNest 3 */
            for (unsigned int i_22 = 0; i_22 < 21; i_22 += 1) 
            {
                for (unsigned long long int i_23 = 0; i_23 < 21; i_23 += 4) 
                {
                    for (long long int i_24 = 0; i_24 < 21; i_24 += 3) 
                    {
                        {
                            var_56 = ((/* implicit */short) (-(((/* implicit */int) max((((/* implicit */unsigned char) ((_Bool) arr_12 [i_20] [i_24] [(unsigned char)2] [i_23]))), (min(((unsigned char)246), (var_8))))))));
                            var_57 = ((/* implicit */unsigned int) (((_Bool)1) ? (7128997996395398965LL) : (((/* implicit */long long int) 0))));
                        }
                    } 
                } 
            } 
            var_58 = ((((/* implicit */unsigned long long int) arr_89 [i_20] [i_21] [i_21] [i_21])) - (((max((var_4), (((/* implicit */unsigned long long int) var_9)))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) (unsigned short)2522))))))));
        }
        arr_95 [i_20] = ((/* implicit */long long int) min((((/* implicit */short) (unsigned char)9)), ((short)29847)));
    }
    var_59 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((long long int) 4495068345294942669LL))));
    var_60 -= ((/* implicit */unsigned char) ((-787300064) * (((/* implicit */int) (!(((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_9)))))))));
}
