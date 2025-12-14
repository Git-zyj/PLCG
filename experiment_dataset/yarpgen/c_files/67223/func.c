/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67223
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
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) var_1))));
    var_16 ^= min(((_Bool)1), (((_Bool) ((((/* implicit */_Bool) (unsigned short)65513)) ? (((/* implicit */long long int) 2759870430U)) : (-8664936137890089219LL)))));
    var_17 &= ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) 1092367025)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0))))))), (min((((/* implicit */unsigned int) ((unsigned short) var_7))), (var_7)))));
}
