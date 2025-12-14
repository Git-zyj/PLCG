/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60792
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
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_17))));
    var_21 -= ((/* implicit */unsigned short) (~(((/* implicit */int) var_18))));
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) (~(var_3)))) : (min((((/* implicit */long long int) ((var_13) * (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))), (((((/* implicit */_Bool) (signed char)46)) ? (4821830862691684922LL) : (((/* implicit */long long int) var_0)))))))))));
}
