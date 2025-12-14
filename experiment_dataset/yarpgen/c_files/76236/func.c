/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76236
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_2)) : (var_11)))))) | ((+(((((/* implicit */_Bool) 7571847530683282308LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_6)))))));
    var_15 = ((/* implicit */long long int) var_3);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_16 = -1546826312;
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_0 [i_0])) : (var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)8)))))) : (((((/* implicit */_Bool) 1048575)) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (12531653203987428828ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((arr_0 [i_0]), (((/* implicit */unsigned int) (unsigned char)209))))) * (max((((/* implicit */long long int) (unsigned short)13012)), (var_7))))))));
    }
    for (short i_1 = 1; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_17 += ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1])) + (898861384)))), (min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101))) / (arr_6 [(unsigned char)12]))), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_7 [i_1])), ((unsigned char)48))))))));
        /* LoopSeq 2 */
        for (long long int i_2 = 3; i_2 < 11; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 2; i_3 < 12; i_3 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_18 = ((/* implicit */int) max((((((/* implicit */_Bool) max((0), (-1048566)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) & (arr_13 [i_1 + 2] [i_2] [i_2 - 3] [i_3] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((5915090869722122788ULL), (((/* implicit */unsigned long long int) var_10))))) ? (arr_6 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)16)), ((unsigned short)65535))))))))));
                    arr_14 [i_1] [i_1] = (((~(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)120)), (arr_10 [i_1] [i_2] [i_3] [i_1])))))) * (max((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), ((-(((/* implicit */int) arr_5 [i_1])))))));
                }
                /* LoopSeq 2 */
                for (long long int i_5 = 2; i_5 < 11; i_5 += 1) 
                {
                    var_19 = ((/* implicit */signed char) (((((-(var_2))) + (((-1942545824) + (((/* implicit */int) var_1)))))) % (((/* implicit */int) var_12))));
                    arr_18 [i_1] [i_1] [i_1] [i_1] [6] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((arr_6 [i_1]) >> (((max((1663095731), (((/* implicit */int) var_9)))) - (1663095711))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_9 [i_2] [i_3])) : (((/* implicit */int) arr_12 [i_1] [i_1] [i_3] [i_5 - 2] [i_2])))) > ((-(((/* implicit */int) arr_7 [i_5]))))))))));
                    arr_19 [i_1] [(unsigned short)1] [i_3] [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) arr_5 [i_1]);
                }
                /* vectorizable */
                for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    arr_23 [i_6] [i_3 - 1] [i_1 + 3] [i_1] = ((/* implicit */int) (+(((arr_13 [i_1] [i_2 - 2] [i_3] [i_1 - 1] [i_1]) - (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1 + 1] [i_1])))))));
                    arr_24 [i_6] [i_1] [i_6] [i_3] [(signed char)4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_13))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_10)))))));
                    var_20 = ((((/* implicit */int) ((unsigned short) 1942545839))) + (((/* implicit */int) (!(((/* implicit */_Bool) (short)32767))))));
                }
            }
            for (unsigned short i_7 = 2; i_7 < 12; i_7 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_8 = 1; i_8 < 13; i_8 += 1) 
                {
                    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 3) 
                    {
                        {
                            var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((var_11) + (9223372036854775807LL))) >> (((8953466239412075935ULL) - (8953466239412075928ULL))))) << (((((((/* implicit */_Bool) arr_6 [i_7])) ? (1942545823) : (1318353510))) - (1942545821)))))) || (((/* implicit */_Bool) ((arr_28 [i_1] [i_7 - 2] [i_8 + 1] [i_7]) + ((-(((/* implicit */int) (unsigned short)65518)))))))));
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_11)), (12531653203987428838ULL))) - (((/* implicit */unsigned long long int) ((-334018452) / (((/* implicit */int) arr_9 [i_2] [i_7])))))))) ? (max((1094671915U), (((/* implicit */unsigned int) (short)-12879)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 463105326)) ? (((((/* implicit */int) (unsigned char)255)) << (((12531653203987428858ULL) - (12531653203987428856ULL))))) : (1048543))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */signed char) (((+((+(arr_22 [i_1] [i_2] [i_1]))))) > ((~(((((/* implicit */_Bool) 1073741823)) ? (((/* implicit */int) arr_27 [i_7] [i_7] [2] [i_1])) : (((/* implicit */int) var_1))))))));
                var_24 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)1), (((/* implicit */unsigned short) var_9)))))) <= (arr_16 [i_7 - 2] [i_7 + 2]))))) % ((+((((_Bool)1) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
                arr_34 [i_1] [11LL] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) 7))));
            }
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) min((((((/* implicit */_Bool) arr_27 [i_1] [i_2] [i_1] [i_1])) || (((/* implicit */_Bool) (short)12874)))), ((!(((/* implicit */_Bool) arr_15 [i_2 - 1] [i_2] [i_2] [i_1]))))))) >> (((((((/* implicit */_Bool) 1048565)) ? (var_6) : (((/* implicit */unsigned long long int) var_13)))) / (((/* implicit */unsigned long long int) ((16383) - (((/* implicit */int) arr_25 [i_1] [i_1] [i_1])))))))));
        }
        for (unsigned short i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            var_26 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_22 [i_1] [(unsigned char)12] [i_10])) ? (-9223372036854775806LL) : (((/* implicit */long long int) ((var_2) + (((/* implicit */int) (unsigned short)65486))))))) / ((+(((arr_16 [i_1] [i_10]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))));
            /* LoopSeq 1 */
            for (int i_11 = 2; i_11 < 13; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 4) 
                {
                    for (unsigned short i_13 = 1; i_13 < 12; i_13 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned long long int) (unsigned short)65534);
                            var_28 = ((/* implicit */int) ((var_6) * (((/* implicit */unsigned long long int) -1))));
                            var_29 |= ((/* implicit */long long int) ((int) ((min((arr_40 [i_11 - 2]), (((/* implicit */int) (short)32767)))) ^ ((~(arr_40 [i_13]))))));
                        }
                    } 
                } 
                arr_45 [i_1] [i_11] [i_1] = ((/* implicit */unsigned int) (_Bool)1);
            }
        }
    }
    for (short i_14 = 1; i_14 < 11; i_14 += 2) /* same iter space */
    {
        arr_49 [i_14 + 1] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) max((arr_26 [i_14] [i_14] [i_14]), (arr_25 [i_14] [i_14 + 2] [(unsigned char)2]))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)13)) / (arr_28 [i_14] [i_14] [i_14] [2ULL])))) ? (((((arr_43 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]) + (9223372036854775807LL))) << (((arr_38 [i_14]) - (1131456657947552088LL))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_20 [i_14] [i_14] [i_14] [(unsigned char)2] [12ULL]))))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_15 = 0; i_15 < 14; i_15 += 4) 
        {
            arr_52 [i_14] [i_14] [i_15] = ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_14 + 2] [i_15] [i_14] [i_15] [i_15] [i_14] [12]))) : (6990092204195149482LL))) % (((/* implicit */long long int) 408516357U))));
            var_30 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_47 [i_14 - 1])) : (((/* implicit */int) arr_47 [i_14 + 1]))));
        }
        /* vectorizable */
        for (long long int i_16 = 1; i_16 < 10; i_16 += 2) 
        {
            var_31 -= ((/* implicit */long long int) (~(arr_41 [(_Bool)0] [i_14 + 2] [i_14 + 3] [i_16 + 2])));
            /* LoopSeq 3 */
            for (signed char i_17 = 4; i_17 < 12; i_17 += 3) 
            {
                var_32 = ((/* implicit */unsigned long long int) arr_57 [i_14] [6] [3]);
                var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_51 [i_14] [i_16]) << (((((((/* implicit */int) (signed char)-72)) + (80))) - (7))))))));
                arr_58 [i_17] [(unsigned short)3] [3LL] [i_14] |= ((/* implicit */unsigned int) -6990092204195149482LL);
                var_34 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_33 [i_14 + 3] [(unsigned char)12] [i_14] [i_14 + 1] [i_14] [i_14]))))) / (((unsigned long long int) arr_9 [(unsigned short)10] [i_16]))));
            }
            for (unsigned short i_18 = 1; i_18 < 13; i_18 += 3) 
            {
                var_35 = ((/* implicit */int) -6990092204195149498LL);
                /* LoopSeq 3 */
                for (long long int i_19 = 0; i_19 < 14; i_19 += 3) /* same iter space */
                {
                    arr_64 [(signed char)6] [i_19] [(unsigned short)12] [i_19] [i_19] = ((((((/* implicit */_Bool) arr_55 [i_14])) ? (arr_43 [i_14] [i_14] [i_14] [i_14] [i_16 + 4] [i_18] [i_19]) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_16] [(unsigned short)10]))))) / (((/* implicit */long long int) (+(2147483625)))));
                    var_36 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_37 [i_14 + 1]) : (((/* implicit */unsigned long long int) -463105323))))) ? (((arr_36 [i_14 - 1] [12ULL]) ? (((/* implicit */unsigned long long int) -448279488)) : (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                }
                for (long long int i_20 = 0; i_20 < 14; i_20 += 3) /* same iter space */
                {
                    var_37 -= ((/* implicit */unsigned long long int) 1759752353);
                    arr_67 [6ULL] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 1628826444704255092ULL)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) arr_60 [i_14] [i_14] [i_18] [(unsigned char)6]))))));
                }
                for (long long int i_21 = 0; i_21 < 14; i_21 += 3) /* same iter space */
                {
                    arr_71 [i_14] [i_16] [i_18] [i_18] [i_21] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_38 [i_14 + 2]))));
                    arr_72 [i_14] [i_14] [i_18] [i_21] = ((/* implicit */unsigned short) (signed char)64);
                }
                arr_73 [i_14] [i_14] = ((/* implicit */unsigned int) ((signed char) (~(var_2))));
            }
            for (unsigned int i_22 = 2; i_22 < 13; i_22 += 1) 
            {
                arr_76 [i_14 + 2] [i_16 + 2] [i_22] = ((((/* implicit */int) ((((/* implicit */_Bool) arr_22 [(short)6] [0ULL] [i_22])) || (((/* implicit */_Bool) var_5))))) % (((int) 1028360982512994614ULL)));
                arr_77 [i_16] [i_16] [i_16] [i_16 + 1] = (~(((/* implicit */int) (!(((/* implicit */_Bool) 3074233262U))))));
            }
            var_38 |= ((((((/* implicit */_Bool) arr_28 [i_14] [i_14 + 3] [0] [(unsigned short)10])) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) (unsigned char)153)))) >> (((((((/* implicit */_Bool) -7936485682414638114LL)) ? (4095872196U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) - (4095872187U))));
            /* LoopNest 2 */
            for (unsigned char i_23 = 1; i_23 < 12; i_23 += 1) 
            {
                for (unsigned char i_24 = 0; i_24 < 14; i_24 += 3) 
                {
                    {
                        var_39 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_30 [i_16] [8LL] [i_16] [i_16] [i_16] [i_16 + 4])) <= (((/* implicit */int) arr_30 [i_16] [12LL] [i_16 + 4] [i_16] [i_16] [i_16 - 1]))));
                        /* LoopSeq 2 */
                        for (unsigned char i_25 = 0; i_25 < 14; i_25 += 4) 
                        {
                            var_40 = ((/* implicit */unsigned short) ((4294967283U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_25] [i_25] [i_25] [i_25] [i_25])))));
                            var_41 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_60 [i_14] [i_14] [i_23] [5ULL])) ? (var_11) : (-1LL))) + (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_14 + 3])))));
                            arr_87 [i_14] [i_16] [i_23] [i_24] [i_25] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(-463105326))))));
                        }
                        for (unsigned int i_26 = 3; i_26 < 13; i_26 += 4) 
                        {
                            var_42 = ((/* implicit */unsigned char) (+(arr_40 [i_24])));
                            arr_90 [i_26] [i_16] [i_26] [i_24] [i_26] [i_16] [i_26] = ((/* implicit */unsigned long long int) var_2);
                        }
                    }
                } 
            } 
            var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [(unsigned short)10] [i_16 + 1] [(unsigned short)10])) ? (((((/* implicit */int) arr_79 [i_16] [i_16] [i_16] [i_16])) + (-448279471))) : (((/* implicit */int) ((unsigned short) arr_50 [i_14] [i_16] [i_16])))));
        }
        for (unsigned int i_27 = 2; i_27 < 12; i_27 += 4) 
        {
            arr_94 [i_27] = ((/* implicit */int) ((((/* implicit */unsigned int) (-(-103040095)))) * ((~(((((/* implicit */_Bool) arr_9 [i_14] [i_27 - 2])) ? (32326927U) : (((/* implicit */unsigned int) -393975241))))))));
            var_44 += ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_56 [i_14] [i_27] [i_27 - 1] [i_14])) || (((/* implicit */_Bool) (-2147483647 - 1)))))) <= (((((/* implicit */int) arr_15 [i_14] [i_27] [i_27 - 2] [i_27])) / (((/* implicit */int) arr_15 [i_27] [i_27] [i_27 - 2] [i_27]))))));
            arr_95 [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_6 [i_27])) / (var_13)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 22U)) && (((/* implicit */_Bool) 9223372036854775807LL)))))) | (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8191))) : (10449671165789931553ULL))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_9)) & (((/* implicit */int) (unsigned short)27960)))))))));
        }
        var_45 = ((/* implicit */unsigned long long int) min((var_45), (max((((/* implicit */unsigned long long int) ((int) (+(arr_40 [i_14]))))), (var_6)))));
        arr_96 [i_14] [i_14] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */int) arr_12 [i_14] [(unsigned short)0] [i_14] [i_14] [i_14])) / (((/* implicit */int) arr_5 [(unsigned char)2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)8)))))))) > (((((/* implicit */_Bool) ((((var_2) + (2147483647))) >> (((arr_16 [i_14] [(unsigned short)0]) + (1241103011208108061LL)))))) ? (((/* implicit */unsigned int) ((((var_2) + (2147483647))) >> (((((/* implicit */int) (unsigned short)8191)) - (8177)))))) : (max((arr_50 [i_14] [i_14] [i_14 + 2]), (((/* implicit */unsigned int) arr_29 [(signed char)2] [6U]))))))));
    }
}
