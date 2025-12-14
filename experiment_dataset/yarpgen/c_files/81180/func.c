/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81180
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
    var_16 ^= min((var_5), (var_13));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) var_13)))))))) : (((/* implicit */int) var_1))));
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-102)) : (((/* implicit */int) (signed char)(-127 - 1))))), (((((/* implicit */_Bool) max(((signed char)-127), (var_13)))) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) (signed char)-119)))))))));
}
