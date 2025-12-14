/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73181
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
    var_12 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (min((((2147483647) >> (((((/* implicit */int) var_11)) - (60))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))))) : (((/* implicit */int) var_2))));
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) var_7))));
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((var_8) / (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_10))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)103)) : (((((/* implicit */_Bool) (unsigned short)16383)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1))))))) + (((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_10)))) ? (min((16797187656645713682ULL), (((/* implicit */unsigned long long int) (unsigned short)16383)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_3)))))))));
}
