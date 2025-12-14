/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80440
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
    var_16 ^= ((/* implicit */short) (-(18446744073709551615ULL)));
    var_17 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))) : (min((var_6), (((/* implicit */unsigned long long int) var_10))))))));
    var_18 ^= ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_6))))) || (((/* implicit */_Bool) var_9)));
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_0))));
    var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) var_9))))) ? (var_4) : (((var_6) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
}
