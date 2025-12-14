/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61797
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
    var_11 |= ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) min((var_4), (((/* implicit */unsigned char) (signed char)-22)))))) == (var_7))) && (((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_9)))))));
    var_12 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */unsigned long long int) var_7)) % (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_4)))))) * (((((/* implicit */unsigned long long int) max((var_7), (((/* implicit */unsigned int) (signed char)22))))) & (((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
}
