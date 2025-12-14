/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91349
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_17 = ((/* implicit */short) arr_1 [i_0]);
        var_18 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)-22611))))) : (((((/* implicit */_Bool) (short)-13555)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-60))))))))));
        var_19 = ((/* implicit */_Bool) ((unsigned long long int) ((var_11) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned short)0]))))));
    }
    var_20 &= ((/* implicit */short) var_2);
    var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) var_2))))) || ((_Bool)0)));
}
