/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80134
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
    var_11 ^= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_8)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned int) -1963693182))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)125))))) : (max((((/* implicit */unsigned int) (signed char)62)), (var_7)))))));
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (signed char)-62))));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) % (min((var_4), (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))))));
}
