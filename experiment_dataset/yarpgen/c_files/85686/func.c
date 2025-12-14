/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85686
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
    var_13 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_3)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)29229)), ((unsigned short)2674))))))) ? ((+(((var_3) | (var_3))))) : (((/* implicit */unsigned long long int) var_1))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) var_6);
        var_14 = ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */unsigned long long int) -3727224419803790175LL)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */short) var_0);
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) var_11);
                    arr_10 [i_0] [i_1 - 1] [i_2] = ((((/* implicit */int) min(((unsigned char)240), (arr_0 [i_0])))) % ((~(((/* implicit */int) arr_0 [i_0])))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_4 = 1; i_4 < 22; i_4 += 3) 
        {
            arr_17 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_4)))));
            /* LoopSeq 2 */
            for (unsigned char i_5 = 1; i_5 < 22; i_5 += 3) 
            {
                var_15 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 13140302791490488469ULL))));
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) var_2))));
                arr_20 [i_3] [i_3] [8] [i_5] |= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (signed char)63)) == (((/* implicit */int) arr_0 [(short)12])))))));
                arr_21 [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)42)) ? (((((/* implicit */int) arr_6 [i_4])) >> (((((/* implicit */int) (short)-4955)) + (4962))))) : (((((/* implicit */_Bool) (short)4954)) ? (0) : (((/* implicit */int) (signed char)-63))))));
                var_17 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_19 [i_3] [i_4 + 1] [i_5 + 1])) : (((/* implicit */int) arr_19 [i_3] [i_4 - 1] [i_5]))));
            }
            for (int i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                var_18 = ((unsigned long long int) arr_5 [i_4 + 1] [i_4 - 1] [i_4 + 1]);
                arr_24 [i_3] [i_4] [i_4] [i_3] = ((/* implicit */unsigned int) var_5);
            }
            var_19 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_3] [2ULL] [i_4 + 1])) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)63)))))));
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [i_3] [(signed char)8]))) : (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64)))))));
            arr_25 [i_3] [10ULL] [8ULL] &= ((arr_18 [(unsigned short)3] [(unsigned short)3] [(unsigned short)3]) >= (((/* implicit */unsigned int) arr_1 [14ULL])));
        }
        arr_26 [i_3] = ((/* implicit */unsigned int) var_10);
    }
    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_8 = 0; i_8 < 23; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_9 = 2; i_9 < 22; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_38 [i_7] [i_7] [i_7] [(short)3] [i_7] = (short)4954;
                        arr_39 [i_7] [i_7] [i_8] [i_7] [i_10] [(unsigned short)9] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_8])) ? (arr_12 [i_7] [i_7]) : (var_12)));
                    }
                } 
            } 
            var_21 = ((/* implicit */short) (+(((/* implicit */int) arr_8 [i_8] [i_8] [i_8] [i_7]))));
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_7] [i_8] [i_7] [i_8])))))));
        }
        /* vectorizable */
        for (unsigned short i_11 = 2; i_11 < 19; i_11 += 4) 
        {
            var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_7] [i_11])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_43 [i_7] [i_11]))))) ? (((((((/* implicit */int) var_2)) + (2147483647))) >> (((((/* implicit */int) arr_14 [i_11] [i_11])) - (164))))) : (((/* implicit */int) (signed char)-63))));
            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_11])) ? (7407890418557461898ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_11 + 3])))));
        }
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) 552135148U))));
        arr_44 [i_7] [(short)16] = ((/* implicit */long long int) (unsigned char)255);
        arr_45 [i_7] [i_7] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_6 [i_7])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((short) -3413024512755641986LL))))));
        arr_46 [i_7] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3742832147U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)4954))) : (var_5)))) ? (((/* implicit */unsigned long long int) 530942927522164928LL)) : (11038853655152089718ULL))));
    }
}
