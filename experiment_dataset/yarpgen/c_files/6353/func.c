/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6353
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
    for (signed char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_13 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) arr_5 [1ULL] [1ULL] [i_2]);
                                arr_14 [(unsigned char)17] [i_2] [i_2] [(unsigned char)17] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_3]))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (int i_6 = 3; i_6 < 17; i_6 += 2) 
                        {
                            arr_20 [i_6] [(_Bool)1] [i_2] [i_0 + 2] [i_6 - 3] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_2])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5]))) : (var_9))))));
                            arr_21 [i_0] [i_2] [i_2] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1799)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (var_1) : (((((/* implicit */int) arr_4 [i_0] [i_0 - 1] [11])) >> (((((/* implicit */int) var_10)) + (53)))))));
                            var_12 = (((_Bool)1) ? (((((-1922238157) + (2147483647))) >> (((var_1) - (1944997490))))) : (((((/* implicit */_Bool) 9007198986305536LL)) ? (2147483647) : (((/* implicit */int) (unsigned short)7)))));
                            var_13 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_2] [i_5] [i_6] [4ULL])) - (arr_9 [i_0] [i_0] [i_0] [i_0 + 3] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 2] [i_0 - 2] [i_0]))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (var_8) : (var_0)))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))));
                            arr_24 [i_2] [i_5] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) var_2);
                        }
                        var_15 = ((((/* implicit */_Bool) ((arr_15 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2]) ? (((/* implicit */unsigned int) arr_19 [i_0] [i_1] [i_0] [i_5] [i_1] [i_1])) : (var_0)))) ? ((((-2147483647 - 1)) / (arr_5 [i_0] [7] [i_0]))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_5] [i_0])))));
                    }
                    for (short i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        arr_27 [i_0] [i_1] [i_2] [i_8] = ((/* implicit */long long int) var_10);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 4) 
                        {
                            arr_30 [i_0] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */int) (+((~(1655906273U)))));
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((var_0) >> (((arr_7 [i_8] [i_2]) - (12184665212061797559ULL))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min(((short)25809), (((/* implicit */short) (unsigned char)160))))) || (((/* implicit */_Bool) var_5))))))));
                        }
                        var_17 += ((/* implicit */unsigned int) arr_3 [i_0] [i_0] [(unsigned char)1]);
                        arr_31 [i_2] [i_2] = min((((/* implicit */int) (unsigned short)65511)), ((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_2])) : (var_1))))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned short) arr_16 [i_0 + 1] [i_2] [i_8])), (arr_18 [i_0] [i_0] [i_2] [i_2] [i_8] [i_8] [i_0]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (min((((/* implicit */unsigned long long int) arr_15 [i_0 + 1] [i_1] [12LL] [i_1] [i_1] [i_2])), (var_2))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0 + 3] [i_1] [i_1] [i_2] [i_8] [i_2]))) / (arr_8 [i_0 + 1] [(unsigned short)6] [i_2] [i_8] [i_2])))) ? (((/* implicit */unsigned long long int) var_7)) : (((((/* implicit */_Bool) (short)-4016)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_0 - 1] [i_0 - 1]))) : (arr_7 [i_0 + 1] [i_1])))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_19 = ((/* implicit */int) ((min(((+(17039092316034634540ULL))), (((/* implicit */unsigned long long int) var_10)))) >> (((((/* implicit */int) (short)-27169)) + (27176)))));
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_32 [i_0 + 1] [(short)14] [i_1] [i_10]))));
                        arr_34 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */int) min((var_9), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_9 [i_0 + 3] [i_0 - 1] [i_0 - 1] [i_0] [i_0]))) ? (-6) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))))));
                        arr_35 [i_0] [i_0] [i_2] [i_10] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_1)) : (arr_2 [i_0] [i_2] [i_10])))) ? (((((/* implicit */_Bool) arr_10 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_10] [i_2] [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_18 [i_0] [i_0 + 3] [i_1] [i_0] [i_0] [i_2] [i_10]))))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        arr_38 [i_0] [i_1] [i_1] [i_2] [i_11] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65529)) || (((/* implicit */_Bool) (-2147483647 - 1))))))));
                        arr_39 [i_2] [i_1] [i_2] [i_11] = ((/* implicit */signed char) 576460752303423487ULL);
                    }
                    arr_40 [i_0 - 2] [i_1] [i_2] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_0] [i_0 + 3] [i_2] [i_2])) & (var_1)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) var_6)) : (arr_19 [i_0] [i_1] [i_2] [17LL] [i_0] [i_1])))) : (((((/* implicit */_Bool) var_5)) ? (arr_8 [i_0] [i_0] [i_1] [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65529)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_12 = 1; i_12 < 18; i_12 += 3) 
    {
        for (int i_13 = 0; i_13 < 21; i_13 += 2) 
        {
            {
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_12] [i_12])) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_41 [i_12]))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65519))) / (var_8)))) ? (((/* implicit */unsigned long long int) var_9)) : ((~(arr_0 [i_13]))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 2; i_14 < 20; i_14 += 2) 
                {
                    for (int i_15 = 1; i_15 < 18; i_15 += 4) 
                    {
                        {
                            arr_51 [i_12] [i_13] [i_14] [i_15] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_48 [i_12] [i_14 - 1] [i_15]))))) / (min((((/* implicit */unsigned int) (signed char)37)), (var_0)))))) ? (((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) arr_6 [i_12] [i_14] [i_15 + 2]))))) ? ((-(var_4))) : (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */int) arr_48 [i_12] [i_12] [i_15]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_12] [i_12])) ? ((~(var_11))) : (((((/* implicit */_Bool) -931794423)) ? (2093517160) : (2093517160)))))));
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) -1735424230)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_33 [i_12] [i_13] [i_14 + 1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_12 + 2] [i_12] [i_12] [i_13] [i_14] [i_15])) ? (arr_8 [i_12] [i_12] [i_14 + 1] [i_15] [i_12 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_12 + 1] [i_13] [i_13] [i_13] [i_13] [i_12 + 1] [i_15])))))) : (((long long int) arr_4 [i_12] [16] [i_14])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65529)) ? (arr_36 [i_12]) : (var_8)))) ? (((((/* implicit */long long int) var_9)) + (arr_22 [i_12] [i_13] [i_12] [i_14 + 1] [i_13] [i_15 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-32753)), ((unsigned short)7)))))))));
                            arr_52 [i_12] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_29 [i_15])) ? (12413922586678468951ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9))))) - (((/* implicit */unsigned long long int) ((arr_19 [i_12] [i_13] [i_14] [i_15] [i_13] [i_14]) + (((/* implicit */int) var_10)))))))) ? (((/* implicit */int) (unsigned short)8191)) : (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)65529)) : (arr_6 [16] [i_14] [i_15 + 1]))) + (((/* implicit */int) arr_50 [i_12] [i_14] [i_14] [i_15] [i_13]))))));
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (min((((arr_9 [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_15 + 1]) - (((/* implicit */unsigned int) arr_10 [i_12] [i_13] [i_14] [i_15] [i_12] [i_14])))), (((/* implicit */unsigned int) (+(arr_5 [i_12] [i_13] [i_15])))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)17), (((/* implicit */unsigned short) (signed char)-58))))))));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((arr_32 [i_15] [i_13] [i_13] [i_12]) ? (arr_10 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]) : (arr_6 [i_13] [i_14] [i_15])))) || (((/* implicit */_Bool) var_1))))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
