/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94561
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
    var_14 = ((/* implicit */signed char) (-(((/* implicit */int) var_10))));
    var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) min((var_11), (((/* implicit */int) var_2))))) ? (min((((/* implicit */int) var_7)), (var_0))) : (((/* implicit */int) ((var_12) <= (var_12)))))) < (min((((var_12) ^ (((/* implicit */int) var_13)))), (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_5)))))))));
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */unsigned int) min((var_0), ((-(((/* implicit */int) var_9))))))) - (min((((unsigned int) var_3)), (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))))))))));
    var_17 += ((/* implicit */short) var_12);
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) (short)32767)))))) >= (((((/* implicit */unsigned long long int) ((var_4) ^ (((/* implicit */long long int) ((/* implicit */int) var_5)))))) & (((unsigned long long int) var_9))))));
}
