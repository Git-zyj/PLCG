/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96867
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
    var_10 += ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_3)) ? ((+(((/* implicit */int) var_3)))) : ((-(((/* implicit */int) var_4)))))));
    var_11 = ((/* implicit */unsigned short) max((var_8), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? ((+(((/* implicit */int) var_7)))) : (((int) var_9)))))));
    var_12 = ((/* implicit */unsigned int) ((long long int) (~(((/* implicit */int) max((var_1), (var_5)))))));
    var_13 = ((/* implicit */int) (~(((((/* implicit */_Bool) min((var_9), (((/* implicit */int) var_2))))) ? (((unsigned int) var_5)) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_6), (((/* implicit */short) var_5))))))))));
    var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) var_1))))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)1)))))) >> (((((/* implicit */int) ((short) (+(((/* implicit */int) var_6)))))) - (15568)))));
}
