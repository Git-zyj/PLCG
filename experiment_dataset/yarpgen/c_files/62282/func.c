/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62282
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
    var_10 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (var_1))));
    var_11 = max((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_4))))), (max((((((/* implicit */int) var_9)) / (2147483647))), (((/* implicit */int) var_3)))));
    var_12 = ((/* implicit */unsigned int) ((4800368229572650322ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 13646375844136901272ULL)) && (((/* implicit */_Bool) var_1))))))));
    var_13 = ((/* implicit */_Bool) min((var_13), ((!(((/* implicit */_Bool) var_8))))));
}
