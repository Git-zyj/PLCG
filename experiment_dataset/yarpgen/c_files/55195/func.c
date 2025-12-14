/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55195
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
    for (int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) arr_0 [i_0 - 2]);
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */long long int) arr_0 [i_0])) | (arr_1 [i_0]))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            arr_16 [i_4] [i_1] [(unsigned char)17] [i_1] [i_1] = ((18288393929223627800ULL) * (((/* implicit */unsigned long long int) 126976)));
                            var_15 ^= ((/* implicit */signed char) arr_9 [i_1 + 1] [i_2] [4] [i_3 + 1]);
                        }
                        var_16 |= ((/* implicit */unsigned char) arr_3 [i_1 + 1]);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        arr_19 [i_6] [i_1] [i_1] [i_1] = ((/* implicit */int) arr_4 [i_1] [i_1 - 1]);
                        arr_20 [i_1] [i_1] [i_1] [i_6] = ((/* implicit */short) arr_10 [i_1] [i_1] [(unsigned short)0]);
                    }
                    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        arr_24 [i_1 - 1] [i_1] [i_1 - 1] [i_1] = ((/* implicit */_Bool) min((arr_9 [i_3 + 1] [i_1] [i_1] [i_1 - 1]), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (-126979))))));
                        arr_25 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) -6975738703916020041LL)), (18288393929223627799ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_1])) ^ (((/* implicit */int) arr_23 [i_1])))))))) || (((/* implicit */_Bool) (-(158350144485923812ULL))))));
                        var_17 ^= ((/* implicit */long long int) (~(((((((/* implicit */int) (short)14181)) / (var_11))) & (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_11 [0] [0])))))))));
                    }
                    for (unsigned char i_8 = 2; i_8 < 18; i_8 += 3) 
                    {
                        arr_29 [i_1] [i_3] [i_2] [i_1] = ((/* implicit */long long int) var_0);
                        arr_30 [i_1] [i_1] [i_3] [(_Bool)0] [i_8] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((18288393929223627787ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 1])))))) ? (arr_11 [i_1 + 1] [i_8 + 1]) : (((((/* implicit */_Bool) (short)8685)) ? (arr_11 [i_1 + 1] [i_8 + 3]) : (((/* implicit */long long int) var_11))))));
                        var_18 = ((/* implicit */unsigned char) (unsigned short)45325);
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) arr_18 [i_2]);
                        var_20 ^= ((((/* implicit */_Bool) arr_9 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_1 - 1] [i_1 - 1] [i_1 - 1] [4] [i_3] [i_3] [4])) ? (((/* implicit */int) arr_13 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_8 [(unsigned char)0] [(unsigned char)0]))))) : (((((/* implicit */_Bool) arr_32 [i_1] [i_2] [i_1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_1] [i_1] [(unsigned short)12] [i_9]))) : (arr_12 [8U] [i_2] [i_2] [i_2] [i_3] [i_9]))));
                        /* LoopSeq 3 */
                        for (unsigned int i_10 = 1; i_10 < 20; i_10 += 3) 
                        {
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1 - 1])) >> (((/* implicit */int) (_Bool)1))));
                            var_22 = ((/* implicit */short) min((var_22), (var_6)));
                            arr_35 [i_1] [i_2] [i_1] [i_3] [i_9] [i_3] = ((/* implicit */int) ((short) arr_26 [i_1 + 1] [i_10 + 1] [i_10 - 1] [16] [i_10 - 1] [4LL]));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_1])))));
                        }
                        for (signed char i_11 = 0; i_11 < 21; i_11 += 3) 
                        {
                            var_24 = ((/* implicit */signed char) var_9);
                            arr_38 [i_1] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_6 [i_1] [i_2]))))));
                        }
                        for (unsigned int i_12 = 0; i_12 < 21; i_12 += 3) 
                        {
                            var_25 = ((/* implicit */signed char) var_2);
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((arr_27 [i_2] [i_2] [(unsigned short)9] [i_3 + 1] [i_9] [i_2]) * (((arr_14 [i_9]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_12]))))))))));
                            var_27 ^= ((/* implicit */short) ((((/* implicit */int) var_9)) - (((1783505998) / (((/* implicit */int) arr_39 [i_1] [i_2] [i_3] [i_2] [i_1]))))));
                        }
                    }
                    /* vectorizable */
                    for (short i_13 = 4; i_13 < 19; i_13 += 3) 
                    {
                        arr_45 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)127)) * (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 1 */
                        for (int i_14 = 0; i_14 < 21; i_14 += 3) 
                        {
                            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (~(arr_41 [i_1] [i_2] [i_2] [8LL] [i_13 + 1]))))));
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 12LL)) : (((unsigned long long int) var_2))));
                        }
                        arr_49 [i_1] [4] [i_1] [i_1] [i_1 - 1] [i_1] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_47 [i_1] [i_1] [i_2] [i_1 - 1] [i_1 - 1] [i_1] [11ULL]))))));
                        arr_50 [(short)4] [i_3 + 1] [(short)4] [(signed char)2] |= ((/* implicit */unsigned char) (+(((/* implicit */int) ((126969) <= (((/* implicit */int) arr_7 [i_1] [i_1] [i_1])))))));
                    }
                    for (unsigned char i_15 = 1; i_15 < 19; i_15 += 3) 
                    {
                        var_30 = ((((_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (-1986196050)))) ? (((/* implicit */int) ((1783506013) >= (416027635)))) : (((/* implicit */int) (signed char)(-127 - 1))));
                        /* LoopSeq 1 */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            arr_55 [i_1] [i_2] [i_1] [i_1] [i_16] [i_3] = ((/* implicit */unsigned short) arr_6 [i_1] [i_1]);
                            arr_56 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (_Bool)1);
                        }
                    }
                    var_31 += ((/* implicit */signed char) (short)8694);
                }
            } 
        } 
        var_32 ^= ((/* implicit */short) ((arr_27 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(signed char)12])))));
        var_33 = ((/* implicit */int) min((var_33), ((-(((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_5 [(_Bool)1]))))) | ((+(((/* implicit */int) arr_7 [i_1] [i_1] [i_1]))))))))));
        var_34 = ((/* implicit */unsigned int) 1986196032);
        var_35 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [(short)11] [i_1] [i_1 + 1] [i_1] [i_1 - 1] [i_1] [i_1 - 1])) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_12 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1]))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22151))) : (4ULL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_54 [5] [5] [5] [10] [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_33 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (short)-22160)))) : (((int) arr_47 [i_1 - 1] [i_1] [i_1] [i_1] [i_1 - 1] [i_1] [i_1]))))) : (((long long int) ((((/* implicit */_Bool) arr_17 [i_1 - 1] [0] [i_1] [i_1] [i_1])) ? (var_11) : (((/* implicit */int) arr_39 [i_1] [i_1] [i_1 - 1] [i_1 + 1] [i_1])))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
    {
        arr_61 [i_17 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22152)) ? (((arr_17 [i_17] [i_17 - 1] [i_17] [i_17 - 1] [i_17]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_17] [0U]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)17780)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_39 [i_17] [i_17] [i_17 - 1] [i_17] [20])))))))) ? (((/* implicit */int) max((max((arr_43 [i_17] [(unsigned short)20] [i_17] [i_17] [10]), (((/* implicit */unsigned char) (_Bool)0)))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_41 [(unsigned short)8] [(unsigned short)8] [(short)6] [(signed char)8] [i_17])))))))) : (((((/* implicit */_Bool) arr_60 [i_17])) ? (var_11) : (((((/* implicit */_Bool) (unsigned char)117)) ? (((/* implicit */int) (short)-22137)) : (126973)))))));
        var_36 = ((/* implicit */int) arr_57 [(short)18] [i_17]);
    }
}
