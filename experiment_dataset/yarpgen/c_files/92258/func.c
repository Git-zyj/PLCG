/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92258
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
    var_16 -= ((/* implicit */unsigned short) ((var_5) >= (var_7)));
    var_17 = ((unsigned int) ((unsigned int) ((unsigned int) var_5)));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_15) * (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-1)) * (var_2))))))) ? ((~(max((((/* implicit */unsigned long long int) var_15)), (var_10))))) : (((/* implicit */unsigned long long int) max((var_3), (min((((/* implicit */int) var_12)), (var_3))))))));
}
