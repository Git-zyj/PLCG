/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62921
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
    var_15 &= ((/* implicit */signed char) var_2);
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned int) 67108863))))) || (((/* implicit */_Bool) 67108837))));
    var_17 &= ((/* implicit */long long int) (-((~(((/* implicit */int) (signed char)-79))))));
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */int) (short)15)), (var_11)))), (min((9223372036586340352ULL), (((/* implicit */unsigned long long int) (short)10744))))))) ? (max((((/* implicit */unsigned long long int) 1347795607U)), (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
}
