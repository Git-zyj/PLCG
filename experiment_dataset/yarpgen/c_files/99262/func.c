/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99262
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
    var_16 = ((/* implicit */signed char) min((((((/* implicit */_Bool) -1418668838)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) - (4126491271U)))) ? (((var_2) + (((/* implicit */int) var_3)))) : (((/* implicit */int) var_10))))));
    var_17 |= ((/* implicit */long long int) ((min((((((/* implicit */_Bool) 4126491271U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_12)))))) & ((+((+(((/* implicit */int) var_3))))))));
    var_18 = ((/* implicit */signed char) max((var_18), (var_5)));
    var_19 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((((/* implicit */int) var_12)) / (var_2)))))) + (min((((/* implicit */unsigned int) var_5)), (min((((/* implicit */unsigned int) var_10)), (var_1)))))));
}
