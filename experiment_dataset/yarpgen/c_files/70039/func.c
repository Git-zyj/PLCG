/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70039
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_13))));
    var_21 = (unsigned short)4756;
    var_22 &= ((unsigned char) min((((/* implicit */unsigned int) var_8)), (max((((/* implicit */unsigned int) var_2)), (var_0)))));
    var_23 |= ((((/* implicit */_Bool) max((var_5), (var_5)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (var_6))) : (min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60761))) < (var_5)))), (((((/* implicit */_Bool) (unsigned short)36214)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60777))) : (var_0))))));
    var_24 &= ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((/* implicit */int) var_19))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-20))) / (var_16))))), (min((((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5))) : (var_10))), (var_16)))));
}
