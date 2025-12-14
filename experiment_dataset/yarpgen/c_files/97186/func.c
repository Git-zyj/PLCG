/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97186
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
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_10 -= (!(((/* implicit */_Bool) arr_6 [i_0] [(unsigned char)4] [i_1] [i_0])));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_11 |= arr_2 [i_0] [i_3];
                                var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_4]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)252)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_4)) ? (var_4) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
    var_14 = ((/* implicit */long long int) var_5);
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) var_4);
                            var_16 -= ((/* implicit */_Bool) ((((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)198)), (arr_21 [i_5] [i_6] [i_8] [i_6])))), (((((/* implicit */int) arr_19 [i_5] [i_5] [i_5] [i_7])) / (((/* implicit */int) arr_21 [i_5] [(unsigned short)14] [i_7] [i_6]))))))) / (((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [(short)3] [i_7])) >> (((((/* implicit */int) arr_21 [i_5] [i_6] [i_7] [i_6])) - (54511)))))) ? (((6367445046853065240LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5] [i_6]))))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)50)))))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_9 = 2; i_9 < 21; i_9 += 1) 
                {
                    arr_26 [i_5] [i_6] [i_9] = ((/* implicit */short) ((long long int) ((((/* implicit */int) arr_13 [i_5] [i_6])) * (((/* implicit */int) arr_22 [(_Bool)1] [i_5] [i_5] [i_9 + 1])))));
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)198)) ? (((/* implicit */long long int) ((arr_22 [i_5] [i_5] [i_9] [i_9]) ? (((/* implicit */int) arr_13 [i_5] [i_6])) : (((/* implicit */int) arr_15 [i_6] [i_5]))))) : (-1390109485494687044LL)));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 4) 
                        {
                            {
                                var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [18LL] [i_6] [18LL] [i_9] [i_9] [(unsigned char)14] [i_11])))))) ? (((((/* implicit */_Bool) arr_25 [i_6])) ? (((/* implicit */int) arr_28 [i_9] [i_10] [i_6] [i_10])) : (((/* implicit */int) arr_16 [i_5] [i_5] [i_5] [i_5])))) : (((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_21 [i_5] [(unsigned short)20] [i_10] [i_6]))))));
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_9 - 2] [i_9 + 1] [i_9] [i_9 - 2])) ? (arr_24 [i_9 + 1] [i_9 + 2] [i_9] [i_9 + 2]) : (arr_24 [i_9 + 2] [i_9 + 1] [i_9] [i_9 + 3])));
                                var_20 = ((/* implicit */_Bool) arr_20 [i_9] [i_10]);
                                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_4)))) ? ((+(((/* implicit */int) var_9)))) : (((arr_22 [i_5] [i_6] [i_9 + 3] [i_10]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                }
                for (signed char i_12 = 0; i_12 < 24; i_12 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_13 = 4; i_13 < 23; i_13 += 1) 
                    {
                        for (long long int i_14 = 1; i_14 < 20; i_14 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (-(((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (var_5))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_21 [i_13 - 1] [(short)6] [i_13 - 1] [i_6])) : (((/* implicit */int) arr_16 [i_5] [i_5] [i_5] [i_5]))))) : (((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_5] [i_6] [i_6] [i_13] [(unsigned char)22]))))))))))));
                                var_23 = ((/* implicit */long long int) var_2);
                                var_24 |= ((/* implicit */unsigned char) ((unsigned int) 3107335544U));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_15 = 0; i_15 < 24; i_15 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_16 = 0; i_16 < 24; i_16 += 3) 
                        {
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_5] [i_6] [i_12] [i_6] [i_16])) ? (((/* implicit */int) arr_44 [i_5] [i_6] [i_12] [i_6] [i_16])) : (((/* implicit */int) arr_44 [i_5] [i_5] [i_12] [i_6] [i_15])))))));
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)175)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [21LL] [i_5]))) : (arr_31 [i_5] [i_6] [i_6] [i_15] [i_16])))) ? (((((/* implicit */_Bool) (unsigned char)69)) ? (arr_24 [i_5] [i_5] [i_15] [i_16]) : (((/* implicit */unsigned long long int) arr_33 [i_5] [i_6] [i_5])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_30 [i_5]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)43)))))))));
                            var_27 = ((unsigned long long int) -1788591595);
                            var_28 = ((/* implicit */unsigned int) ((unsigned short) var_5));
                            var_29 = ((/* implicit */_Bool) (short)-3031);
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_17 = 0; i_17 < 24; i_17 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_20 [i_17] [i_17]))));
                            var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_13 [i_12] [i_17]) ? (((/* implicit */int) arr_49 [(_Bool)1] [i_5] [i_12] [i_15] [i_17])) : (((/* implicit */int) arr_45 [i_5] [i_6] [i_12] [i_6] [i_17])))))));
                            var_32 = ((/* implicit */unsigned int) (!((((_Bool)1) || (((/* implicit */_Bool) arr_33 [i_12] [i_15] [i_17]))))));
                        }
                        for (int i_18 = 1; i_18 < 21; i_18 += 3) 
                        {
                            arr_53 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_49 [i_18 + 1] [i_5] [i_18 + 2] [4U] [i_18])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_49 [i_18 + 1] [i_5] [i_18 + 1] [i_18] [i_18 + 3]))));
                            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((var_1) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_5] [i_5] [i_6] [i_6]))))))));
                            arr_54 [i_5] [i_6] [(unsigned char)3] [i_15] [i_15] [i_18] [i_5] = ((/* implicit */unsigned char) (_Bool)1);
                            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) (((-(((/* implicit */int) arr_38 [i_5] [i_6] [i_12] [i_15] [i_18 + 2])))) | ((-(((/* implicit */int) arr_25 [i_6])))))))));
                        }
                        for (unsigned char i_19 = 0; i_19 < 24; i_19 += 1) 
                        {
                            var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31394)) ? (((/* implicit */int) arr_16 [i_5] [i_12] [i_5] [i_19])) : (((/* implicit */int) arr_20 [i_12] [16LL]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_5] [i_5] [i_6] [i_12] [i_15] [i_5])) ? (((/* implicit */int) arr_20 [i_12] [4])) : (((/* implicit */int) arr_36 [i_5] [i_6] [i_6] [7LL]))))) : (arr_24 [i_5] [8U] [i_12] [8U])));
                            var_36 = ((/* implicit */long long int) (unsigned char)214);
                            var_37 = ((/* implicit */unsigned long long int) arr_27 [i_5] [i_5] [i_5] [i_5] [i_5]);
                            var_38 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_43 [i_6] [i_6] [(_Bool)1] [i_15] [(unsigned char)2])) ? (((/* implicit */int) arr_50 [15U] [i_5] [(unsigned short)0] [i_12] [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_49 [i_5] [i_6] [i_12] [i_12] [i_19]))));
                        }
                    }
                    for (long long int i_20 = 0; i_20 < 24; i_20 += 1) /* same iter space */
                    {
                        var_39 = min((((/* implicit */int) min((arr_23 [i_12] [i_6] [i_5] [i_20]), (arr_23 [i_5] [i_6] [i_5] [i_20])))), (((((/* implicit */_Bool) arr_23 [i_5] [i_6] [i_5] [i_20])) ? (((/* implicit */int) arr_23 [i_5] [i_6] [i_5] [i_20])) : (((/* implicit */int) (signed char)0)))));
                        var_40 -= (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */int) (signed char)89)) : (((/* implicit */int) (unsigned short)61583))))) ? (arr_30 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_40 [i_6] [i_6] [i_6] [i_12] [4U])), (var_3))))))));
                        arr_62 [i_5] [i_5] [i_12] [7U] [7U] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)25483))) : (-6924642860855443524LL)));
                    }
                }
                /* vectorizable */
                for (signed char i_21 = 4; i_21 < 23; i_21 += 1) 
                {
                    var_41 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18022570041204181178ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (127U)))) ? (((/* implicit */int) (unsigned short)23912)) : (((/* implicit */int) (unsigned short)50923))));
                    var_42 = ((/* implicit */unsigned long long int) arr_16 [i_5] [i_6] [i_21 - 4] [i_5]);
                }
            }
        } 
    } 
}
