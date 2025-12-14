/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69631
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
    var_20 = ((var_0) << (((min((((var_5) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)29))))), (min((((/* implicit */long long int) (unsigned char)29)), (-36028797018963968LL))))) + (36028797018963974LL))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) (+(min(((+(((/* implicit */int) var_16)))), (((/* implicit */int) ((((/* implicit */_Bool) -36028797018963968LL)) || (((/* implicit */_Bool) -36028797018963954LL)))))))));
        var_22 += ((/* implicit */int) ((((/* implicit */_Bool) (+(-467523703038332292LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) << (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)210), (((/* implicit */unsigned char) arr_1 [(short)7])))))) : (arr_0 [i_0 - 2]))) : (min((min((((/* implicit */long long int) (unsigned char)46)), (var_17))), (36028797018963967LL)))));
    }
}
