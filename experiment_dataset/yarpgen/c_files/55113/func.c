/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55113
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
    var_15 = ((/* implicit */unsigned short) (-(max((var_2), (((((/* implicit */int) var_11)) % (((/* implicit */int) var_13))))))));
    var_16 = ((/* implicit */unsigned int) ((((min((var_8), (((/* implicit */unsigned int) var_5)))) / (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) <= (((/* implicit */unsigned int) (+(min((var_0), (((/* implicit */int) var_12)))))))));
    var_17 = ((/* implicit */unsigned long long int) var_11);
    var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_1) * (var_1))) << (((((((/* implicit */long long int) ((/* implicit */int) var_9))) * (var_7))) + (672663441398320056LL)))))) ? (((((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_0) : (var_2)))))) : (min((max((var_4), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) max((var_11), (var_11))))))));
}
