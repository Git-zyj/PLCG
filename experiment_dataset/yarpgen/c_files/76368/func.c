/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76368
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
    var_12 = ((/* implicit */unsigned short) var_6);
    var_13 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (0U)))) ? (((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */long long int) 0U)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)163)))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) max((var_3), ((signed char)-1))))) < (((var_4) % (var_7))))))));
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((int) ((((var_4) / (var_1))) % (var_7)))))));
}
