/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85599
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
    var_19 &= ((/* implicit */short) ((unsigned char) (short)-1));
    var_20 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) var_14)) < ((~(var_3)))))), (min((((((/* implicit */_Bool) var_18)) ? (63) : (((/* implicit */int) var_2)))), (((/* implicit */int) var_5))))));
    var_21 = ((/* implicit */signed char) min((((int) var_6)), (-63)));
    var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) min((((/* implicit */int) var_1)), (-63)))) ? (max((((/* implicit */unsigned long long int) var_14)), (var_6))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12)))))))));
}
