/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87185
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
    var_14 = ((/* implicit */int) max(((~(var_1))), (((/* implicit */unsigned int) var_13))));
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((max((var_2), (((/* implicit */unsigned int) var_6)))) >> (((((unsigned int) var_9)) - (4294937028U))))) * (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))))), (var_12))))))))));
    var_16 = ((/* implicit */_Bool) (~(min((max((((/* implicit */unsigned int) (_Bool)1)), (var_1))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4)))))))));
}
