/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67229
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
    var_16 -= ((/* implicit */_Bool) var_4);
    var_17 = ((/* implicit */signed char) ((((((/* implicit */int) ((signed char) var_12))) <= (((/* implicit */int) var_7)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_12), (var_15))))) != (((unsigned long long int) var_14)))))));
    var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)31212)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_7)))))) * (min((((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) (short)-7065)) : (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (var_2)))))));
}
