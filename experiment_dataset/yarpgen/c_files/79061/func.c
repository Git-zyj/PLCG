/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79061
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
    var_12 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) ((unsigned short) var_11))), ((-(var_8))))) + (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_10))))), (max((((/* implicit */unsigned short) var_3)), (var_7)))))))));
    var_13 &= ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) >= (((/* implicit */int) var_9))));
}
