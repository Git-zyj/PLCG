/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9105
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
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (((unsigned long long int) var_11))))) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_12), (var_3)))) ? (((/* implicit */int) ((signed char) var_10))) : (((/* implicit */int) var_10))))))))));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */int) max((var_11), (var_13)))) & (((/* implicit */int) var_4))))) : (min(((-(var_3))), (((/* implicit */long long int) var_13))))));
}
