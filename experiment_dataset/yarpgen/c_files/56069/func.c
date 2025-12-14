/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56069
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_0])))) ^ ((~(var_15)))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    var_20 ^= (-(((/* implicit */int) ((_Bool) arr_2 [i_0] [i_0]))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
                    {
                        arr_13 [6U] [i_3] = ((/* implicit */unsigned short) ((long long int) (~(arr_7 [i_0] [i_1] [i_2] [i_3]))));
                        var_21 = ((/* implicit */long long int) max((((arr_3 [i_1] [i_2]) ? (((/* implicit */int) arr_3 [i_2] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_7)) : (var_10)))) ? ((~(((/* implicit */int) arr_11 [i_3] [i_1] [i_0])))) : (((((/* implicit */_Bool) 18446744073709551600ULL)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_2 [i_2] [i_0]))))))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-1994)) ? (3692096878465250476ULL) : (18446744073709551602ULL)));
                    }
                    for (short i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_4] [4ULL] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 15953504427533609787ULL)) ? (2493239646175941828ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4] [i_1] [i_2]))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_8)), (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (945611234U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [(unsigned char)2])))))))) : (max((((/* implicit */long long int) (short)-30942)), (-9223372036854775786LL)))));
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) var_10))));
                    }
                    arr_18 [i_2] [6LL] [9LL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_3 [i_2] [i_1])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((signed char) var_18))) : (((/* implicit */int) var_18))))));
                    arr_19 [(short)0] [(unsigned char)12] = ((/* implicit */int) ((max((var_10), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_3 [i_0] [i_0])))))));
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned long long int) 7209507769969900150LL)), (3213032276177538503ULL))))) ? (((/* implicit */unsigned long long int) (~(8096208247831885754LL)))) : (7023251869004096816ULL)))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_25 = max((((unsigned long long int) arr_10 [i_5] [i_0])), (((/* implicit */unsigned long long int) ((var_13) ^ (((/* implicit */int) var_3))))));
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_8 [i_5] [i_1] [i_0]))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_1])) != (((/* implicit */int) arr_2 [i_5] [i_0]))))) : (max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) arr_12 [(unsigned short)0] [(unsigned char)8] [i_1] [0LL])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)13643))))))));
                    /* LoopSeq 1 */
                    for (int i_6 = 1; i_6 < 13; i_6 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned int) arr_10 [12ULL] [12ULL]);
                        arr_24 [i_1] [i_5] [(short)2] = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((var_2), (((/* implicit */int) var_12))))), (((((/* implicit */_Bool) var_1)) ? (arr_12 [i_0] [(_Bool)1] [(_Bool)1] [(short)10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [(unsigned char)13] [i_0])))))))) ? (((/* implicit */unsigned long long int) (~(((var_7) ^ (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_5] [i_6 - 1])))))))) : ((~((~(arr_20 [i_5] [i_5] [i_1]))))));
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (+((+(max((((/* implicit */unsigned long long int) arr_9 [(unsigned char)2] [(unsigned char)2] [(signed char)9])), (arr_7 [i_5] [i_5] [i_5] [i_5]))))))))));
                    }
                }
                arr_25 [i_0] = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) (_Bool)0)), (9223372036854775773LL))), (((long long int) arr_12 [i_0] [(unsigned char)8] [i_0] [i_0]))));
                arr_26 [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_2 [i_1] [i_0])) != (((/* implicit */int) arr_10 [i_0] [i_0])))), (((_Bool) arr_2 [i_0] [i_0]))));
            }
        } 
    } 
    var_29 = ((/* implicit */signed char) var_11);
    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) var_1))));
}
