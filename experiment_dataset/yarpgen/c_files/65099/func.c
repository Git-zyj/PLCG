/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65099
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
    var_18 &= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) < (var_9))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned char)168), ((unsigned char)83)))) >> (((/* implicit */int) var_5))))) : (var_17)));
    var_19 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)168)))) / (((((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) (unsigned char)70)))) ? (((/* implicit */long long int) ((4294967276U) / (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) : (min((((/* implicit */long long int) var_12)), (var_2)))))));
}
