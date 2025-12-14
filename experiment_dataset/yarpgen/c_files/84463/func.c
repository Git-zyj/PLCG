/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84463
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
    var_20 = ((/* implicit */unsigned int) var_15);
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (((-2147483647 - 1)) >= (var_5))))) ? (((long long int) (~(((/* implicit */int) var_3))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (unsigned char)7)))), (((/* implicit */int) (unsigned char)16)))))));
    var_22 -= ((/* implicit */int) (+(max((var_1), (((/* implicit */long long int) var_15))))));
    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) min(((+(((unsigned long long int) 9223372036854775807LL)))), (min((max((((/* implicit */unsigned long long int) 4294967295U)), (var_17))), (min((((/* implicit */unsigned long long int) var_4)), (8ULL))))))))));
}
