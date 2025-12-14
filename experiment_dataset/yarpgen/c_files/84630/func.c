/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84630
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (max((((16558491124729139790ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (var_14))))) : (((unsigned long long int) (~(var_12))))));
    var_16 = ((/* implicit */unsigned short) min((var_13), ((((~(((/* implicit */int) (unsigned short)65535)))) > (((((/* implicit */int) var_7)) - (((/* implicit */int) var_5))))))));
    var_17 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (min((var_12), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 30U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5)))))))));
}
