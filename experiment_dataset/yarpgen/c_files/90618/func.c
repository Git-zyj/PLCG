/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90618
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
    var_16 = ((/* implicit */signed char) var_1);
    var_17 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (4294967295U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)28616)))))))), (((((/* implicit */_Bool) ((long long int) var_3))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (var_8))));
    var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) 1063614218)) : (8139352070125656944LL)))))), (((((/* implicit */_Bool) ((unsigned int) var_8))) ? (((var_9) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((int) var_12)))))));
    var_19 = min((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)61817)) : (((/* implicit */int) var_14))))), (4294967273U))), (((/* implicit */unsigned int) var_0)));
    var_20 += ((/* implicit */unsigned short) var_3);
}
