/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73687
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
    var_13 &= ((/* implicit */int) 511ULL);
    var_14 = ((/* implicit */_Bool) var_9);
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((((((/* implicit */int) var_6)) != (((/* implicit */int) var_3)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_10)))) : (((/* implicit */int) var_9)))) : (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)(-127 - 1))))) << (((((/* implicit */int) var_11)) - (94)))))));
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_8))));
}
