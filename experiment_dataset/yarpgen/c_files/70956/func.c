/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70956
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
    var_14 = ((/* implicit */short) (-(((((((/* implicit */_Bool) (signed char)127)) ? (2870009547763136687ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-7)) - (((/* implicit */int) (signed char)0)))))))));
    var_15 = ((short) ((int) (+(2870009547763136679ULL))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) / (var_5)))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) ((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (signed char)-117)))) && (((((/* implicit */_Bool) (signed char)-107)) && (((/* implicit */_Bool) var_2)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 1; i_3 < 13; i_3 += 2) /* same iter space */
                    {
                        arr_13 [i_0] [i_3] [(unsigned char)8] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)91)) & (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 4 */
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            var_17 += ((/* implicit */unsigned char) (((+(((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_0] [i_3] [i_2])), (arr_4 [i_0])))))) + ((~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))))));
                            arr_16 [i_3] [i_0] [14] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)114)) >> (((int) (signed char)11))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_1))));
                            var_19 = ((/* implicit */int) min(((-(((unsigned long long int) (_Bool)1)))), (((((/* implicit */_Bool) arr_12 [i_3 - 1] [i_3] [i_3] [i_5] [14])) ? (min((((/* implicit */unsigned long long int) arr_4 [i_2])), (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned char) var_8))))))))));
                            arr_20 [i_0] [4U] [(unsigned char)10] [i_2] [i_5] [i_3 + 2] [i_3] = ((/* implicit */unsigned int) var_9);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            arr_23 [i_0] [i_1] [i_2] [i_3 + 2] [i_3] = ((/* implicit */long long int) arr_22 [i_0] [6U] [i_3] [i_3] [i_6] [i_1] [i_2]);
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((unsigned int) var_6)))));
                            var_22 = ((/* implicit */unsigned int) arr_4 [(short)14]);
                        }
                        for (short i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            arr_27 [i_3] [i_3] [i_2] [i_1] [i_3] = arr_9 [(signed char)6] [(signed char)5] [i_3 + 1] [0U];
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (signed char)-92)))), ((-(((/* implicit */int) arr_18 [i_7] [i_7] [i_3] [(_Bool)1] [i_1] [(unsigned char)3]))))))) || ((!(((/* implicit */_Bool) arr_9 [i_3 + 2] [i_3] [i_3 - 1] [i_3 + 2]))))));
                            arr_28 [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned char)245)) - (240)))));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_11))) << (((max((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) (unsigned char)245)))) - (240U))))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 1; i_8 < 13; i_8 += 2) /* same iter space */
                    {
                        var_25 += ((/* implicit */long long int) ((((/* implicit */_Bool) -4242095079690377657LL)) && (((/* implicit */_Bool) arr_2 [i_8 + 2]))));
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */int) var_12)) * (((/* implicit */int) arr_10 [i_8 - 1] [i_8 + 2] [i_8 - 1]))));
                    }
                    for (unsigned char i_9 = 1; i_9 < 13; i_9 += 2) /* same iter space */
                    {
                        var_27 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) (+((+(588049549)))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_9] [i_9] [i_2] [i_1] [i_0]))) : ((~(3887149994758855579LL))))));
                        arr_35 [i_9 - 1] [i_2] = arr_32 [i_9] [i_9] [i_2] [i_1] [i_0];
                        arr_36 [i_0] [i_1] [i_2] [i_9 + 1] |= ((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_1] [i_2] [12LL]);
                    }
                    arr_37 [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_25 [8U] [i_1] [i_2] [i_2] [i_1]))))) >= (arr_2 [i_2])));
                    var_28 |= ((/* implicit */unsigned short) (-(-5024545249025586724LL)));
                }
            } 
        } 
    } 
}
