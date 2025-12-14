/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74946
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
    var_20 |= ((/* implicit */unsigned short) var_15);
    var_21 = ((((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20236))) & (var_19))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */int) var_2)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)20236), (((/* implicit */unsigned short) var_14)))))) & ((~(var_16))))));
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_19)))) ? (((((/* implicit */int) var_5)) % (var_18))) : (((/* implicit */int) var_2))));
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) min((var_7), (var_5)))) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-78), (var_7)))))))))));
}
