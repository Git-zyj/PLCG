/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74409
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
    var_11 = ((/* implicit */short) var_5);
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned short)7488)) : (((/* implicit */int) (short)-24199))));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) var_10))))) ? (((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (var_1)))) ? (var_3) : (min((((/* implicit */unsigned long long int) ((signed char) var_8))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_1)) : (var_3)))))));
    var_14 &= ((/* implicit */unsigned int) var_0);
}
