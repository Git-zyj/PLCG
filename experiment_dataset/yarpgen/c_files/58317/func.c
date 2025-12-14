/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58317
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))) : (var_8)));
    var_19 = ((/* implicit */_Bool) min((((var_3) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (((-9223372036854775807LL - 1LL)) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))), (((/* implicit */int) (unsigned char)3))));
    var_20 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)0))))) ? (var_12) : ((~(((/* implicit */int) (unsigned short)1))))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)247))))) : (0LL)))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) / (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */unsigned long long int) 1125899906842623LL)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (var_14)))))) ? (min((((((/* implicit */long long int) ((/* implicit */int) var_10))) - (var_15))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((137438953471LL), (((/* implicit */long long int) var_10)))))))))));
}
