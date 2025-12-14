/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84659
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
    var_16 = ((/* implicit */int) var_10);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) min((8235956455323843682LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) arr_2 [i_0])))))));
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)127))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 8235956455323843682LL)) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) (signed char)115))))) : (max((1552720661068585404LL), (((/* implicit */long long int) (signed char)-18))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)57))) : (8243354924754692829LL)))) ? (((((var_2) + (2147483647))) << (((((/* implicit */int) arr_0 [i_0])) - (7315))))) : ((~(-1065514656)))))) : (arr_1 [3] [i_0]));
        arr_3 [i_0] = (signed char)61;
    }
}
