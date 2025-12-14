/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57580
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
    var_20 ^= ((/* implicit */_Bool) ((unsigned char) ((short) ((((/* implicit */_Bool) (unsigned short)45363)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : ((-((+(((/* implicit */int) var_7))))))));
                        arr_11 [i_0] [i_2] [(_Bool)0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((int) (~(((/* implicit */int) (_Bool)1)))));
                    }
                    var_22 ^= ((/* implicit */short) (_Bool)1);
                    /* LoopSeq 4 */
                    for (unsigned short i_4 = 2; i_4 < 22; i_4 += 2) 
                    {
                        arr_15 [(signed char)16] [i_0] [9] [i_1] [i_2] [i_4] = ((/* implicit */_Bool) ((short) -1929881934));
                        var_23 = ((/* implicit */long long int) ((((((((/* implicit */int) (unsigned short)18921)) & (((/* implicit */int) arr_4 [i_0] [i_0])))) & (((((/* implicit */_Bool) (signed char)-105)) ? (448743003) : (arr_6 [i_0] [i_0]))))) | ((~(max((arr_9 [i_1] [i_1] [(_Bool)1] [(_Bool)1] [i_1] [i_0]), (((/* implicit */int) (unsigned short)18921))))))));
                        arr_16 [i_0] = ((/* implicit */unsigned char) ((arr_7 [i_4 + 1]) && (min((arr_7 [i_4 - 1]), (arr_7 [i_4 - 2])))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        var_24 = ((/* implicit */long long int) arr_19 [i_0] [(unsigned short)3] [(_Bool)1] [(short)5] [i_0]);
                        var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2355167772645718589LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-59))))) ? ((+(6261556150877732611ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_2] [i_2] [i_1] [i_0]))));
                    }
                    for (unsigned short i_6 = 1; i_6 < 21; i_6 += 2) 
                    {
                        arr_23 [i_0] [i_0] [i_0] [14U] [i_0] [i_0] = ((/* implicit */int) arr_13 [i_0] [i_0]);
                        var_26 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_6 + 3] [i_1 - 1] [i_0])) * (((/* implicit */int) arr_3 [i_6] [i_6 + 2]))))) ? (((((/* implicit */_Bool) (unsigned short)46614)) ? (((/* implicit */int) arr_22 [22LL] [i_1 + 1] [i_0])) : (arr_5 [i_1 - 1]))) : (arr_6 [i_2] [i_2])))) ? (((/* implicit */long long int) arr_6 [i_2] [i_1])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_2] [(signed char)16] [i_1 + 1] [i_6 + 3] [i_6 + 3]))) : (137438953471LL)))));
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((((/* implicit */_Bool) arr_5 [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) -137438953484LL)) ? (1087695410) : (((/* implicit */int) (signed char)-82))))))) : (((((((/* implicit */_Bool) arr_13 [i_2] [i_2])) && (((/* implicit */_Bool) arr_13 [i_0] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_2] [8LL] [i_1] [i_0] [i_2]))) : (max((((/* implicit */unsigned int) (short)-12294)), (3174243453U)))))))));
                        arr_24 [i_0] [i_0] [i_2] [(unsigned short)6] = ((/* implicit */_Bool) min((((/* implicit */int) ((signed char) arr_4 [i_1 - 2] [i_1 - 2]))), (((((/* implicit */int) arr_20 [i_1] [(signed char)20] [i_1 - 2] [i_1] [i_0])) - (((/* implicit */int) arr_20 [i_1] [(_Bool)1] [i_1 - 2] [i_1 + 1] [i_0]))))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1 - 2] [i_1] [i_1 + 1] [i_1 - 1] [i_2])) ? (((/* implicit */int) ((_Bool) var_6))) : (arr_25 [2ULL] [i_1] [(signed char)14] [2ULL] [i_7])))), (((((arr_0 [i_2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_19 [i_7] [8] [22] [(_Bool)1] [i_7]), (((/* implicit */unsigned short) var_12)))))))))))));
                        arr_28 [i_0] [i_1] [i_2] [i_0] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((unsigned short) (unsigned short)28836))) : (((/* implicit */int) ((short) (_Bool)1)))))) ? (((((/* implicit */_Bool) ((arr_9 [(short)2] [(short)2] [(short)2] [i_7] [i_0] [i_0]) / (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_20 [i_0] [i_0] [i_0] [(short)3] [i_0]), (arr_27 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (7125594982707752327ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [20] [i_1])) ? (((/* implicit */int) arr_4 [4LL] [i_1])) : (arr_6 [i_0] [i_2])))) ? (((((/* implicit */_Bool) 1613683187)) ? (((/* implicit */long long int) 1120723847U)) : (137438953471LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))))))));
                    }
                    var_29 = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned short) ((arr_12 [i_0] [i_1] [i_1] [(_Bool)1]) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (arr_25 [i_0] [21LL] [i_0] [i_0] [i_0]))))), (var_14)));
                    arr_29 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0] [i_1 - 2] [i_1 - 2] [i_1 - 2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1 - 2] [i_1 - 2] [i_1])) ? (((/* implicit */int) arr_10 [i_0] [i_1 - 2] [i_1 - 2] [i_1])) : (((/* implicit */int) arr_10 [i_0] [i_1 - 2] [i_1 - 2] [i_1])))))));
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_17))) - (((((((/* implicit */_Bool) -8968480333702866222LL)) ? (((/* implicit */int) (unsigned short)65535)) : (var_8))) / (var_13)))));
}
