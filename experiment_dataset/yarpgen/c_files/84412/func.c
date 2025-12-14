/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84412
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) ((_Bool) (signed char)93))) != (((((/* implicit */_Bool) arr_2 [i_0] [(unsigned char)10])) ? (arr_4 [i_0] [8]) : (arr_0 [i_0])))))) & (((/* implicit */int) ((((long long int) arr_0 [i_0])) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [(_Bool)0] [i_2])) ? (arr_0 [i_0]) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_1]))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */short) ((unsigned short) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) arr_2 [i_0] [i_4])) : (arr_7 [i_0] [i_1] [i_0]))) * (((/* implicit */long long int) ((arr_10 [(short)7]) / (arr_2 [i_0] [i_3])))))));
                                arr_13 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) ((((arr_1 [i_2 - 2] [i_4 + 1]) * (arr_1 [i_2 + 1] [i_4 + 2]))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) 7644284964789116508LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-68)))))));
                                arr_14 [6] [i_1] [i_1] [i_1] [i_0] [i_1] = ((((/* implicit */int) (signed char)68)) & (((/* implicit */int) (short)0)));
                                arr_15 [i_0] [i_0] [(unsigned char)6] [i_3] = (i_0 % 2 == zero) ? (((/* implicit */int) ((((((long long int) arr_1 [2LL] [i_2])) >> (((((((/* implicit */_Bool) arr_9 [10ULL] [i_1] [i_2] [i_3] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) arr_9 [i_0] [4ULL] [i_0] [i_0] [i_0])))) + (2102354932))))) & (((long long int) ((short) arr_7 [i_0] [i_1] [i_0])))))) : (((/* implicit */int) ((((((long long int) arr_1 [2LL] [i_2])) >> (((((((((/* implicit */_Bool) arr_9 [10ULL] [i_1] [i_2] [i_3] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) arr_9 [i_0] [4ULL] [i_0] [i_0] [i_0])))) - (2102354932))) + (1638283839))))) & (((long long int) ((short) arr_7 [i_0] [i_1] [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (signed char)-84)) != (((/* implicit */int) (signed char)-95))))) << (((((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) (signed char)-85)))) + (104)))));
    /* LoopSeq 2 */
    for (long long int i_5 = 4; i_5 < 13; i_5 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            arr_23 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_6])) ? (((((/* implicit */_Bool) arr_19 [i_5 - 3] [i_5 + 1])) ? (((/* implicit */int) arr_19 [i_5 - 2] [i_5 - 1])) : (((/* implicit */int) arr_19 [i_5 - 2] [i_5 - 4])))) : (((((/* implicit */_Bool) arr_18 [i_5 - 3])) ? (arr_18 [i_5 + 1]) : (arr_18 [i_5 + 1])))));
            var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5 - 4])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_6] [i_5])) || (((/* implicit */_Bool) (signed char)111))))) : (arr_18 [i_6])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)53)) ? (((/* implicit */int) (signed char)-102)) : (((/* implicit */int) (signed char)-96))))) ? (((/* implicit */int) arr_20 [i_5 - 4] [9LL] [i_5])) : (((/* implicit */int) (unsigned char)12)))) : (((((((/* implicit */int) (signed char)-122)) + (2147483647))) << (((((/* implicit */int) (signed char)95)) - (95))))));
        }
        for (short i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_18 [i_7])) ? (arr_22 [i_7]) : (arr_22 [i_5]))))) - (arr_17 [i_5 + 1] [i_5 + 1])));
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    arr_30 [11ULL] [i_7] [i_9] [i_9] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_21 [i_5] [i_8]))) / (((((/* implicit */int) arr_21 [i_8] [i_8])) / (((/* implicit */int) arr_19 [i_5 + 1] [i_9]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5] [i_7]))) : (arr_25 [i_5] [(unsigned char)6] [i_8])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_9])) ? (arr_25 [i_5] [i_7] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5] [i_5])))))) : (((arr_17 [i_7] [(short)12]) / (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_5 - 4]))))))) : (((long long int) arr_17 [8LL] [i_7]))));
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */int) (signed char)0)) + (((/* implicit */int) (unsigned char)255)))))));
                    var_19 *= ((/* implicit */int) ((((((((/* implicit */_Bool) (unsigned char)226)) ? (1137535880U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30))))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_7] [i_7])) ? (((/* implicit */int) arr_28 [i_8])) : (arr_18 [0LL])))))) / (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_28 [i_8])) ? (((/* implicit */int) arr_27 [i_5])) : (((/* implicit */int) arr_28 [i_8])))) * (((((/* implicit */_Bool) arr_26 [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_19 [i_5] [i_5])) : (((/* implicit */int) arr_27 [i_5 - 3])))))))));
                    /* LoopSeq 1 */
                    for (signed char i_10 = 0; i_10 < 14; i_10 += 3) 
                    {
                        arr_34 [i_9] [(unsigned char)4] [i_8] [i_9] [10LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_9])) ? (((/* implicit */int) arr_19 [i_5] [i_5 - 3])) : (((/* implicit */int) arr_19 [i_5] [i_5 - 3]))))) ? (((unsigned int) (signed char)-81)) : (((/* implicit */unsigned int) ((arr_31 [i_9]) / (((/* implicit */int) (signed char)53)))))));
                        var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_8])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_5] [i_7] [i_7] [i_8] [i_9] [i_10])) ? (arr_22 [i_5 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_5] [i_7] [i_8] [i_10])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5] [i_7] [i_8]))) : (arr_22 [i_5])))) : (arr_16 [i_5 - 3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((arr_33 [i_5 - 3] [i_5 - 3] [i_5] [i_5 - 4] [i_5] [i_5 - 2]) + (2147483647))) >> (((arr_31 [i_8]) + (1897048739)))))) <= (((arr_22 [i_9]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_8] [i_7] [i_7] [8LL])))))))))));
                    }
                    arr_35 [i_9] [13LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1945131941155127638ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116))) : (16501612132554423978ULL)))) ? (((((/* implicit */_Bool) arr_32 [i_9])) ? (arr_22 [i_5 - 2]) : (arr_22 [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_7] [i_7] [i_8])))))) ? (((long long int) ((((/* implicit */_Bool) arr_27 [i_5 + 1])) ? (arr_22 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5] [10LL])))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_5 - 1] [i_9] [i_9])) && (((/* implicit */_Bool) arr_20 [i_5 - 4] [i_7] [i_7]))))))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_11 = 0; i_11 < 14; i_11 += 3) 
                {
                    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (unsigned char)255))) ? (((((/* implicit */_Bool) arr_27 [i_5 + 1])) ? (arr_16 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_5] [i_5] [i_5]))))) : (((((/* implicit */_Bool) (unsigned char)118)) ? (16501612132554423978ULL) : (((/* implicit */unsigned long long int) -1))))))) ? (((((arr_31 [i_8]) + (2147483647))) >> (((arr_31 [i_8]) + (1897048736))))) : (((((/* implicit */int) (unsigned short)57853)) - (((/* implicit */int) (signed char)-117)))));
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-32766)) ? (16501612132554423996ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)4)))));
                }
                var_23 *= ((/* implicit */short) ((((((/* implicit */_Bool) arr_28 [i_8])) && (((/* implicit */_Bool) arr_18 [i_5 - 2])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_29 [i_8] [i_7] [i_7] [i_8])) <= (((/* implicit */int) arr_26 [i_5] [i_5] [i_5])))))) < (((((/* implicit */_Bool) (short)3211)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))))) : (((/* implicit */int) ((_Bool) arr_16 [i_5])))));
            }
        }
        var_24 = ((/* implicit */long long int) ((unsigned char) (short)-24146));
        arr_39 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 18792925))) ? (((/* implicit */int) arr_24 [i_5 + 1])) : (((((/* implicit */_Bool) arr_28 [i_5])) ? (arr_33 [i_5 + 1] [i_5 - 2] [i_5 - 4] [i_5 - 4] [i_5] [i_5]) : (((/* implicit */int) arr_32 [i_5]))))))) ? (((/* implicit */unsigned int) arr_36 [i_5 - 3] [i_5 - 4] [i_5] [i_5 - 1] [i_5 - 1] [i_5])) : (((((((/* implicit */_Bool) arr_21 [i_5] [6ULL])) && (((/* implicit */_Bool) arr_38 [i_5] [i_5 - 3] [i_5])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_32 [i_5])) * (((/* implicit */int) arr_27 [(unsigned char)2]))))) : (((unsigned int) (short)16921))))));
    }
    for (signed char i_12 = 1; i_12 < 22; i_12 += 1) 
    {
        var_25 = ((/* implicit */unsigned short) arr_41 [i_12]);
        var_26 += ((/* implicit */short) ((((/* implicit */_Bool) arr_41 [i_12 - 1])) ? (((/* implicit */int) arr_40 [10])) : (((/* implicit */int) arr_41 [i_12]))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_13 = 3; i_13 < 23; i_13 += 2) 
    {
        arr_44 [i_13] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (short)8160)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) (signed char)-107)))) | (((((/* implicit */_Bool) arr_42 [i_13] [i_13])) ? (((/* implicit */int) arr_43 [i_13 - 2])) : (((/* implicit */int) arr_42 [i_13] [i_13 - 3])))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_13 + 1] [i_13 - 2])) ? (((/* implicit */int) arr_42 [i_13] [(unsigned short)5])) : (((/* implicit */int) arr_42 [8] [8]))))) ? (((((/* implicit */_Bool) arr_43 [i_13 - 3])) ? (((/* implicit */int) arr_42 [i_13] [i_13])) : (((/* implicit */int) arr_42 [i_13 - 3] [i_13 - 2])))) : (((/* implicit */int) ((signed char) arr_42 [i_13] [i_13]))))) - (35)))));
        arr_45 [i_13] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (signed char)77)) : (((/* implicit */int) (short)24146)))));
        /* LoopNest 2 */
        for (short i_14 = 4; i_14 < 22; i_14 += 2) 
        {
            for (long long int i_15 = 2; i_15 < 23; i_15 += 3) 
            {
                {
                    arr_51 [i_13] [i_14] [i_13 + 1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_14 - 3] [i_14 - 4])) ? (((/* implicit */int) arr_50 [i_14 - 3] [i_14 - 4] [i_14] [i_14])) : (((/* implicit */int) arr_48 [i_14 - 3] [i_14] [i_14]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)15)) ? (6216837237093231946ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24143))))))));
                    arr_52 [i_15] [i_14] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24146)) ? (((/* implicit */int) (signed char)-87)) : (((/* implicit */int) (short)-24162))))) ? (((((/* implicit */_Bool) arr_49 [i_15 - 1] [i_14] [i_14 - 1])) ? (((/* implicit */int) arr_49 [i_15 - 1] [i_14] [i_14 - 4])) : (((/* implicit */int) arr_49 [i_15 - 1] [i_14] [i_14 - 2])))) : (((((/* implicit */_Bool) arr_49 [i_15 + 1] [i_15 + 1] [i_14 + 1])) ? (((/* implicit */int) arr_49 [i_15 - 1] [i_14] [i_14 - 2])) : (((/* implicit */int) arr_49 [i_15 - 1] [i_14 - 2] [i_14 + 2])))));
                }
            } 
        } 
    }
    for (long long int i_16 = 3; i_16 < 12; i_16 += 4) 
    {
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_36 [i_16 - 3] [i_16] [i_16 - 1] [i_16] [i_16] [(short)8]) - (((/* implicit */int) arr_54 [i_16] [i_16 - 1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_40 [i_16])) * (((/* implicit */int) arr_50 [i_16] [i_16] [i_16] [i_16]))))) ? (((/* implicit */int) ((arr_33 [2LL] [i_16 + 1] [i_16 - 2] [i_16] [i_16 + 1] [i_16]) == (((/* implicit */int) arr_50 [11] [i_16] [i_16] [i_16]))))) : (arr_36 [i_16 - 2] [(_Bool)1] [i_16 - 3] [(_Bool)1] [(_Bool)1] [i_16])))) : (((long long int) ((long long int) (signed char)-87)))));
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)668)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-78)) + (((/* implicit */int) (signed char)117))))) : (((1945131941155127613ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251)))))));
        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [4LL])) ? (((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-110))) : (5106768842941730617ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [6U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_16 - 2] [i_16 - 3] [i_16]))) : (arr_25 [i_16] [i_16 - 3] [i_16])))))))));
    }
}
