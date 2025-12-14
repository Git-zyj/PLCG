/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77095
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_7), (((/* implicit */int) var_5)))))))) | (((/* implicit */int) (((~(((/* implicit */int) var_8)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
    var_11 = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) != (((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (max((2561092582U), (((/* implicit */unsigned int) (unsigned short)65535)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)83))) : (min((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) (unsigned short)0)))))))));
}
