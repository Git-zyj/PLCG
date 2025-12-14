/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73276
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
    var_12 = ((/* implicit */_Bool) var_5);
    var_13 = ((/* implicit */unsigned short) var_4);
    var_14 = (~(((/* implicit */int) var_6)));
    var_15 = ((/* implicit */long long int) var_2);
    var_16 = ((/* implicit */unsigned int) max((var_16), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_6), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_5))) <= (var_7)))))))) : (((min((var_2), (((/* implicit */unsigned int) var_1)))) / (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
}
