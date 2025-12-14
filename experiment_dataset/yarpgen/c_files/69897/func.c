/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69897
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
    var_15 |= ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7443131218830071963LL));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [3U] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_4)), ((-(18446744073709551608ULL)))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    arr_8 [i_2] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)36796))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 3; i_3 < 12; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */short) ((((var_3) > (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) arr_10 [i_0] [3LL] [i_2 - 1] [i_3] [i_0]))));
                        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0 + 2] [i_3 + 1]))));
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_2 + 4])) : (((/* implicit */int) (unsigned short)28493)))))));
                    }
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        arr_14 [i_2] [i_4] [i_0] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 3])) && (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) < (var_0))))));
                        arr_15 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_2 + 1])) || (((/* implicit */_Bool) min((((/* implicit */short) (signed char)45)), ((short)-26580))))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [11ULL] [11ULL] [i_0]))) : (arr_6 [i_0 + 3] [i_2 + 2] [i_2 - 1] [i_2 + 2])))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 3) 
                        {
                            arr_18 [i_0] [i_0] = ((/* implicit */unsigned short) var_9);
                            arr_19 [11LL] [i_0] [2LL] [i_4] [i_4] [0U] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) (signed char)48)))));
                            var_19 = ((/* implicit */unsigned short) ((unsigned char) arr_9 [i_0] [i_1] [i_0] [i_0]));
                        }
                    }
                }
                for (unsigned short i_6 = 1; i_6 < 12; i_6 += 3) /* same iter space */
                {
                    arr_22 [i_0] [i_1] [i_6] = -6744256432217707973LL;
                    var_20 += ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) arr_1 [i_0 - 1] [i_1])))) + (2147483647))) >> (((33554431ULL) - (33554431ULL)))));
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_6 - 1] [i_0 + 2])) ? (((/* implicit */int) (unsigned char)195)) : (((/* implicit */int) max((arr_7 [i_0 - 3] [i_1] [i_1]), (arr_7 [i_0] [i_0] [i_1]))))))) ? ((-((+(((/* implicit */int) arr_1 [i_0] [i_6])))))) : (((/* implicit */int) ((_Bool) arr_4 [3LL] [i_0 - 2]))))))));
                }
                /* vectorizable */
                for (unsigned short i_7 = 1; i_7 < 12; i_7 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        for (signed char i_9 = 0; i_9 < 15; i_9 += 2) 
                        {
                            {
                                arr_30 [10ULL] [i_1] [i_1] [i_0] [i_0] [i_8] [i_9] = ((/* implicit */long long int) ((unsigned int) (_Bool)1));
                                var_22 ^= ((/* implicit */_Bool) ((unsigned char) var_7));
                            }
                        } 
                    } 
                    var_23 = ((arr_21 [i_0] [i_1] [i_7]) ^ (arr_21 [i_0] [i_1] [i_7 + 1]));
                }
                var_24 = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_2))))), (var_5))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((unsigned short) 0U))))))));
                var_25 ^= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */int) (signed char)44)) : (((/* implicit */int) (unsigned short)23))))), (min((((var_6) * (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551604ULL)) ? (((/* implicit */int) arr_1 [i_1] [i_0])) : (((/* implicit */int) arr_2 [(unsigned char)3]))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 15; i_10 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned short) ((unsigned int) arr_21 [i_0] [i_1] [i_0 + 2]));
                    arr_33 [(short)4] [i_0] [i_1] [(unsigned char)1] = ((/* implicit */long long int) ((unsigned int) var_2));
                    arr_34 [i_0] [i_1] [(unsigned short)1] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) (unsigned short)37049)))));
                }
                for (unsigned short i_11 = 0; i_11 < 15; i_11 += 1) /* same iter space */
                {
                    var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0 - 3]))))) ? (max((((/* implicit */long long int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) var_1)) ? (arr_4 [(_Bool)1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1]))))))) : (((/* implicit */long long int) var_12)));
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) arr_35 [i_11] [i_1] [i_1] [i_11]))));
                    /* LoopSeq 1 */
                    for (long long int i_12 = 2; i_12 < 14; i_12 += 1) 
                    {
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25072)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_12) << (((var_9) - (650537830606226363ULL)))))) ? (arr_17 [i_0] [i_0] [i_1] [i_12] [(unsigned char)3] [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_10 [i_0 + 3] [i_11] [i_11] [i_12] [i_12])) : (((/* implicit */int) var_4)))))))) : (max((((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)12)), (arr_35 [i_11] [i_12] [i_0 + 3] [i_12 - 1])))), (var_10))))))));
                        arr_41 [(unsigned char)1] [i_1] [i_0] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_37 [i_0 - 1] [i_0 + 1] [i_12 - 2] [i_0]))))) || (((/* implicit */_Bool) var_2))));
                    }
                }
            }
        } 
    } 
}
