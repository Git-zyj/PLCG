/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6297
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) % (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_14))))), (min((var_6), (((/* implicit */unsigned long long int) var_14)))))))))));
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((var_12) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))))) ? (var_6) : (min(((~(var_8))), (max((var_0), (var_5))))))))));
    var_18 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : ((+(var_6))))) >> ((((~(var_12))) - (15986800703048646430ULL)))));
}
