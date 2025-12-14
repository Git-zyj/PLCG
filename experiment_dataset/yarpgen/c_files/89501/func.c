/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89501
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
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) 1733550241U)) : (12494641897469872831ULL)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)158)), ((short)31044))))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((long long int) var_7))) : (((((/* implicit */_Bool) (short)7524)) ? (12494641897469872831ULL) : (((/* implicit */unsigned long long int) var_6)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (5952102176239678773ULL))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) (_Bool)1))));
        arr_4 [i_0] = ((/* implicit */long long int) (_Bool)1);
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) 12494641897469872838ULL))));
        arr_7 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) var_3)), (13003181829305880120ULL))))))));
    }
    var_17 = ((/* implicit */short) ((unsigned short) ((((var_12) < (((/* implicit */long long int) var_0)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!((_Bool)1)))))));
}
