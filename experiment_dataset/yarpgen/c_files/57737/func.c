/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57737
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
    var_11 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) ? (min((var_3), (((/* implicit */unsigned long long int) 0LL)))) : (((/* implicit */unsigned long long int) var_9)))) / (var_4)));
    var_12 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) || (((min((((/* implicit */unsigned long long int) (unsigned char)8)), (var_4))) == (((((/* implicit */_Bool) var_4)) ? (15648623365413416060ULL) : (18446744073709551615ULL)))))));
    var_13 &= ((/* implicit */short) var_3);
    var_14 = ((/* implicit */short) min((min((var_8), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) var_9))));
}
