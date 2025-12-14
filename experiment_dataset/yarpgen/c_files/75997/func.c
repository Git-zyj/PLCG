/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75997
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
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) var_6))));
    var_12 -= ((((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) var_6)))), (((/* implicit */int) var_3))))) ? (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_0))))) : (((/* implicit */int) min((min((var_3), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) var_10))))));
    var_13 -= ((/* implicit */long long int) var_10);
    var_14 &= var_5;
}
