/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64927
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
    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) var_2))));
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_2) % (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_3)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_0), (((/* implicit */short) var_9)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned long long int) var_10))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (var_5))) : (max((((/* implicit */unsigned long long int) var_8)), (var_2)))))));
    var_13 = ((/* implicit */_Bool) max((var_13), (((_Bool) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_10)) : (var_2))))))));
    var_14 = ((/* implicit */short) (!(((_Bool) var_3))));
}
