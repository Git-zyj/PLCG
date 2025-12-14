/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68134
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
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (+(var_8))))));
    var_17 &= var_9;
    var_18 = (((!(((/* implicit */_Bool) 4194304U)))) ? (536870912U) : (((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) var_15))))) ? (min((3758096401U), (var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
    var_19 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_1)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)59))))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) ? (min((((3758096402U) - (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((((/* implicit */_Bool) var_4)) ? (3758096402U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37609))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((var_7) << (((var_11) - (662454635U))))))))));
}
