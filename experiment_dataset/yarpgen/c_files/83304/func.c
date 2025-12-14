/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83304
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
    var_13 = (((_Bool)1) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23))));
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (var_1)))) ? (((((/* implicit */_Bool) var_2)) ? (var_7) : (-5231989146499172008LL))) : (((var_11) ? (var_0) : (((/* implicit */long long int) 2319429074U))))))) && (((_Bool) var_1))));
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_3)) : (var_1)))) ? ((((_Bool)1) ? (var_0) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) (((-(1ULL))) == (((/* implicit */unsigned long long int) var_7)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_3 [i_0] [(signed char)14] [i_0 + 2])) ? (((/* implicit */int) (unsigned short)7108)) : (((/* implicit */int) arr_1 [i_0] [i_1])))) : (((/* implicit */int) (unsigned short)27)))))));
            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_3 [i_0] [i_0] [(short)8]))));
        }
        arr_5 [i_0 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (var_10) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_3 [(unsigned short)15] [(unsigned short)15] [i_0])) ? (((/* implicit */int) (short)5)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_11))));
        arr_6 [i_0 - 1] = ((/* implicit */short) ((var_11) ? (arr_2 [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 3] [i_0])))));
    }
    var_18 *= ((/* implicit */_Bool) min((var_7), (var_7)));
}
