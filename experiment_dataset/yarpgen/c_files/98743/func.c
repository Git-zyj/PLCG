/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98743
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
    var_11 = ((/* implicit */long long int) min((var_9), (((/* implicit */unsigned int) var_5))));
    var_12 = ((/* implicit */short) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) >= (((/* implicit */int) var_2)))))) : (((unsigned int) var_2)))), (((/* implicit */unsigned int) var_10))));
    var_13 = (!(((/* implicit */_Bool) var_2)));
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) var_4))));
    var_15 = ((/* implicit */long long int) (~(max((((((/* implicit */_Bool) var_9)) ? (2147483647) : (((/* implicit */int) var_5)))), (max((((/* implicit */int) var_10)), (var_1)))))));
}
