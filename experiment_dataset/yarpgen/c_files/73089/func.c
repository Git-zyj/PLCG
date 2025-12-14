/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73089
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
    var_18 = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))), (max((var_14), (((/* implicit */unsigned long long int) (_Bool)0)))))), (var_14)));
    var_19 ^= ((/* implicit */int) 16929843879876122094ULL);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_20 = arr_0 [i_0] [i_0];
        arr_2 [i_0] = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned short) var_2))));
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2026234286024557507ULL)) ? (((var_1) ? (var_0) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [15ULL]))) & (max((((/* implicit */unsigned long long int) var_11)), (var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)116))))) : ((~(2LL)))))))))));
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (+(((arr_1 [3LL] [i_0]) / (((/* implicit */int) ((signed char) var_3))))))))));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)13176)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)2))));
    }
    var_24 |= ((/* implicit */unsigned long long int) (signed char)-116);
}
