/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90260
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) min((((/* implicit */int) var_12)), (var_17)))) : (((((/* implicit */_Bool) var_17)) ? (var_4) : (((/* implicit */long long int) var_13))))))) ? ((((!(((/* implicit */_Bool) (unsigned char)45)))) ? (var_13) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_16)) : (var_15))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
    var_21 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2044)) ? (((/* implicit */int) var_11)) : (var_15)))) ? (var_15) : (min((((/* implicit */int) var_11)), (var_17)))))) - (var_7)));
    var_22 = ((/* implicit */int) var_6);
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((arr_0 [i_0 + 2] [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) var_16))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0])) : (var_17)))) ? (((arr_0 [(short)18] [i_0]) / (var_4))) : (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)252)))))));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_9)) != (arr_0 [i_0] [i_0])));
    }
}
