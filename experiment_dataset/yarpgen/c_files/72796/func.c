/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72796
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) (-((~(((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) (unsigned char)158))))))));
        var_20 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)158))));
        arr_2 [1] [1] = ((/* implicit */unsigned int) (+(((3722785445287377868LL) / (((/* implicit */long long int) 2219747781U))))));
        var_21 = ((/* implicit */int) (short)-20430);
        var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) min(((-9223372036854775807LL - 1LL)), (9223372036854775807LL))))) ? (((arr_1 [i_0 - 1]) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1]))) : (min((arr_0 [(unsigned char)15]), (((/* implicit */long long int) (short)26046))))));
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_23 = ((/* implicit */int) (signed char)57);
        var_24 ^= (-(((((var_5) > (((/* implicit */unsigned long long int) -866765435702572060LL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_1]))))) : (min((var_7), (((/* implicit */long long int) arr_1 [4LL])))))));
    }
    var_25 &= (-(((/* implicit */int) var_10)));
    var_26 = ((/* implicit */long long int) ((min((((/* implicit */int) var_4)), ((+(((/* implicit */int) var_10)))))) != (((/* implicit */int) var_10))));
    var_27 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) var_16)) + (((/* implicit */int) min((var_13), (var_12)))))));
}
