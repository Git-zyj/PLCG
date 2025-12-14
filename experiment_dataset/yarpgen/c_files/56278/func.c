/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56278
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)1023)) ? (((((((/* implicit */_Bool) var_3)) ? (var_11) : (var_17))) % (min((var_7), (((/* implicit */unsigned int) (unsigned short)1023)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
    var_20 = ((/* implicit */short) ((_Bool) ((((/* implicit */unsigned long long int) (+(var_13)))) / (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) var_16)) : (var_12))))));
    var_21 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) var_9)) : (var_0))), (((/* implicit */unsigned long long int) ((unsigned int) (short)-32767))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_7)))) : (var_4))) : ((-(((var_4) & (((/* implicit */unsigned long long int) var_9))))))));
}
