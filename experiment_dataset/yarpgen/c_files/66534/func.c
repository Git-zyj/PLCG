/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66534
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 1; i_2 < 14; i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) ((short) 3940926655U)))) | (1362413390U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)161)) | (arr_0 [i_2])))))))));
                    arr_10 [11] [2U] [2U] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                }
                for (unsigned int i_3 = 1; i_3 < 14; i_3 += 1) /* same iter space */
                {
                    arr_15 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */short) var_4);
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 1; i_4 < 11; i_4 += 2) 
                    {
                        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((4047805196043106772LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4 + 3] [i_1 + 1]))))) ? (((long long int) var_4)) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_3 [i_4 + 2] [i_1 - 2]))))))))));
                        arr_19 [i_3] [i_4] [i_3 + 1] [i_0] [i_4] = ((/* implicit */short) ((unsigned char) (+(arr_16 [i_1 + 1] [i_3] [(signed char)11] [i_1 + 1]))));
                        var_14 ^= ((/* implicit */short) ((1362413390U) << (((((/* implicit */int) (short)-512)) + (522)))));
                        arr_20 [i_0] [i_0] [i_1 + 1] [10ULL] [i_1 + 1] [(short)14] |= ((/* implicit */int) 4611686018427387903LL);
                        var_15 += ((/* implicit */short) arr_5 [i_0]);
                    }
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            {
                                arr_26 [i_0] [i_1] [i_3] [i_5] [i_6] [i_6] = ((/* implicit */long long int) arr_4 [i_1 - 1] [(signed char)14] [i_3 - 1]);
                                var_16 = ((/* implicit */int) max(((-(max((var_4), (((/* implicit */unsigned int) arr_8 [i_5])))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-31586)))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_7 = 1; i_7 < 14; i_7 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (+(((((/* implicit */_Bool) var_0)) ? ((-(((/* implicit */int) (short)-16396)))) : (((/* implicit */int) min((arr_14 [i_0]), ((unsigned char)125)))))))))));
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) var_1))))) * (((/* implicit */int) ((var_0) == (((/* implicit */long long int) 776539496U)))))))))))));
                }
                var_19 = ((/* implicit */signed char) ((((((/* implicit */int) ((short) arr_24 [i_0] [i_1]))) < (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_2 [i_0])) : (963243772))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */int) (short)31585))))) ? (((/* implicit */int) min((arr_24 [i_0] [i_1 - 2]), (var_5)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_24 [i_0] [i_1])) : (((/* implicit */int) (unsigned char)45))))))) : (((((var_0) > (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_0] [i_0]))))) ? (((3863208598U) >> (((((/* implicit */int) (short)13477)) - (13453))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-17849)))))));
                /* LoopSeq 1 */
                for (unsigned char i_8 = 1; i_8 < 13; i_8 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        arr_33 [i_9] [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_12 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [(unsigned short)13] [i_0]))))) ^ (((/* implicit */long long int) min((((/* implicit */unsigned int) var_2)), (var_4))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_8] [13LL]))) : ((~(((((/* implicit */_Bool) (short)-31586)) ? (4611686018427387903LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_8 - 1] [i_0])))))))));
                        arr_34 [i_9] [i_8] [i_0] [i_0] = ((/* implicit */long long int) arr_22 [i_1 - 2] [i_9] [i_8 + 1]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            arr_37 [i_0] [i_0] [i_8] [i_9] [i_9] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_0] [i_9] [i_8 + 1] [i_8])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_0] [i_9] [i_8 - 1] [i_0])))));
                            arr_38 [i_0] [i_1] [(short)14] [i_9] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-17849)) ? (var_11) : (var_8)));
                        }
                        for (int i_11 = 0; i_11 < 15; i_11 += 1) 
                        {
                            arr_41 [2ULL] [i_9] [i_8] [i_8 + 2] [14U] [14U] [14U] = ((/* implicit */signed char) var_3);
                            arr_42 [i_0] [i_1] [i_8] [i_9] |= ((/* implicit */long long int) 1052593304);
                            arr_43 [(unsigned char)2] [i_1 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1362413390U)) ? (522314685) : (((/* implicit */int) (short)96))));
                        }
                    }
                    for (unsigned char i_12 = 1; i_12 < 14; i_12 += 3) 
                    {
                        arr_46 [i_0] [i_12] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(9223372036854775807LL))))));
                        var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) 702852777U))), (((((/* implicit */int) (unsigned char)90)) + (((/* implicit */int) (unsigned char)165))))))) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) (short)-31043))));
                        var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned short) var_5))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) : (max((((/* implicit */long long int) -1141866531)), (7073881090388063084LL))))) * (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_0] [i_1] [i_1])))));
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned char)0)) >> (((/* implicit */int) (!(((/* implicit */_Bool) 1309337423U))))))), ((+(((/* implicit */int) var_12)))))))));
                    }
                    arr_47 [i_0] [i_1 + 1] [i_8 + 2] [i_8] = (((((~(((/* implicit */int) (unsigned char)101)))) + (2147483647))) << (((var_0) - (7413949874491879318LL))));
                }
            }
        } 
    } 
    var_23 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) (short)-2227)) < (((/* implicit */int) (short)31326))))), (((unsigned char) var_4)))))));
}
