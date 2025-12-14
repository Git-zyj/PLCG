/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73688
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
    var_11 = ((/* implicit */long long int) var_9);
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_5)) : (var_6))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10)))))))) || (((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */long long int) ((var_9) ? (((/* implicit */int) var_2)) : (var_5)))) : (max((var_4), (((/* implicit */long long int) 4095U)))))))));
    var_13 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) == (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (var_3)))))))));
    var_14 *= ((/* implicit */unsigned int) var_0);
}
