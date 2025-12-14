/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9268
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
    var_16 &= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */int) var_2))));
    var_17 = var_3;
    var_18 += ((/* implicit */int) var_14);
    var_19 = ((/* implicit */unsigned int) ((((min((11792163240397534464ULL), (((/* implicit */unsigned long long int) var_4)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) var_1)), (var_11))))))) : (((/* implicit */int) var_1))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) + (min((((/* implicit */int) (unsigned short)5099)), ((+(((/* implicit */int) var_6))))))));
}
