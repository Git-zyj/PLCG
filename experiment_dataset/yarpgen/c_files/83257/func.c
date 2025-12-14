/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83257
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        var_16 = ((/* implicit */long long int) ((short) max((((/* implicit */unsigned long long int) (unsigned short)11299)), (arr_1 [(signed char)11]))));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) max((arr_0 [i_0 + 3] [i_0]), (arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 23; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 1; i_5 < 24; i_5 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250))) & (min((((/* implicit */unsigned int) (short)-27653)), (0U))))) & (((/* implicit */unsigned int) 0))));
                                arr_17 [i_4] [i_2 + 2] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((short) arr_12 [i_2] [i_4 + 1] [i_5 - 1] [i_5]))) + (2147483647))) >> (((((arr_2 [i_4] [i_5 + 1]) % (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4 + 1] [i_2] [i_2] [i_3] [i_4]))))) >> (((max((-6139491362480169513LL), (arr_6 [i_4] [i_4]))) - (3226095840426757881LL)))))));
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_3 [i_1]))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_6 = 1; i_6 < 24; i_6 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */short) (-(((/* implicit */int) arr_12 [i_1] [i_2 + 2] [0U] [i_6 - 1]))));
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((arr_21 [i_1] [i_3]), (((/* implicit */unsigned long long int) arr_11 [i_1] [i_1] [i_3] [i_6 - 1] [i_1])))))));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_7 [i_1] [i_1]))));
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)88)))))));
                    }
                    /* vectorizable */
                    for (long long int i_7 = 1; i_7 < 24; i_7 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_7] [i_3] [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_3] [i_7 + 1])) : (((/* implicit */int) arr_12 [i_3] [i_2] [i_2] [i_7]))))) ? (((/* implicit */unsigned long long int) arr_4 [i_3] [i_3] [i_3])) : (((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_2 - 1] [i_3] [i_7] [i_7])) ? (arr_19 [i_1] [i_1] [i_2] [i_3] [i_3] [i_7 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)43))))))))));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_3] [i_1] [i_1])) ? (((arr_6 [i_2] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_3] [(signed char)8] [i_1]))))) : (((-5125965356993494691LL) / (1475381208760588348LL)))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            var_26 -= ((/* implicit */_Bool) (~(((unsigned long long int) (short)0))));
                            var_27 = ((/* implicit */int) min((var_27), ((-(min((((/* implicit */int) ((unsigned short) (_Bool)0))), (arr_4 [i_9] [i_3] [i_1])))))));
                            arr_29 [(_Bool)1] [i_8] [i_1] [i_2 - 1] [i_1] = arr_19 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8];
                        }
                        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (~(arr_28 [i_1] [i_1] [i_3] [i_8] [i_2 - 1]))))));
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) arr_21 [i_2] [i_8]))));
                    }
                    /* vectorizable */
                    for (unsigned short i_10 = 2; i_10 < 24; i_10 += 1) 
                    {
                        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [12ULL]))));
                        arr_32 [i_1] [i_2] [(short)21] [i_10] = ((/* implicit */signed char) ((arr_31 [i_10] [i_10 - 2] [i_2 + 1] [i_1]) ^ (arr_31 [i_2] [i_2] [i_2 + 2] [i_2])));
                        var_31 = ((/* implicit */unsigned long long int) arr_13 [i_1] [i_1] [i_3] [i_10]);
                    }
                    for (unsigned char i_11 = 0; i_11 < 25; i_11 += 2) 
                    {
                        var_32 = ((/* implicit */_Bool) min((6837901193915297973ULL), (((/* implicit */unsigned long long int) (signed char)-58))));
                        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) arr_24 [i_1] [i_2] [i_2 + 1] [i_2] [i_11] [i_11]))));
                    }
                    arr_36 [i_1] [i_2 - 1] = ((/* implicit */long long int) ((unsigned short) arr_2 [i_3] [i_3]));
                    var_34 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_18 [i_1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_1] [i_1] [i_2 + 2] [i_3] [i_3]))) : (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) 1566633769)) : (2108376062350410811LL))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_12 = 0; i_12 < 25; i_12 += 2) 
        {
            var_35 *= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_19 [i_1] [i_12] [i_12] [i_1] [i_12] [i_1])) ? (((((/* implicit */int) (unsigned char)195)) ^ (((/* implicit */int) arr_20 [i_1] [10LL] [i_12] [i_12] [i_12] [i_12])))) : ((-(((/* implicit */int) (_Bool)1))))))));
            var_36 = ((/* implicit */unsigned short) arr_23 [i_1] [i_1] [i_1] [i_1]);
        }
        for (unsigned short i_13 = 0; i_13 < 25; i_13 += 1) 
        {
            var_37 = ((/* implicit */long long int) max((var_37), (((long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_1] [i_13])) >> (((((/* implicit */int) arr_22 [i_1] [i_13] [i_13] [i_13] [i_13])) + (39)))))) < (((((/* implicit */_Bool) arr_25 [i_13] [i_13] [i_13] [i_1] [i_1])) ? (15362300101043872388ULL) : (((/* implicit */unsigned long long int) arr_42 [i_1])))))))));
            var_38 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_8 [i_1] [i_1] [i_1] [i_1])) + (((((/* implicit */_Bool) arr_12 [i_13] [i_13] [11] [i_1])) ? (((arr_2 [i_13] [i_13]) - (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_1] [i_13] [i_13] [i_13] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_1] [i_1] [i_1] [i_1])))))));
            var_39 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_13])) ? (arr_41 [i_1] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_13] [i_1] [i_13])))))));
        }
        for (unsigned char i_14 = 0; i_14 < 25; i_14 += 2) 
        {
            var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) min(((unsigned short)8), (((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1])) <= (((/* implicit */int) arr_11 [i_1] [i_14] [i_14] [i_1] [i_1]))))))))));
            var_41 = ((/* implicit */short) ((0LL) <= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)12173))))));
        }
    }
    var_42 = ((/* implicit */int) ((unsigned long long int) min((((/* implicit */unsigned int) (signed char)0)), (4294967293U))));
    var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_12)) + (min((var_0), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_7)), (var_13)))))))))));
}
