/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60174
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
    for (unsigned int i_0 = 4; i_0 < 8; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
                    {
                        arr_11 [i_0] = ((/* implicit */long long int) min((((((/* implicit */int) ((unsigned char) arr_1 [i_2]))) < (((/* implicit */int) var_13)))), ((!(((/* implicit */_Bool) ((arr_0 [i_0 - 3]) ? (((/* implicit */unsigned long long int) arr_8 [i_0 - 3] [i_0] [i_0 - 4] [i_0] [8ULL])) : (arr_9 [i_0 + 1] [i_1] [i_2] [i_3]))))))));
                        var_15 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned long long int) -9223372036854775800LL)) : (arr_1 [i_0])))) ? (((/* implicit */int) ((short) arr_10 [i_3] [i_2] [i_1] [i_0] [i_0] [i_0]))) : (((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_1 + 2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned short)127)) : (((/* implicit */int) (signed char)-6))))) : ((+(arr_9 [i_3] [i_2] [i_1 + 1] [i_1])))));
                    }
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            arr_18 [i_0 + 1] [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 - 3] [i_1] [i_2] [i_1 + 1] [i_5] [i_0])) ? (max((6723182547194096756LL), (((/* implicit */long long int) (unsigned char)130)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)125)))))));
                            arr_19 [i_5] [i_4] [i_2] [i_1 - 1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_14 [i_5] [i_4] [i_2] [i_1 - 1] [(signed char)6] [2ULL])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))))) ? (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (signed char)1)))))) : (((/* implicit */int) var_13))));
                        }
                        for (long long int i_6 = 1; i_6 < 9; i_6 += 4) 
                        {
                            var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_4] [i_4] [i_6 + 3] [(short)2])) ? (((/* implicit */unsigned long long int) arr_2 [i_6])) : (arr_9 [i_4] [i_2] [(unsigned char)11] [i_0])))))) ? (((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_16 [i_6 - 1] [i_1 + 1])) : (((/* implicit */int) var_13))))));
                            arr_22 [i_0] [i_0] [(_Bool)1] [i_0 - 4] [i_6] [i_0] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)68)) : (((/* implicit */int) (_Bool)1))));
                            arr_23 [i_6] [i_6] [i_4] [i_2] [(_Bool)1] [i_6] [i_0 + 3] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_4] [i_1] [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_5)))) : (arr_7 [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_2]))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 2) 
                        {
                            arr_26 [i_0] [i_1] = ((/* implicit */short) ((arr_9 [i_7 - 1] [i_2] [i_1] [i_0 - 3]) - (arr_9 [i_0] [(short)10] [i_2] [i_4])));
                            arr_27 [4LL] [i_1] = ((/* implicit */_Bool) ((signed char) arr_1 [i_1 + 1]));
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (!(var_13))))));
                            arr_28 [i_0] [i_0] [i_0] [i_1] [i_2] [(unsigned char)1] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1])) || (((/* implicit */_Bool) arr_16 [i_1 - 1] [i_2]))));
                            arr_29 [i_0] [(signed char)10] [i_0 - 4] [i_0 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_0 - 4] [(short)11] [i_0 - 4] [i_0 - 2] [i_0])) ? (((/* implicit */int) arr_21 [i_0 + 2] [i_0] [i_0] [i_0 - 2] [i_0])) : (((/* implicit */int) arr_21 [i_0 - 3] [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 4]))));
                        }
                        var_18 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((+(-2147483631)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)128)) ? (((((/* implicit */_Bool) arr_12 [i_4] [i_4] [i_2] [i_2] [i_1] [i_0])) ? (6723182547194096756LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) : (((long long int) arr_20 [i_0] [i_2]))))) : (((((/* implicit */_Bool) ((signed char) arr_2 [(_Bool)1]))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_4] [i_0]))))) : ((((_Bool)1) ? (arr_1 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)182)))))))));
                    }
                    /* vectorizable */
                    for (long long int i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((arr_0 [i_1]) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_5 [i_0 + 3] [i_1] [i_8])) : (((/* implicit */int) arr_4 [i_1] [i_8])))) : (((/* implicit */int) ((_Bool) arr_2 [i_0]))))))));
                        arr_34 [i_8] [i_2] [i_1] [i_0 - 3] = ((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0 + 3] [i_0 + 1] [i_1] [i_1] [i_1 + 2]);
                        arr_35 [i_0] [i_1] [i_2] = ((/* implicit */short) (!((!(arr_5 [i_0] [i_1] [i_2])))));
                    }
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 2) /* same iter space */
                    {
                        arr_38 [i_0] [i_1 + 1] [i_1] [i_2] [i_2] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)0))))) ? (((/* implicit */int) arr_37 [i_0] [i_1 + 1] [i_2] [i_9])) : ((+(((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) var_0)))))))));
                        arr_39 [i_0] = ((/* implicit */signed char) var_6);
                    }
                    arr_40 [i_0] [i_1 + 2] [i_2] = ((/* implicit */short) ((int) ((arr_25 [i_0] [i_1 + 2] [i_0 - 3] [i_1]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_25 [i_0 - 3] [i_1] [i_0 + 1] [i_2])))));
                    arr_41 [i_0] [i_0] [i_1] [i_2] = ((((/* implicit */_Bool) (short)-28262)) || (((/* implicit */_Bool) arr_17 [i_0 - 2] [i_1] [i_2] [i_1 + 2] [i_0 - 2])));
                    /* LoopSeq 3 */
                    for (signed char i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        var_20 *= ((/* implicit */unsigned char) var_11);
                        arr_45 [i_10] [i_1] [i_10] [i_10] = ((/* implicit */unsigned char) arr_5 [i_10] [(_Bool)1] [i_0]);
                        /* LoopSeq 2 */
                        for (short i_11 = 3; i_11 < 9; i_11 += 3) 
                        {
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) min(((+(arr_12 [i_0 + 3] [i_0 + 4] [i_0] [i_0] [i_0 + 2] [i_0]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_2] [i_1 - 1] [i_0 + 4] [i_0]))))))))));
                            var_22 = ((/* implicit */unsigned int) (+(((-2147483631) / (-1)))));
                            arr_48 [i_0] [i_10] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_11] [i_1 - 1] [i_0 + 4] [i_0 + 2])) ? (((/* implicit */int) arr_15 [i_11] [i_1 - 1] [i_1] [i_0 + 2])) : (((/* implicit */int) arr_31 [i_2] [i_1 - 1] [i_1] [i_0 + 2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_1] [i_0 + 2])) ? (((/* implicit */int) arr_15 [i_11] [i_1 - 1] [i_0] [i_0 + 2])) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) arr_8 [i_11 - 2] [i_1] [i_1 - 1] [i_1] [i_0 + 2])) ? (arr_8 [i_11 - 2] [(short)0] [i_1 - 1] [i_0 + 3] [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1 + 2] [i_0 + 2])))))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 12; i_12 += 4) 
                        {
                            arr_53 [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) (_Bool)1))));
                            arr_54 [i_0] [i_10] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_2] [i_10] [i_12])) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_12])) : (((/* implicit */int) arr_21 [i_12] [i_10] [(short)6] [i_1 - 1] [(unsigned char)4])))) << (((((arr_44 [i_12] [i_2] [i_1] [i_0 - 3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (2718654461495926115ULL))) - (18446744073709545426ULL))))) & (((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned short)38897)) - (((/* implicit */int) (_Bool)0))))))));
                            arr_55 [i_12] [i_10] [i_10] [i_1] [i_0 + 2] = ((max(((+(arr_46 [i_10] [i_10] [i_12]))), (((/* implicit */unsigned int) arr_47 [i_12] [i_10] [i_10] [(signed char)5] [i_10] [i_0 - 2])))) ^ (((((/* implicit */_Bool) arr_42 [i_12] [i_1 + 1] [i_10] [(unsigned short)11])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_10])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) : (((/* implicit */int) (signed char)9))))) : ((+(623707241U))))));
                        }
                        arr_56 [i_10] [i_1 - 1] [(signed char)4] [i_1 - 1] [i_1] = ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) (_Bool)1)));
                    }
                    /* vectorizable */
                    for (signed char i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((var_10) != (((/* implicit */unsigned long long int) arr_46 [i_13] [i_1] [i_1 + 2]))));
                        var_24 -= ((/* implicit */unsigned short) ((arr_5 [i_1 + 1] [i_1 + 2] [i_1 - 1]) ? (((/* implicit */int) arr_20 [i_1 + 2] [i_1 - 1])) : (((/* implicit */int) arr_20 [i_1 - 1] [i_1 + 2]))));
                        var_25 |= ((/* implicit */long long int) ((_Bool) arr_9 [i_0] [i_0] [i_0 - 3] [i_0]));
                    }
                    /* vectorizable */
                    for (unsigned char i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_15 = 1; i_15 < 11; i_15 += 3) 
                        {
                            arr_63 [i_0 + 2] [i_0 + 2] [i_15] [1] [i_0] [i_0 + 1] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_2] [i_1 + 2] [i_2] [i_2]))) <= (arr_1 [i_0]));
                            var_26 = ((/* implicit */signed char) ((unsigned short) arr_20 [i_2] [i_0 - 1]));
                            arr_64 [i_0 + 3] [(_Bool)0] [i_0] [i_14] |= ((/* implicit */long long int) arr_50 [i_0] [i_1 - 1] [(unsigned char)9] [i_15 - 1]);
                            var_27 = ((signed char) (_Bool)1);
                            var_28 = ((/* implicit */long long int) arr_52 [10LL] [i_1] [i_1] [i_1 + 2] [i_1]);
                        }
                        var_29 ^= ((/* implicit */short) ((((/* implicit */int) (unsigned char)250)) >> (((((/* implicit */int) (short)-32755)) + (32767)))));
                        arr_65 [i_0] [i_0] [(signed char)11] [i_1] [i_2] [i_14] |= ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_21 [i_1 - 1] [i_1] [i_1 + 2] [i_1] [i_1 + 1]))));
                    }
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) min((var_6), (((/* implicit */int) var_11)))))));
    var_31 = ((/* implicit */short) ((long long int) (+((+(((/* implicit */int) var_0)))))));
    var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) var_3))));
}
