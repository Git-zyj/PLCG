/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94188
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
    var_14 = ((/* implicit */signed char) (((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_2)) : (var_9))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    var_15 = ((/* implicit */signed char) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / ((-(var_10)))))));
    var_16 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((min((var_9), (((/* implicit */unsigned long long int) var_2)))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_5))))))))));
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-4649)) : (((/* implicit */int) (short)(-32767 - 1))))))))))));
}
