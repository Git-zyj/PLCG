/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58640
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
    var_11 = ((/* implicit */_Bool) min((var_11), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (-(var_1)))) && (((/* implicit */_Bool) var_4)))))) == ((-(var_1)))))));
    var_12 ^= ((min((((/* implicit */long long int) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_8))))), (min((((/* implicit */long long int) var_4)), (var_0))))) >= (((/* implicit */long long int) var_4)));
    var_13 = ((/* implicit */int) max((var_13), ((+(((/* implicit */int) var_2))))));
    var_14 += ((/* implicit */int) ((((unsigned long long int) ((var_5) < (((/* implicit */long long int) var_4))))) == (((/* implicit */unsigned long long int) var_0))));
    var_15 -= ((((/* implicit */_Bool) min((max((((/* implicit */long long int) var_10)), (var_5))), (var_0)))) ? (((((((/* implicit */unsigned int) var_9)) / (var_4))) - (((unsigned int) var_10)))) : (((((/* implicit */_Bool) (+(var_4)))) ? (max((var_4), (((/* implicit */unsigned int) var_2)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_3))))));
}
