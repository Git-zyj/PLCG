/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67413
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)16523))) >= (11843865969116042261ULL)));
    var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_13)), (max((((((/* implicit */long long int) ((/* implicit */int) var_0))) - (var_16))), (((/* implicit */long long int) var_8))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_2 [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0] [i_0])), ((~(((/* implicit */int) arr_0 [i_0] [i_0]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(3842437639039596983ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)16615)) <= (((/* implicit */int) (_Bool)0)))))))) : (((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-34))))) : (max((-3977430556013608051LL), (((/* implicit */long long int) (short)12288))))))));
        arr_3 [i_0] = ((((((/* implicit */_Bool) (short)-1849)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (6602878104593509373ULL))) ^ ((((+(var_14))) | (15ULL))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_21 = ((/* implicit */int) max((((((/* implicit */_Bool) (signed char)127)) ? (2679406712U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))), (((/* implicit */unsigned int) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_5 [i_1])))))));
        arr_7 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_1])))));
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        var_22 = ((/* implicit */short) arr_4 [i_2 + 1]);
        arr_10 [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (short)1848)), (15ULL)));
        arr_11 [i_2] = min(((~(11843865969116042269ULL))), (((/* implicit */unsigned long long int) (~(((arr_8 [i_2] [i_2]) & (1863809457U)))))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (arr_8 [i_2] [i_2]))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)44)) / (((/* implicit */int) arr_4 [i_2])))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)127)) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) (signed char)22))))) : (((((/* implicit */_Bool) arr_5 [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)1850), ((short)-2689))))) : (min((((/* implicit */long long int) arr_4 [i_2])), (arr_9 [i_2])))))));
    }
    var_24 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_6)), ((unsigned short)0)))) ? ((~(((/* implicit */int) (signed char)0)))) : (((((/* implicit */int) (short)1848)) / (((/* implicit */int) (unsigned char)207))))))) / (((((/* implicit */_Bool) var_4)) ? (min((var_11), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
    /* LoopSeq 1 */
    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        arr_14 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [(unsigned short)6] [i_3])) ? (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14604306434669954632ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3]))) : (((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_13 [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) (short)-8166)) ? (var_9) : (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_3])))))))));
        arr_15 [2LL] [i_3] = ((/* implicit */long long int) arr_12 [i_3]);
    }
}
