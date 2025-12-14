/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69185
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
    var_13 ^= ((/* implicit */short) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_11))));
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)10))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)72)) : ((+(((/* implicit */int) (signed char)14))))))) : (min((((/* implicit */long long int) max(((signed char)19), (var_7)))), ((+(var_4))))))))));
    var_15 += ((/* implicit */unsigned short) (((-(((/* implicit */int) (!(var_11)))))) != (((/* implicit */int) var_3))));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (short)4095))))))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    var_17 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) max((min((var_1), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) min((var_2), (((/* implicit */int) var_0)))))))) : (var_12)));
}
