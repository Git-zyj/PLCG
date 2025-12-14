/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74189
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)79)) ? (var_1) : (((/* implicit */int) var_4))));
    var_12 = ((/* implicit */short) ((var_10) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_7))))))))));
    var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20)) ? (var_9) : ((~(var_9)))))) ? (((/* implicit */unsigned long long int) (~(0LL)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (var_6))));
    var_14 = (((~(max((var_8), (((/* implicit */unsigned long long int) var_2)))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
    var_15 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(var_4))))) + (max((var_2), (((/* implicit */long long int) var_3))))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (var_6))))));
}
