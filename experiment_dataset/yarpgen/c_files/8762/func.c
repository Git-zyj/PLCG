/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8762
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
    for (signed char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_10 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9688210333840381915ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_5 [i_0])))))));
                            arr_13 [(_Bool)1] [i_4] [i_4] [i_0 + 1] = ((/* implicit */unsigned long long int) ((var_1) >> (((((/* implicit */int) (signed char)-34)) + (53)))));
                            arr_14 [7] [i_1] [(signed char)13] [i_1] [i_4] = (signed char)-12;
                            arr_15 [i_0] [i_4] [i_4] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [i_0 + 1] [11U] [i_0 + 1] [i_0 + 1] [i_4 - 1]))));
                        }
                        for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            arr_18 [i_3] [11ULL] = ((/* implicit */unsigned long long int) ((((var_2) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_7 [i_2] [(signed char)10] [i_2])) + (177))) - (60)))));
                            arr_19 [i_0] [i_1] [i_2] [i_2] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((short) (short)(-32767 - 1)))) : (((((/* implicit */_Bool) arr_2 [10ULL] [10ULL] [10ULL])) ? (((/* implicit */int) (short)-21941)) : (((/* implicit */int) (short)4709))))));
                        }
                        arr_20 [i_0] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_0 + 2]))));
                        arr_21 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */signed char) (short)-27790);
                        arr_22 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0 - 1]);
                        var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) (_Bool)1))));
                    }
                    arr_23 [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)41)) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_2])))))));
                    arr_24 [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */short) (unsigned char)248);
                    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */int) (unsigned short)4095)) >= (((/* implicit */int) (signed char)64)))))));
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_6 = 1; i_6 < 11; i_6 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) arr_2 [i_6 + 1] [i_0] [i_0 + 1]);
                                var_14 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_26 [i_0] [i_0 + 2] [i_6 + 1]))));
                                arr_31 [i_7] [i_7] [(unsigned char)11] [i_7] [(short)1] = ((/* implicit */_Bool) var_5);
                                arr_32 [i_0] [i_0] [i_6] |= ((/* implicit */_Bool) arr_5 [i_1]);
                            }
                        } 
                    } 
                    var_15 &= ((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_6] [i_6]);
                    arr_33 [i_0] = ((/* implicit */long long int) 846385825);
                    arr_34 [i_0] [i_1] [i_1] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-16134)))))));
                }
                for (short i_9 = 2; i_9 < 11; i_9 += 2) 
                {
                    var_16 = ((/* implicit */unsigned short) min((((/* implicit */short) (signed char)-65)), ((short)4709)));
                    var_17 = ((/* implicit */unsigned long long int) (short)14477);
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        arr_41 [i_10] = ((/* implicit */unsigned short) var_1);
                        var_18 *= ((/* implicit */signed char) (~(((/* implicit */int) (short)14336))));
                    }
                    for (long long int i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        var_19 = ((/* implicit */_Bool) (~(var_6)));
                        arr_44 [i_0] [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)23118)) ? (((((/* implicit */int) (unsigned short)16320)) >> (((var_3) - (10159759516365814925ULL))))) : (((/* implicit */int) (short)4709))));
                        arr_45 [i_0] [i_1] [i_9] [i_11] = ((/* implicit */int) arr_43 [i_11] [i_11] [i_1] [i_1] [i_0]);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 4; i_12 < 12; i_12 += 3) 
                    {
                        for (short i_13 = 3; i_13 < 11; i_13 += 3) 
                        {
                            {
                                arr_50 [i_0 + 2] [i_9] [i_9] [i_1] [i_13] [i_0 + 2] [i_9] = ((/* implicit */short) arr_49 [i_0] [i_1] [i_1] [i_9] [i_12] [i_0] [i_13]);
                                arr_51 [i_13] = ((/* implicit */signed char) (~(var_9)));
                            }
                        } 
                    } 
                }
                for (unsigned int i_14 = 1; i_14 < 13; i_14 += 2) 
                {
                    arr_54 [i_14] [i_14] = ((/* implicit */unsigned long long int) var_2);
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 2; i_15 < 13; i_15 += 2) 
                    {
                        for (unsigned long long int i_16 = 2; i_16 < 12; i_16 += 4) 
                        {
                            {
                                arr_62 [i_0] [i_14] [i_14 + 1] [i_15] [i_16] [i_15] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((((/* implicit */int) (short)14200)) & (((/* implicit */int) (short)112)))) * (((/* implicit */int) ((((/* implicit */int) (short)992)) <= (-251073283))))))), (((arr_29 [i_0] [i_1] [i_0] [i_14] [i_0] [i_0]) & (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)16765)))))))));
                                arr_63 [i_0] [i_0] [i_0 + 2] [i_14] [i_0 + 2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(signed char)9] [i_1] [(signed char)9] [i_15]))) - (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (arr_11 [i_15] [i_15] [i_15 - 2] [i_15 - 2] [i_15]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)41558), (((/* implicit */unsigned short) (signed char)28))))))))));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (906630813868416898ULL)));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((max((((/* implicit */unsigned int) min((846385834), (((/* implicit */int) var_5))))), ((-(3259360819U))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                    var_22 = ((/* implicit */int) max((var_22), (((arr_56 [i_0 + 1] [i_0 + 2] [(signed char)8] [i_0 + 2]) | (((/* implicit */int) arr_25 [i_0] [i_0]))))));
                    arr_64 [i_0 + 1] [i_0 + 2] [i_14] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) arr_17 [i_0 + 2] [i_1] [i_14])))))) ? (((((var_2) - (((/* implicit */long long int) ((/* implicit */int) (signed char)49))))) - (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_60 [i_1] [i_14])), (var_0))))))) : (((/* implicit */long long int) max((((1612513055U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-27393))))), (((/* implicit */unsigned int) ((var_9) != (((/* implicit */long long int) ((/* implicit */int) var_4)))))))))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (short)-4823)) ? (((/* implicit */unsigned int) -125507967)) : (((((/* implicit */_Bool) -846385825)) ? (2682454248U) : (((/* implicit */unsigned int) 1056964608))))))));
}
