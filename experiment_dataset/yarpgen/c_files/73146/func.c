/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73146
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
    var_14 = ((/* implicit */_Bool) ((signed char) (unsigned short)240));
    var_15 = ((/* implicit */int) ((unsigned char) max((((long long int) 0U)), (((/* implicit */long long int) var_9)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_4 [(signed char)19] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_1 [i_1]))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)240))) ^ (0U))))))) ^ (((((/* implicit */_Bool) max(((unsigned short)240), (((/* implicit */unsigned short) arr_0 [16] [i_1]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)-23667)), ((unsigned short)25913)))) : (((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_1])))))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_7 [(short)14] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (signed char)-3);
                    var_16 = ((/* implicit */signed char) (unsigned short)39623);
                }
                for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    arr_10 [i_3] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((unsigned short) (signed char)22)))) / ((~(((/* implicit */int) ((unsigned short) (signed char)2)))))));
                    var_17 += ((/* implicit */short) ((((((((((/* implicit */_Bool) 1377249624U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32764))) : (arr_9 [i_3] [i_0] [i_3] [i_3]))) + (9223372036854775807LL))) << (((((((/* implicit */int) (short)32758)) | (((/* implicit */int) (signed char)2)))) - (32758))))) < (((/* implicit */long long int) (-(((/* implicit */int) (short)26933)))))));
                }
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (signed char)2))) + ((~(((/* implicit */int) arr_3 [i_0] [i_0]))))));
                    var_19 = ((((/* implicit */int) (signed char)22)) << (((((/* implicit */int) arr_3 [i_0] [i_0])) + (106))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) arr_11 [i_0] [i_4] [i_6]);
                                var_21 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (arr_2 [i_5]) : (arr_5 [i_0] [i_0] [i_0]))) << (((((/* implicit */int) (signed char)109)) - (109)))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        arr_21 [i_7] [0] [i_1] [i_0] = ((arr_9 [i_0] [i_4] [i_4] [i_7]) - (arr_9 [i_7] [i_0] [i_0] [(_Bool)1]));
                        arr_22 [i_0] [i_1] [i_1] [i_7] = ((/* implicit */_Bool) (signed char)2);
                        arr_23 [i_4] [i_4] [(signed char)18] = ((arr_1 [i_7]) == (((/* implicit */unsigned long long int) arr_9 [(short)0] [i_4] [i_7] [i_7])));
                        var_22 = ((/* implicit */short) arr_20 [i_4] [i_4] [i_4] [i_4]);
                    }
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-113)) < (((/* implicit */int) (signed char)-23)))) ? (arr_25 [i_0] [i_1] [i_4] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_8] [i_8])))));
                            arr_29 [i_0] [i_1] [15U] [i_9] [i_8] [i_9] [(signed char)14] = ((/* implicit */short) ((int) (signed char)-126));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-10917)) ? (-27LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)50)))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 25; i_10 += 1) 
                        {
                            var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24945))) + (((unsigned long long int) 4294967295U))));
                            var_26 ^= ((/* implicit */int) 2123086704115633908LL);
                        }
                        var_27 = ((/* implicit */signed char) ((arr_30 [i_8] [i_8] [i_4] [i_8] [i_1] [i_0] [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_8])))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_12 = 0; i_12 < 25; i_12 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [(unsigned short)2] [22LL])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-101))) : (arr_24 [i_0] [i_1])));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0] [i_4])) % (((/* implicit */int) arr_0 [(unsigned short)23] [i_1]))));
                        }
                        for (unsigned char i_13 = 0; i_13 < 25; i_13 += 1) /* same iter space */
                        {
                            arr_38 [i_0] [i_0] [i_0] [22] [i_11] [i_0] [i_0] = ((/* implicit */short) (~(((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-29)))))));
                            var_30 = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)2)) >> (((/* implicit */int) (signed char)7)))) >= (((((/* implicit */int) (signed char)100)) * (((/* implicit */int) (unsigned short)50423))))));
                            arr_39 [i_11] [(_Bool)1] [i_11] [i_4] [i_11] [i_1] [i_11] = (_Bool)1;
                        }
                        var_31 = ((/* implicit */unsigned short) ((short) (unsigned short)50423));
                    }
                }
                var_32 = ((/* implicit */int) (+(((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (arr_17 [23LL])))) ? (12U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)23)))))))));
            }
        } 
    } 
}
