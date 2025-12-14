/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81257
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 4; i_3 < 9; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [6ULL] [i_1] [i_0 - 1])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_0] [i_2]))));
                        var_18 ^= ((((_Bool) arr_4 [i_0] [i_1] [i_2])) ? (1078995842) : (((arr_8 [i_0] [6U] [i_1 - 2] [i_2] [i_2]) ^ (((/* implicit */int) var_5)))));
                    }
                    arr_11 [i_0] [i_0] = ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-101)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_0] [i_1] [i_0] [i_0])))));
                    var_19 = (-(arr_4 [i_1 - 1] [i_0 + 1] [i_0 - 1]));
                    var_20 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) var_14)))) - (((/* implicit */int) arr_10 [2] [i_0 + 1] [i_0 - 1] [i_0] [i_0]))));
                }
                arr_12 [i_0 + 1] [i_0] [5] = var_12;
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    arr_16 [i_0 + 1] [6] [i_4] |= arr_5 [i_0 + 1] [i_4];
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        var_21 = ((((/* implicit */_Bool) ((int) (~(((/* implicit */int) (signed char)46)))))) ? ((~(var_3))) : (min((((/* implicit */int) arr_19 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1 - 3])), (arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65516)) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_6 [i_0] [(short)3])) : (((/* implicit */int) arr_2 [i_0]))))))) : ((((!((_Bool)1))) ? (8323072U) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)43214))))))));
                    }
                    var_23 = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)31503)) >> (((arr_9 [i_0] [i_0] [i_4] [i_0]) + (785653464)))))) ? (((/* implicit */int) ((arr_13 [i_0] [i_1 + 1] [i_0]) || (((/* implicit */_Bool) var_13))))) : ((~(((/* implicit */int) arr_7 [(short)2] [i_1] [i_0 - 1]))))))) ? (((/* implicit */int) arr_19 [i_0] [i_1 + 1] [i_4] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0] [i_0 + 1])))))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)31503)) >> (((((arr_9 [i_0] [i_0] [i_4] [i_0]) + (785653464))) - (121933455)))))) ? (((/* implicit */int) ((arr_13 [i_0] [i_1 + 1] [i_0]) || (((/* implicit */_Bool) var_13))))) : ((~(((/* implicit */int) arr_7 [(short)2] [i_1] [i_0 - 1]))))))) ? (((/* implicit */int) arr_19 [i_0] [i_1 + 1] [i_4] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0] [i_0 + 1]))))))));
                    var_24 = ((/* implicit */unsigned char) 2073314883);
                    arr_20 [i_0] [i_0] = ((/* implicit */unsigned short) min((min(((+(((/* implicit */int) (short)-1890)))), (((/* implicit */int) var_0)))), (((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) (signed char)-101))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_6 = 0; i_6 < 21; i_6 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_7 = 1; i_7 < 20; i_7 += 3) 
        {
            var_25 += ((/* implicit */short) ((((/* implicit */unsigned int) ((min((((/* implicit */int) arr_25 [i_6])), (var_4))) | (((((/* implicit */int) (unsigned short)43208)) >> (((1469613460) - (1469613456)))))))) + (arr_21 [i_6])));
            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (~((+(((/* implicit */int) (signed char)-95)))))))));
            arr_26 [i_6] = (~(min(((~(((/* implicit */int) arr_25 [(unsigned short)20])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_7]))))))));
        }
        for (short i_8 = 0; i_8 < 21; i_8 += 2) 
        {
            var_27 = ((((/* implicit */int) (signed char)79)) ^ (((/* implicit */int) arr_27 [9ULL])));
            var_28 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_8]))))) ? (((((/* implicit */int) (short)5551)) / (((/* implicit */int) arr_27 [(signed char)18])))) : (((/* implicit */int) min((((/* implicit */short) (signed char)-86)), (arr_24 [i_6])))))) + (2147483647))) << (((((((/* implicit */int) arr_22 [i_6] [i_8])) + (17074))) - (9)))));
            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (((!(((((/* implicit */unsigned int) ((/* implicit */int) (short)7361))) <= (2005519414U))))) ? (max((((((var_6) + (2147483647))) << (((((((/* implicit */int) arr_25 [i_6])) + (18806))) - (18))))), (((/* implicit */int) (short)7361)))) : ((~(((/* implicit */int) (short)4095)))))))));
        }
        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_6]))) >= (min((((/* implicit */unsigned long long int) arr_27 [i_6])), ((-(var_10))))))))));
        var_31 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((int) 11311348033837516589ULL))), (((unsigned long long int) var_6))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_9 = 0; i_9 < 22; i_9 += 3) 
    {
        arr_33 [i_9] = ((((/* implicit */_Bool) arr_32 [i_9] [i_9])) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) arr_32 [i_9] [i_9])));
        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (unsigned short)22321)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_15)))) : (((((/* implicit */int) var_0)) | (((/* implicit */int) (unsigned short)0))))));
    }
    for (int i_10 = 0; i_10 < 24; i_10 += 3) 
    {
        var_33 = ((/* implicit */signed char) ((min(((+(-486996403))), ((+(var_3))))) | (min((((((/* implicit */_Bool) arr_35 [i_10])) ? (((/* implicit */int) (unsigned short)43214)) : (((/* implicit */int) (unsigned short)43208)))), (arr_34 [i_10])))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_11 = 1; i_11 < 21; i_11 += 3) 
        {
            var_34 = ((/* implicit */int) (-(var_1)));
            var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((unsigned char) arr_37 [i_10] [i_11 + 2])))));
            var_36 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (short)7361)) <= (((/* implicit */int) var_13)))))));
        }
        /* vectorizable */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_37 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(2199023255551ULL)))) ? (((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-101))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_36 [(signed char)16])))))));
            /* LoopSeq 2 */
            for (short i_13 = 3; i_13 < 22; i_13 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_15 = 3; i_15 < 22; i_15 += 2) 
                    {
                        arr_47 [(_Bool)1] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */int) (short)-23333)) >= (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_37 [i_14] [i_13])) : (((/* implicit */int) arr_35 [i_12]))))));
                        var_38 |= ((/* implicit */short) ((((/* implicit */int) (short)2794)) * (((/* implicit */int) (unsigned char)15))));
                    }
                    for (signed char i_16 = 1; i_16 < 23; i_16 += 3) 
                    {
                        var_39 &= ((/* implicit */short) ((((/* implicit */int) arr_41 [i_10] [i_16 - 1] [i_13 - 3] [(signed char)8])) - (((/* implicit */int) (signed char)-18))));
                        arr_50 [19ULL] [1U] [i_12] [i_13] [i_14] [i_13] = ((/* implicit */unsigned long long int) arr_40 [i_10]);
                        var_40 += arr_46 [(short)1] [i_12] [i_13 + 1] [i_16];
                    }
                    var_41 = ((/* implicit */signed char) (((_Bool)0) ? (((62081257U) % (((/* implicit */unsigned int) 1231910446)))) : (((/* implicit */unsigned int) var_6))));
                    var_42 -= ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */int) (signed char)-101)) ^ (-1047429069))) : (((int) var_1))));
                }
                for (unsigned int i_17 = 0; i_17 < 24; i_17 += 2) 
                {
                    arr_55 [i_10] [i_10] [i_10] [(unsigned char)17] [i_13] = ((/* implicit */short) (unsigned short)3301);
                    var_43 = ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_13] [i_13 + 2] [i_13]))) : (var_1));
                    /* LoopSeq 2 */
                    for (unsigned short i_18 = 1; i_18 < 21; i_18 += 2) 
                    {
                        arr_58 [i_13] [i_12] [(short)14] [i_17] [(short)12] = ((/* implicit */short) ((((/* implicit */_Bool) (short)7361)) && (((/* implicit */_Bool) 236630040))));
                        var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_56 [i_10] [i_12] [i_13] [(short)14] [i_18] [i_18 + 3] [i_18])) ? (((/* implicit */int) arr_56 [(short)10] [i_12] [(short)10] [i_17] [i_18 - 1] [i_18 + 1] [i_10])) : (var_11)));
                        var_45 *= ((/* implicit */unsigned int) (~(((arr_45 [i_17]) | (((/* implicit */unsigned long long int) arr_57 [i_10] [i_10] [i_10] [(signed char)0] [i_10] [i_17]))))));
                        arr_59 [(short)11] [i_12] [i_13] [i_12] [i_12] [i_12] = ((/* implicit */short) ((((((/* implicit */int) arr_53 [i_18 + 1] [i_12] [i_13] [i_18 + 1] [i_13 - 2])) + (2147483647))) << (((((/* implicit */int) arr_56 [i_10] [i_12] [i_13] [i_17] [i_17] [i_13] [i_10])) + (115)))));
                    }
                    for (unsigned int i_19 = 1; i_19 < 21; i_19 += 3) 
                    {
                        var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) - (((/* implicit */int) arr_46 [i_10] [15ULL] [i_17] [i_19]))))) ? (((/* implicit */int) arr_46 [i_13 - 2] [i_13 - 3] [i_13 - 2] [i_19 + 2])) : (((((/* implicit */_Bool) -1047429069)) ? (2073314895) : (((/* implicit */int) (signed char)0)))))))));
                        arr_64 [i_10] [i_12] [i_13] [i_13] [i_12] [i_12] = arr_39 [i_10];
                        arr_65 [i_13] [i_13] [i_12] [i_13] = ((/* implicit */unsigned char) (signed char)54);
                    }
                }
                arr_66 [i_10] [i_12] [i_13] [i_12] = ((/* implicit */short) (signed char)30);
                var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) ((((-2073314911) + (2147483647))) << (((((/* implicit */int) (short)24707)) - (24707))))))));
                arr_67 [i_13] [i_12] [i_12] = ((((/* implicit */_Bool) 7724590099769583867ULL)) ? (arr_61 [i_10] [i_12] [i_13] [1U] [i_13 - 2] [8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) == (var_10))))));
                var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) ((((/* implicit */int) arr_54 [i_10] [i_12] [i_13 - 1] [i_10])) >= (((/* implicit */int) arr_43 [i_10] [i_12] [i_13 - 3] [i_13 - 3] [14])))))));
            }
            for (int i_20 = 2; i_20 < 23; i_20 += 1) 
            {
                var_49 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_53 [i_20 - 2] [i_20 + 1] [i_20] [i_20 - 2] [i_20])) + (2147483647))) << (((((((/* implicit */int) arr_53 [i_20] [i_20 - 1] [12ULL] [i_20 - 2] [i_20])) + (152))) - (29)))));
                var_50 = ((/* implicit */short) (-(var_6)));
                var_51 = ((/* implicit */unsigned long long int) ((signed char) 9063575322964559300ULL));
                /* LoopNest 2 */
                for (unsigned long long int i_21 = 0; i_21 < 24; i_21 += 3) 
                {
                    for (int i_22 = 0; i_22 < 24; i_22 += 2) 
                    {
                        {
                            var_52 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_53 [i_10] [i_10] [(short)15] [i_21] [(short)10])) && (((((/* implicit */_Bool) (signed char)-87)) && (((/* implicit */_Bool) 236630040))))));
                            var_53 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_41 [i_10] [i_20] [i_21] [i_10])) ? (var_6) : (((/* implicit */int) (signed char)0)))) | (((/* implicit */int) ((((/* implicit */_Bool) (short)21398)) || (((/* implicit */_Bool) 8816776729921770852ULL)))))));
                            arr_75 [i_10] [i_12] [i_20] [i_21] [i_20] [i_12] [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_54 [i_21] [i_20] [17U] [i_20 - 1])) ? (((/* implicit */int) arr_46 [i_22] [21ULL] [i_20] [i_20 - 1])) : (((/* implicit */int) arr_54 [i_22] [i_22] [10U] [i_20 - 1]))));
                        }
                    } 
                } 
            }
            /* LoopSeq 3 */
            for (signed char i_23 = 0; i_23 < 24; i_23 += 1) 
            {
                var_54 = ((/* implicit */_Bool) (-(((unsigned long long int) arr_54 [i_10] [i_10] [i_12] [19]))));
                var_55 = ((/* implicit */unsigned int) (unsigned short)23770);
                arr_80 [14] [i_12] [i_23] [i_23] = ((((/* implicit */int) arr_68 [i_10] [i_12] [i_23])) == (((/* implicit */int) ((((/* implicit */int) (short)14610)) <= (((/* implicit */int) var_5))))));
            }
            for (int i_24 = 0; i_24 < 24; i_24 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_25 = 0; i_25 < 24; i_25 += 1) 
                {
                    arr_87 [i_10] [i_12] [i_24] [i_25] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_57 [i_10] [i_10] [i_10] [i_10] [i_10] [i_25]) / (arr_81 [i_10] [i_12] [17ULL] [i_25])))) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)7361)))) : (((/* implicit */int) (unsigned char)225))));
                    arr_88 [i_24] [i_25] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_71 [(short)16] [14] [i_24] [i_25]))) == (10722153973939967749ULL)));
                    arr_89 [i_25] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-30336)) ? (((/* implicit */int) (short)-30334)) : (((/* implicit */int) (short)32767))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))) : (((((/* implicit */_Bool) arr_37 [i_10] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_10] [i_12] [i_12] [i_24] [i_25]))) : (arr_62 [i_10] [i_12] [i_24] [i_25] [9])))));
                }
                /* LoopSeq 2 */
                for (unsigned int i_26 = 0; i_26 < 24; i_26 += 1) 
                {
                    var_56 = ((/* implicit */int) max((var_56), (((((/* implicit */_Bool) arr_63 [i_10] [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */int) arr_63 [i_10] [i_10] [i_24] [(_Bool)1] [i_12])) : (((/* implicit */int) (unsigned short)3304))))));
                    var_57 = ((/* implicit */unsigned int) (short)2103);
                    /* LoopSeq 2 */
                    for (signed char i_27 = 0; i_27 < 24; i_27 += 1) 
                    {
                        var_58 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_37 [i_10] [i_12]))));
                        var_59 = (short)-19342;
                    }
                    for (signed char i_28 = 0; i_28 < 24; i_28 += 1) 
                    {
                        arr_97 [i_10] [i_10] [i_24] [i_24] [0ULL] [i_28] = (short)2103;
                        arr_98 [i_10] [i_12] [i_24] [i_26] [i_28] = ((/* implicit */short) ((((/* implicit */_Bool) (~(-1111211246)))) ? (((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_10] [i_10] [i_10] [(_Bool)1] [i_28]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((7) >= (var_12)))))));
                        var_60 = ((/* implicit */_Bool) max((var_60), (((arr_82 [i_10]) <= (((/* implicit */int) var_0))))));
                    }
                }
                for (int i_29 = 0; i_29 < 24; i_29 += 2) 
                {
                    var_61 = ((/* implicit */unsigned int) max((var_61), (((/* implicit */unsigned int) (unsigned short)61937))));
                    var_62 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                    var_63 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_84 [i_12])) ? (((/* implicit */unsigned long long int) ((int) var_10))) : (arr_45 [i_29])));
                }
            }
            for (unsigned char i_30 = 1; i_30 < 22; i_30 += 1) 
            {
                arr_105 [i_10] [i_30] = (~(var_9));
                arr_106 [18ULL] [i_12] [i_12] [i_30] |= ((/* implicit */signed char) (~(((/* implicit */int) arr_43 [i_10] [i_30 + 2] [i_30] [i_10] [(signed char)16]))));
                var_64 = (i_30 % 2 == zero) ? (((arr_85 [i_30] [i_30] [i_30 - 1] [i_30 + 1] [i_10]) >> (((((/* implicit */int) arr_44 [i_30] [i_12] [i_30])) - (36893))))) : (((arr_85 [i_30] [i_30] [i_30 - 1] [i_30 + 1] [i_10]) >> (((((((/* implicit */int) arr_44 [i_30] [i_12] [i_30])) - (36893))) + (17308)))));
            }
            var_65 &= ((/* implicit */short) ((((/* implicit */_Bool) (short)-27970)) ? (((((/* implicit */_Bool) -1479275333)) ? (3870674919U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_10] [i_12]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_68 [i_10] [i_12] [i_12])))));
        }
        for (short i_31 = 4; i_31 < 22; i_31 += 2) 
        {
            var_66 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)0)), (arr_91 [13])))), (arr_93 [i_31 - 2] [i_31 - 2])))) ? (min(((-(12750182015966623204ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)234))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((short) var_13))) >= ((+(var_6)))))))));
            var_67 = ((((/* implicit */int) (short)24174)) / (((/* implicit */int) (_Bool)1)));
        }
    }
    var_68 = ((/* implicit */signed char) max((var_68), (((/* implicit */signed char) var_9))));
}
