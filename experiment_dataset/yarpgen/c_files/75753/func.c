/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75753
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
    var_10 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */long long int) max((1427320994U), (667137848U)))) != ((-(var_5))))))));
    var_11 -= ((/* implicit */unsigned char) ((var_4) << (((((/* implicit */int) max(((unsigned short)51140), (((/* implicit */unsigned short) ((((/* implicit */int) var_9)) != (((/* implicit */int) (unsigned short)14396)))))))) - (51108)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        var_12 = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) arr_2 [i_0])))) - (arr_1 [i_0])));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 7; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */_Bool) (unsigned short)14385);
                    var_14 = ((/* implicit */short) ((unsigned char) min((((/* implicit */unsigned long long int) ((((var_7) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_5 [i_0])) - (102)))))), (min((((/* implicit */unsigned long long int) arr_6 [(short)10] [(short)10])), (var_4))))));
                    arr_9 [i_0] [i_1 + 3] [i_2] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((var_7) + (9223372036854775807LL))) >> (((var_7) + (2667183395964969027LL)))))), (((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 3])))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            var_15 *= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned short)14377)) ? (((/* implicit */unsigned long long int) -866642872)) : (((((/* implicit */_Bool) arr_12 [i_2] [i_2])) ? (var_4) : (((/* implicit */unsigned long long int) arr_11 [(signed char)5] [(signed char)0]))))))));
                            var_16 ^= ((/* implicit */long long int) ((unsigned int) min((arr_14 [i_1 + 3] [0] [i_1] [i_1] [i_1] [i_1 - 2]), (arr_14 [i_0] [i_0] [i_0] [6LL] [i_1] [i_1 - 2]))));
                            arr_16 [i_0] |= ((/* implicit */long long int) min((var_1), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [0U])) ? (((/* implicit */long long int) 757318603)) : (var_3))))))));
                        }
                        for (long long int i_5 = 1; i_5 < 10; i_5 += 1) 
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) arr_18 [i_5 - 1] [i_5] [i_5 - 1] [i_5 + 1] [i_3] [i_1 - 2] [i_1])))));
                            arr_20 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) min(((unsigned short)65535), ((unsigned short)14384))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_1 - 2])), ((unsigned short)51140))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned short)9])) ? (var_4) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_3] [i_3] [0LL] [i_3]))) : ((-(var_1)))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_23 [i_0] [i_1] [i_3] = min((((unsigned int) (short)9151)), (((/* implicit */unsigned int) var_9)));
                            var_17 += ((/* implicit */unsigned int) 10208634254496066599ULL);
                            arr_24 [(unsigned char)3] [i_1] [i_2] [2ULL] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_1 - 1] [i_1 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_1 + 1] [i_1 + 4]))) : (arr_8 [i_1 + 4] [i_1 + 4] [i_1 + 3] [i_1 - 1])))) ? (((((/* implicit */_Bool) arr_22 [i_1 + 3] [i_1 + 3])) ? (arr_8 [i_1 + 3] [i_1 + 2] [i_1 + 1] [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1 - 2] [i_1 + 4]))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)51140), ((unsigned short)14412)))))));
                        }
                        var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)51142)) ? (((/* implicit */int) (unsigned short)51140)) : (((/* implicit */int) arr_2 [i_1]))))))) ? (6379523366831419054ULL) : (((/* implicit */unsigned long long int) var_5))));
                        arr_25 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)16930)) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [(_Bool)1] [i_3] [i_3])) : (((/* implicit */int) (unsigned short)14366))))), (max((((/* implicit */unsigned long long int) arr_17 [i_0] [i_1])), (arr_7 [i_0] [(unsigned short)5] [(unsigned short)5] [i_3]))))));
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (((!(((/* implicit */_Bool) ((18446744073709551602ULL) - (((/* implicit */unsigned long long int) arr_1 [i_0]))))))) ? (((/* implicit */unsigned long long int) min((1052616562), (((/* implicit */int) arr_0 [i_1 + 2]))))) : (min((((/* implicit */unsigned long long int) arr_10 [i_0] [(unsigned short)2] [i_2] [(unsigned short)2])), (((((/* implicit */_Bool) arr_21 [i_3] [i_2] [9] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) var_5)) : (18446744073709551615ULL))))))))));
                    }
                }
            } 
        } 
    }
    for (signed char i_7 = 0; i_7 < 11; i_7 += 2) /* same iter space */
    {
        arr_29 [i_7] [i_7] = ((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) var_6)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
        {
            var_20 = ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65534))))) == (((((var_0) + (9223372036854775807LL))) >> (((((/* implicit */int) var_9)) - (114))))));
            var_21 = ((/* implicit */_Bool) min((var_21), (((((/* implicit */int) ((unsigned short) arr_14 [i_8] [i_8] [i_8] [(signed char)2] [i_7] [i_7]))) == (((/* implicit */int) (unsigned short)37837))))));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_7]))) : (((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_8] [i_7])))))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
        {
            var_23 += min((var_9), (arr_30 [i_9]));
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 11; i_10 += 3) 
            {
                for (unsigned char i_11 = 0; i_11 < 11; i_11 += 2) 
                {
                    {
                        arr_44 [(unsigned short)2] [i_10] [i_10] [i_7] = ((/* implicit */signed char) ((((((/* implicit */int) arr_30 [i_9])) - (((/* implicit */int) arr_30 [i_11])))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_21 [i_7] [i_7] [i_7] [i_7] [i_7]), (arr_21 [i_7] [i_7] [5LL] [i_7] [i_7])))) ? ((~(arr_10 [i_7] [1U] [1U] [i_11]))) : (((/* implicit */unsigned int) ((int) arr_30 [i_7])))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned int) 18446744073709551615ULL))), (min((((/* implicit */long long int) (unsigned char)109)), (var_0)))))) ? (((((/* implicit */_Bool) arr_11 [9U] [9U])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (var_5)));
                    }
                } 
            } 
        }
        var_26 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)138))));
    }
}
