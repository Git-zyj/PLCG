/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94365
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)68)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 2076731806)) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((short) var_8)))))) : (((unsigned int) var_8))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_0 [8U]);
        var_15 = ((/* implicit */long long int) (signed char)85);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned short i_2 = 4; i_2 < 11; i_2 += 3) 
        {
            arr_8 [i_1] [i_1] [6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2])) || (((/* implicit */_Bool) (short)28806))));
            var_16 -= ((/* implicit */unsigned int) 1708106588825839605LL);
            /* LoopNest 2 */
            for (unsigned short i_3 = 1; i_3 < 11; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    {
                        var_17 = ((/* implicit */short) 4U);
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 1; i_5 < 11; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (~(((((/* implicit */int) var_4)) - (((/* implicit */int) var_9)))))))));
                            var_19 = ((/* implicit */unsigned long long int) arr_1 [2]);
                            arr_16 [(signed char)8] [(signed char)8] [i_4] = arr_5 [i_2 + 1];
                        }
                    }
                } 
            } 
        }
        for (short i_6 = 2; i_6 < 11; i_6 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((arr_15 [i_6] [i_1] [(signed char)0] [i_1] [i_1]) & (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6])))))) * (0ULL)));
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (short)30092))));
        }
        for (short i_7 = 2; i_7 < 11; i_7 += 3) /* same iter space */
        {
            var_22 = ((((/* implicit */long long int) ((/* implicit */int) ((short) (signed char)-65)))) ^ (((arr_15 [i_1] [i_1] [i_7 + 1] [i_1] [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)28))))));
            /* LoopSeq 2 */
            for (signed char i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                arr_26 [i_8] [i_8] [10ULL] [i_1] = ((/* implicit */signed char) arr_25 [(unsigned short)11] [(unsigned short)11] [i_7] [(unsigned char)4]);
                var_23 = ((/* implicit */unsigned long long int) arr_25 [i_1] [i_7] [i_8] [i_1]);
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_15 [i_1] [i_1] [i_1] [i_1] [0U])))) ? (((/* implicit */int) (short)-30092)) : ((+(((/* implicit */int) arr_14 [i_7] [(signed char)0] [i_1]))))));
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11937))) == (var_5))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_8]))) >= (arr_22 [i_1])))) : (((((/* implicit */int) var_0)) - (((/* implicit */int) (short)30078)))))))));
            }
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) var_0))))) >= (var_12)));
                var_27 *= ((/* implicit */unsigned long long int) var_1);
                var_28 = ((((/* implicit */_Bool) arr_27 [i_9 + 1] [i_9 + 1] [(unsigned short)2])) ? (arr_27 [i_9 + 1] [i_9 + 1] [i_9]) : (arr_27 [i_9 + 1] [i_9 + 1] [i_9]));
                var_29 = arr_20 [i_1] [5ULL] [5ULL];
                var_30 -= ((/* implicit */long long int) ((((/* implicit */int) arr_28 [0] [0] [i_9] [(unsigned short)6])) >> ((((~(((/* implicit */int) var_9)))) + (1)))));
            }
            arr_29 [i_1] &= ((/* implicit */unsigned short) 500653268U);
        }
        arr_30 [i_1] = ((/* implicit */_Bool) ((((arr_21 [i_1]) + (((/* implicit */long long int) ((/* implicit */int) var_9))))) % (((/* implicit */long long int) (+(var_1))))));
        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (+((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)95))) : (4611686018427387903LL))))))));
        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [(unsigned char)11] [i_1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned char)10])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned char i_10 = 0; i_10 < 14; i_10 += 1) 
    {
        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_10] [(signed char)3])) ? (((((/* implicit */_Bool) -4611686018427387904LL)) ? (((/* implicit */long long int) arr_31 [2ULL] [i_10])) : (((var_3) ^ (arr_32 [i_10]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -7383311720875656799LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)76))) : (0U)))))))));
        var_34 -= ((/* implicit */int) 20U);
        /* LoopSeq 1 */
        for (int i_11 = 0; i_11 < 14; i_11 += 3) 
        {
            var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) (~(((((/* implicit */long long int) ((var_0) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) | (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_35 [(short)4] [(short)4] [9ULL])) : (arr_36 [i_10]))))))))));
            arr_37 [i_10] [(short)9] = (!(((/* implicit */_Bool) arr_31 [i_10] [1])));
            var_36 -= ((/* implicit */long long int) var_7);
            var_37 = ((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_11])) ? (((((/* implicit */long long int) var_5)) ^ (arr_32 [i_11]))) : (min((arr_32 [i_10]), (arr_32 [i_10])))));
        }
    }
}
