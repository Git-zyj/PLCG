/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64967
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
    var_16 = ((/* implicit */short) ((unsigned long long int) (_Bool)0));
    var_17 = min((((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) (unsigned short)40654)) == (((/* implicit */int) var_7))))), (var_15)))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)50158)), (18446744073709551607ULL)))) ? (((/* implicit */int) min((var_10), (((/* implicit */short) var_0))))) : (((/* implicit */int) ((unsigned short) (unsigned char)234))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 = arr_1 [i_1] [i_0];
            var_19 = ((/* implicit */short) max((var_19), (arr_1 [i_0] [i_0])));
        }
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_15))))) / (arr_0 [i_0])))) ? ((((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-19480))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19474)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 16774789507255751808ULL)))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [13U])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_3 [i_0])))))));
        var_21 &= ((/* implicit */short) ((((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) - (22071))))) >= (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))) ? ((~(((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_2 [(signed char)21] [i_0] [i_0]))));
        arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4503599627370240ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24892))) : (2258655932U)))) ? (((arr_0 [i_0]) - (((/* implicit */unsigned long long int) arr_3 [i_0])))) : (((arr_0 [i_0]) * (((/* implicit */unsigned long long int) arr_3 [i_0]))))));
    }
}
