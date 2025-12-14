/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96846
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
    var_12 -= ((/* implicit */unsigned char) min((var_3), (((/* implicit */unsigned long long int) (_Bool)1))));
    var_13 = ((/* implicit */signed char) ((int) min((var_5), (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned int) (_Bool)1))))))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_2) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)9915)))))))) ? (((((var_6) / (((/* implicit */long long int) ((/* implicit */int) (signed char)126))))) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) var_4))));
}
