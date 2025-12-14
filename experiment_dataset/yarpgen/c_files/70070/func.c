/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70070
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
    var_15 += ((/* implicit */unsigned char) (short)32767);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)2] [(unsigned char)2]))) + (arr_0 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) / (arr_0 [i_0]))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) var_11))))) ? (((2145529629) - (2145529629))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)6763))))))))));
        var_17 = ((/* implicit */short) arr_1 [i_0] [i_0]);
        var_18 = ((/* implicit */unsigned int) min((((((long long int) 9223372036854775807LL)) - (((((/* implicit */long long int) ((/* implicit */int) var_11))) - (-3479032379143957651LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)26183)))))));
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (-(1066876138U)))) ? (((unsigned int) ((((/* implicit */_Bool) 2240429874U)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (0LL)))) : (((((/* implicit */_Bool) -3781520746567296357LL)) ? (4294967295U) : (((/* implicit */unsigned int) -1391412036))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 4; i_2 < 24; i_2 += 2) 
            {
                for (int i_3 = 2; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((1174724397) >> (((((/* implicit */int) (unsigned char)198)) - (174))))))));
                        /* LoopSeq 3 */
                        for (int i_4 = 3; i_4 < 23; i_4 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned char) ((short) (short)6763));
                            var_22 = ((/* implicit */unsigned int) arr_8 [i_3] [i_3] [i_3 - 1] [3U] [i_3] [i_3]);
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-23795))) : (9223372036854775807LL))) - (arr_8 [i_5] [24U] [i_2 - 4] [i_5] [i_5] [i_2 - 1])));
                            var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_5] [i_2]))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_6] [i_3 + 2] [i_2 - 1] [i_2 - 3] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)23794))) : (1871206842U)))), (((((/* implicit */_Bool) 2002819906)) ? (((((/* implicit */long long int) var_13)) & (0LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)219)))))))));
                            var_26 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_3 [i_3 + 1] [i_2 - 1])), (arr_2 [i_2 - 2] [(unsigned char)0] [i_3 + 2])));
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)23794))) > (arr_6 [i_0] [(short)9] [10U] [i_0]))))));
                            var_28 -= ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_4 [i_3 + 3])) ? (((/* implicit */int) arr_4 [i_3 + 1])) : (((/* implicit */int) arr_4 [i_3 + 1])))), (((/* implicit */int) min((var_9), (arr_4 [i_3 - 1]))))));
                            var_29 = ((/* implicit */unsigned int) ((var_12) <= (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_6))))));
                        }
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)58)) - (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_1])) : (((/* implicit */int) (unsigned char)247))))))) ? (((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)32))))) - (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                    }
                } 
            } 
            var_31 = ((/* implicit */long long int) arr_9 [i_1] [i_0] [i_0] [i_0] [i_0]);
        }
        for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            var_32 = ((/* implicit */unsigned int) arr_2 [i_0] [0U] [i_0]);
            var_33 |= arr_2 [(short)21] [i_7] [(unsigned char)1];
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_8 = 1; i_8 < 8; i_8 += 2) 
    {
        var_34 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) 1066876138U)) : (arr_20 [i_8 - 1])))));
        var_35 |= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_8 + 1] [i_8 + 1] [(unsigned char)2] [i_8] [i_8 - 1] [i_8]))))) ? (arr_6 [21LL] [i_8] [i_8 + 2] [i_8]) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)30815)) - (arr_17 [i_8] [i_8] [i_8] [11] [i_8] [i_8]))))));
        var_36 *= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) arr_19 [i_8 - 1])) : (((((/* implicit */_Bool) (short)-28652)) ? (678090397U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))));
    }
}
