/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5978
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
    var_19 = ((/* implicit */short) var_16);
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))) : (((unsigned int) ((signed char) var_2)))));
    var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_11)), (((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)121))) | (var_4))))));
    var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_18)), (min((((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4096))) : (7ULL))), (min((var_7), (((/* implicit */unsigned long long int) var_17))))))));
}
