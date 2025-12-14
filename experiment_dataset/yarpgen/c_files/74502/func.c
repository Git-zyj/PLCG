/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74502
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
    var_11 = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (((max((268435424U), (((/* implicit */unsigned int) (unsigned short)14)))) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned short) ((arr_3 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) : (max((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))) : (268435441U))), (((/* implicit */unsigned int) var_0))))));
                var_13 = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((((/* implicit */int) arr_1 [i_0] [i_0 - 1])) | (((/* implicit */int) arr_1 [i_0] [i_0 + 2])))) : (((/* implicit */int) max((arr_1 [i_0] [i_0 - 3]), (((/* implicit */short) var_4)))))));
                var_14 = max((((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_0 - 3] [i_1] [i_0 - 3]))))), (((((/* implicit */_Bool) ((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_7)))) ? (((138538465099776LL) * (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 9913989629542684899ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)30257))))))));
            }
        } 
    } 
    var_15 = ((((/* implicit */_Bool) (unsigned short)30257)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) max(((unsigned short)35287), (((/* implicit */unsigned short) var_3))))) ? (((/* implicit */unsigned long long int) ((long long int) var_3))) : (((((/* implicit */_Bool) 34359738368ULL)) ? (9913989629542684899ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
    var_16 ^= ((/* implicit */long long int) (-(((/* implicit */int) var_9))));
}
