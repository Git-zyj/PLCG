/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60096
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
    var_10 = ((/* implicit */long long int) (+((+(var_2)))));
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (min((((/* implicit */int) var_9)), (var_6)))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_5))) * (((/* implicit */int) var_9))))) : (var_0)));
    var_12 = var_6;
    var_13 ^= ((/* implicit */long long int) (((-(max((((/* implicit */unsigned int) var_6)), (4294967282U))))) % (((/* implicit */unsigned int) (-(((/* implicit */int) var_1)))))));
    var_14 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) (-(var_5)))) + (var_8))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_4)), ((+(var_5))))))));
}
