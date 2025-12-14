/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85495
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
    var_11 |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_4)), (((unsigned long long int) min((var_1), (((/* implicit */long long int) (_Bool)1)))))));
    var_12 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_9))))))), (var_6)));
    var_13 &= max((((/* implicit */short) (!(var_8)))), ((short)-30835));
    var_14 = (~(((((((/* implicit */_Bool) (unsigned char)0)) ? (3205401701868662637LL) : (var_4))) & (((/* implicit */long long int) ((/* implicit */int) var_8))))));
}
