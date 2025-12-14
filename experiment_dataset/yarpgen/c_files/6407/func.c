/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6407
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (((((unsigned int) (_Bool)1)) & (((/* implicit */unsigned int) ((/* implicit */int) min((var_4), (((/* implicit */short) var_2))))))))));
    var_16 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14))))) ? (max((((/* implicit */unsigned long long int) var_6)), (var_0))) : (min((var_3), (((/* implicit */unsigned long long int) var_14)))))) / (((((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_8)))) ? (max((((/* implicit */unsigned long long int) var_14)), (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_13), (((/* implicit */short) var_9)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (4ULL) : (((/* implicit */unsigned long long int) arr_1 [(unsigned short)13])))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)88))) != (var_1)))))));
        var_18 = ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) arr_1 [i_0])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
    {
        var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_12), (((((/* implicit */_Bool) 11163237346846658607ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_0 [i_1] [i_1]))))) : ((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1399387214U)))))));
        var_20 = ((/* implicit */int) ((min((((/* implicit */unsigned int) ((signed char) var_3))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_1 [i_1]))))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) 942072175U)))))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] = ((/* implicit */_Bool) min((max((((/* implicit */long long int) var_14)), (((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (var_6)))) ? (min((((/* implicit */unsigned int) var_4)), (arr_3 [i_2] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [0ULL] [i_2]), (((/* implicit */unsigned short) (_Bool)1)))))))))));
        arr_8 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((var_2), ((_Bool)1))) ? (((/* implicit */long long int) max((arr_1 [i_2]), (((/* implicit */unsigned int) arr_0 [i_2] [(signed char)4]))))) : (((long long int) var_6))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_2] [i_2]))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (arr_4 [8ULL] [i_2])))) ? (((/* implicit */unsigned int) ((var_2) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_2]))))) : (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29722))) : (1915590443U)))))));
    }
}
