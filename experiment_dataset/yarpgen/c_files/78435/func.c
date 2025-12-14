/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78435
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
    var_16 &= ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-70))) : (((long long int) min((((/* implicit */unsigned long long int) var_12)), (var_15)))));
    var_17 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) 370199022))) + (max((var_14), (min((((/* implicit */int) var_12)), (var_2)))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)35216))))) : (((long long int) var_14))))) - (var_15)));
    var_19 *= ((/* implicit */unsigned int) min((var_13), (((unsigned short) var_12))));
}
