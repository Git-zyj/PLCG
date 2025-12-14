/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67596
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
    var_18 = ((/* implicit */signed char) ((max((max((var_6), (13ULL))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_11)) : (var_15))))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) (unsigned short)65535)))))));
    var_19 = ((/* implicit */long long int) var_1);
    var_20 += ((/* implicit */unsigned short) max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)124)) ? (var_11) : (var_13)))) ? (((/* implicit */int) (unsigned short)49069)) : (((((/* implicit */int) (short)10411)) + (((/* implicit */int) var_10))))))));
    var_21 &= min((var_13), (var_16));
}
