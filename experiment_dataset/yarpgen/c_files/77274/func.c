/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77274
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
    var_16 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) ((unsigned short) var_12))), (((long long int) (unsigned short)65535)))) | (((/* implicit */long long int) ((/* implicit */int) (short)28434)))));
    var_17 |= ((/* implicit */short) var_15);
    var_18 *= ((/* implicit */unsigned char) ((short) var_3));
    var_19 = max((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)104))))) : (((unsigned int) (_Bool)1))))), (((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-117)), ((short)17830)))) ? (((/* implicit */long long int) min((var_3), (((/* implicit */int) (signed char)100))))) : (var_6))));
}
