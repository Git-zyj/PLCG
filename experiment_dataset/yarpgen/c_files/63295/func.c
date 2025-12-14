/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63295
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
    var_14 = ((/* implicit */unsigned int) var_3);
    var_15 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_13))))) <= (max((((/* implicit */int) ((((/* implicit */int) var_11)) > (var_6)))), (((int) var_2))))));
    var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) var_11))))) ? (((var_3) / (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (max((var_4), (var_4))))) * (((var_4) * (((/* implicit */long long int) ((((/* implicit */int) var_11)) / (var_6))))))));
}
