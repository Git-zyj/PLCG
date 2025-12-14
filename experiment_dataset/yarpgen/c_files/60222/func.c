/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60222
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned short)65517)) : (((/* implicit */int) (signed char)0))));
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) / (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) var_10)) : ((-(((/* implicit */int) var_15))))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_15))));
    var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 16383LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)18))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (16383LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
    var_20 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned char) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_16))))), (max(((unsigned char)255), (((/* implicit */unsigned char) var_12)))))), (((/* implicit */unsigned char) min((var_9), (var_10))))));
}
