/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90800
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
    var_11 &= ((/* implicit */short) (~((~(var_3)))));
    var_12 = ((/* implicit */unsigned char) max((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)101)), (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned short)28)) : (((/* implicit */int) (unsigned short)65535)))))))));
    var_13 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */signed char) var_4)), (var_7))))))), (min((((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) ((int) var_5)))))));
}
