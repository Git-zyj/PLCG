/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78067
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
    var_18 = ((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */long long int) var_10)), ((+(var_16))))));
    var_19 = ((/* implicit */signed char) (~(((/* implicit */int) var_10))));
    var_20 = ((/* implicit */unsigned short) ((min((((((/* implicit */long long int) ((/* implicit */int) var_10))) >= (var_1))), (var_6))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : ((~(((long long int) var_9))))));
    var_21 = ((/* implicit */short) var_15);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(min((var_17), (var_17))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? ((~(((arr_4 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) var_12))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_1)))) ? (((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_3 [i_1] [i_1 - 1])))))));
            var_24 *= ((/* implicit */unsigned int) min(((-((-(arr_4 [i_1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_6)), (arr_1 [(signed char)13])))) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) >= (arr_4 [i_0])))))))));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                /* LoopSeq 2 */
                for (signed char i_3 = 3; i_3 < 10; i_3 += 4) 
                {
                    var_25 = var_14;
                    arr_9 [i_3] = ((/* implicit */signed char) var_10);
                    arr_10 [i_3] [(unsigned char)12] [i_2] [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_8 [i_3 + 2] [i_2] [i_1 - 1]), (arr_8 [i_0] [i_2] [i_3 + 3])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_3 [(signed char)13] [i_0])), (arr_0 [i_0] [i_3])))))))) : (max((arr_6 [i_0] [i_1 - 1] [i_2]), (((/* implicit */long long int) ((unsigned short) var_17)))))));
                    arr_11 [i_3] [i_3] [i_2] [i_3 - 3] = ((/* implicit */unsigned short) min((((long long int) min((arr_6 [i_0] [i_2] [i_3]), (((/* implicit */long long int) var_3))))), (((/* implicit */long long int) var_8))));
                }
                for (int i_4 = 2; i_4 < 11; i_4 += 3) 
                {
                    var_26 = arr_14 [i_4] [(_Bool)1] [2ULL] [2ULL];
                    /* LoopSeq 3 */
                    for (int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        var_27 = ((/* implicit */signed char) (~(((/* implicit */int) ((short) arr_1 [i_1 - 1])))));
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_8 [i_5] [i_4 + 3] [i_1 - 1])), (var_16)))) ? (((min((var_17), (arr_12 [i_1]))) ? (((/* implicit */int) ((unsigned char) arr_8 [i_0] [i_0] [i_2]))) : (((/* implicit */int) max((var_11), (var_11)))))) : (((((/* implicit */int) min((var_13), (((/* implicit */short) var_12))))) + (((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] [i_5])) ? (((/* implicit */int) arr_12 [i_0])) : (arr_0 [i_4] [(unsigned short)7]))))))))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) var_8);
                        var_30 = ((/* implicit */short) (~(var_15)));
                    }
                    for (short i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [(signed char)5] [i_2] [i_0] [i_0] [i_4 + 3] [i_1 + 1])) ^ (((/* implicit */int) arr_1 [i_4 - 1]))))) ? (var_15) : (((/* implicit */int) max((arr_22 [(unsigned char)0] [(_Bool)1] [(short)4] [(unsigned char)0] [i_1 - 1] [i_1 + 1]), (arr_22 [i_0] [i_0] [i_1] [i_1 + 1] [i_1] [i_1 + 1])))))))));
                        var_32 = ((/* implicit */signed char) var_2);
                        arr_25 [(short)12] [i_1 + 1] [6ULL] [i_1 + 1] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_5)) ? (arr_13 [i_0] [i_4 + 3] [i_1 - 1] [i_0]) : (((/* implicit */unsigned long long int) arr_6 [i_1 - 1] [i_4 + 2] [i_2])))));
                    }
                    var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) var_4))));
                    var_34 = ((/* implicit */long long int) (!(arr_12 [i_0])));
                }
                var_35 = ((/* implicit */short) var_5);
                /* LoopSeq 2 */
                for (unsigned short i_8 = 4; i_8 < 13; i_8 += 3) /* same iter space */
                {
                    arr_28 [i_8] [11] [(signed char)12] [11LL] [i_8 - 1] = ((/* implicit */unsigned short) arr_21 [i_0] [(unsigned short)5] [i_0] [i_0] [i_0] [i_0]);
                    var_36 = ((/* implicit */long long int) min((var_36), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_5 [i_2] [i_8 - 3])))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 1]))) : (arr_4 [i_2]))) : ((((_Bool)1) ? (-6573427065663710560LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                    var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned short) arr_14 [(unsigned short)7] [i_1] [7U] [(signed char)9])), (var_4))), (((/* implicit */unsigned short) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_6)))))))) ? (((/* implicit */int) ((unsigned short) ((unsigned long long int) arr_20 [i_0] [i_0] [i_8])))) : (((/* implicit */int) ((_Bool) arr_12 [i_1 + 1])))));
                    arr_29 [i_0] [13LL] [i_2] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_26 [i_8] [i_1 - 1] [i_2] [i_8 - 1]))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13)))))));
                    arr_30 [i_8] [i_8] = ((/* implicit */long long int) arr_14 [(signed char)3] [(signed char)3] [(unsigned char)3] [0ULL]);
                }
                /* vectorizable */
                for (unsigned short i_9 = 4; i_9 < 13; i_9 += 3) /* same iter space */
                {
                    var_38 = (-(4294967295U));
                    var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_2] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((int) var_8))) : (arr_17 [i_1 + 1])));
                }
                arr_33 [i_1] [i_1] [i_0] = ((/* implicit */short) ((_Bool) var_4));
                arr_34 [i_0] [i_1 + 1] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((long long int) arr_7 [i_0] [i_1] [i_1 - 1] [i_1]))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (arr_17 [i_2])))))));
            }
            arr_35 [i_1] [i_1] = ((/* implicit */_Bool) var_7);
        }
        /* vectorizable */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_40 *= ((/* implicit */unsigned int) arr_22 [5LL] [(unsigned short)13] [i_0] [i_0] [i_0] [i_0]);
            arr_40 [(unsigned char)8] [i_10] = arr_16 [i_0] [i_0] [3U];
            /* LoopSeq 2 */
            for (unsigned int i_11 = 0; i_11 < 14; i_11 += 4) 
            {
                var_41 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))));
                /* LoopSeq 2 */
                for (unsigned int i_12 = 0; i_12 < 14; i_12 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_13 = 0; i_13 < 14; i_13 += 2) 
                    {
                        var_42 = ((((/* implicit */_Bool) var_16)) ? (arr_46 [i_13] [i_10] [i_11] [i_10] [i_13]) : (((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_3))))));
                        var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) (!(((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_12] [i_13] [i_11])))))));
                        var_44 *= ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) arr_32 [i_0] [i_10])))));
                        var_45 ^= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)65511))));
                        var_46 += ((/* implicit */short) ((var_17) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_11]))));
                    }
                    var_47 = ((/* implicit */_Bool) min((var_47), (((_Bool) arr_37 [i_11] [i_12] [i_11]))));
                    arr_49 [i_0] [i_11] [i_0] |= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)251))) : (4442394817519275156LL))));
                }
                for (signed char i_14 = 0; i_14 < 14; i_14 += 3) 
                {
                    arr_53 [i_0] [i_0] [i_10] [i_11] [(unsigned short)13] [i_10] = ((/* implicit */short) (~((~(((/* implicit */int) var_11))))));
                    arr_54 [i_0] [i_11] [i_0] [i_14] &= ((/* implicit */int) arr_39 [i_0]);
                    var_48 &= ((/* implicit */long long int) (-(((/* implicit */int) var_14))));
                    var_49 += ((/* implicit */unsigned char) ((int) var_8));
                    /* LoopSeq 2 */
                    for (unsigned short i_15 = 0; i_15 < 14; i_15 += 4) /* same iter space */
                    {
                        arr_58 [i_11] [2ULL] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_10])) ? (arr_13 [i_15] [i_10] [i_10] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_0] [i_0] [i_15])))))) && (((/* implicit */_Bool) ((unsigned short) (short)8380)))));
                        arr_59 [(unsigned char)13] [(unsigned short)5] [(unsigned char)13] [(unsigned char)13] [i_15] [i_10] [i_15] = ((/* implicit */signed char) ((int) arr_36 [i_10]));
                        var_50 = ((/* implicit */long long int) min((var_50), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [i_15])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [(unsigned short)4]))))))));
                        arr_60 [i_10] [i_10] [i_11] [i_10] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_10] [i_11]))) : (var_1)));
                        var_51 = ((/* implicit */unsigned char) max((var_51), (((/* implicit */unsigned char) ((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
                    }
                    for (unsigned short i_16 = 0; i_16 < 14; i_16 += 4) /* same iter space */
                    {
                        var_52 ^= ((/* implicit */short) ((long long int) arr_13 [i_0] [i_14] [i_0] [i_0]));
                        var_53 = ((/* implicit */unsigned short) var_6);
                        var_54 = ((/* implicit */int) min((var_54), ((-(((/* implicit */int) var_14))))));
                    }
                }
            }
            for (signed char i_17 = 0; i_17 < 14; i_17 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_18 = 2; i_18 < 10; i_18 += 1) 
                {
                    arr_69 [i_0] [i_10] [i_17] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_41 [i_0] [(unsigned short)1] [i_10])) + (((/* implicit */int) var_17)))))));
                    arr_70 [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_0] [i_18] [i_0] [i_18 - 2] [i_18 - 1] [i_18 + 2] [i_18 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_18 - 1] [i_18] [i_0] [i_18 + 1] [i_17] [i_0]))) : (arr_44 [i_10])));
                    var_55 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)8378)) ? (((/* implicit */int) (unsigned char)141)) : (((/* implicit */int) (signed char)47))));
                }
                for (short i_19 = 0; i_19 < 14; i_19 += 4) 
                {
                    arr_73 [i_10] [(signed char)2] [i_10] [i_10] = (~(arr_65 [i_0] [i_17] [i_10] [i_0]));
                    /* LoopSeq 2 */
                    for (unsigned short i_20 = 0; i_20 < 14; i_20 += 3) 
                    {
                        var_56 *= ((/* implicit */unsigned long long int) arr_21 [i_19] [i_19] [i_19] [(signed char)6] [i_10] [i_0]);
                        arr_77 [i_0] [i_10] [i_17] [i_17] [i_17] [(unsigned char)6] [i_20] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_63 [i_0] [i_0] [i_0] [i_17] [i_17] [i_10] [i_20]))));
                        var_57 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? ((~(((/* implicit */int) arr_21 [i_0] [i_10] [i_17] [i_0] [i_17] [i_17])))) : (((1125650560) / (((/* implicit */int) (unsigned char)143))))));
                        arr_78 [i_10] [i_10] [i_10] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_1)))) ? (((((/* implicit */_Bool) arr_31 [4U] [4U] [7LL] [7LL] [i_19] [7LL])) ? (arr_27 [i_0] [(_Bool)1]) : (((/* implicit */unsigned long long int) var_5)))) : (var_9)));
                        arr_79 [i_0] [i_10] [i_10] [i_19] [i_10] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8381)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)243))) : (3405163370U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_11)))) : (((long long int) var_14)));
                    }
                    for (short i_21 = 2; i_21 < 13; i_21 += 3) 
                    {
                        var_58 = ((/* implicit */unsigned char) arr_37 [i_0] [i_0] [i_17]);
                        arr_83 [i_10] [i_10] [i_10] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_50 [i_0] [4LL] [i_17] [i_10])) ? (((/* implicit */int) arr_12 [12ULL])) : (((/* implicit */int) var_8))))));
                    }
                }
                arr_84 [i_17] [i_10] [i_0] = (-(((var_16) % (((/* implicit */long long int) arr_31 [i_0] [(signed char)13] [i_10] [i_0] [i_0] [i_0])))));
            }
        }
    }
}
