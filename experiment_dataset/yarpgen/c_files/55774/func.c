/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55774
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
    var_16 = ((/* implicit */signed char) ((var_7) >> (((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) var_7)) >= (var_3)))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_11))))) ? ((+(arr_1 [i_0]))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_1 [i_0]))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0]))) ? ((+(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (var_0) : (((/* implicit */int) (unsigned char)243))))));
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)8))))))));
            }
        }
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            arr_13 [(signed char)8] [(signed char)8] [i_0] = ((/* implicit */unsigned short) (~((~(((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)32752))))))));
            var_19 *= ((/* implicit */unsigned char) min((1267127581), (((((/* implicit */_Bool) arr_8 [i_0] [(unsigned short)2] [i_0])) ? (arr_6 [i_0] [i_0] [i_3] [i_3]) : (590734143)))));
        }
        var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14113456085921543347ULL)) ? (((/* implicit */int) (short)32752)) : (((/* implicit */int) (unsigned short)62328))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (var_0) : (((/* implicit */int) arr_10 [i_0] [i_0]))))) : (((((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */unsigned long long int) var_14)) : (0ULL))) * (((var_13) / (4333287987788008274ULL)))))));
    }
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        arr_17 [i_4] = ((/* implicit */short) max((((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (var_10)))), (min((((var_10) | (((/* implicit */unsigned long long int) arr_16 [i_4])))), (((/* implicit */unsigned long long int) ((1855957649208376863LL) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
        arr_18 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [22] [i_4])) ? ((-(arr_14 [i_4] [i_4]))) : ((-(((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (-1295163439) : (arr_14 [i_4] [i_4])))))));
        arr_19 [i_4] = ((/* implicit */unsigned int) ((short) ((unsigned char) 18446744073709551615ULL)));
    }
    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-1)) ^ (((((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_5])) ? (((((/* implicit */int) (short)32733)) / (((/* implicit */int) (unsigned short)29078)))) : (((/* implicit */int) (unsigned char)1))))));
        arr_22 [9LL] [i_5] = ((/* implicit */short) ((((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) != (var_1)))) + (max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_5]))))), (arr_1 [i_5])))));
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (unsigned char)239)))))));
        arr_23 [i_5] [i_5] = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) 4333287987788008269ULL)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5] [i_5])))))))));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (((!(((/* implicit */_Bool) 10348096669249537306ULL)))) ? (1295163439) : ((+(((((/* implicit */_Bool) arr_12 [i_5])) ? (var_0) : (((/* implicit */int) (short)-256)))))))))));
    }
}
