/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79283
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
    var_20 += min((((/* implicit */long long int) ((signed char) ((long long int) var_8)))), (((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) != (var_1))) ? (max((var_8), (((/* implicit */long long int) var_17)))) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_13))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) ((signed char) arr_1 [i_0 - 1]))) : ((-(((/* implicit */int) arr_1 [i_0 + 1]))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) min(((+(min((((/* implicit */int) arr_1 [i_0])), (arr_0 [i_0] [i_0]))))), ((~(arr_0 [i_0 + 1] [i_0 + 1])))));
    }
}
