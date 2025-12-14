/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82560
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
    var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) < (var_3)));
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) ((var_4) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))), (((((((/* implicit */int) var_9)) | (((/* implicit */int) var_1)))) & (((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_10)))))))))));
    var_17 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) * (((/* implicit */int) (signed char)-26))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (var_3))))), (((/* implicit */unsigned int) 415495725))));
    var_18 ^= ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_1), (((/* implicit */short) var_9)))))))) ? (min((((1844114647U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-32759))))), (((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-32763))))))) : (((/* implicit */unsigned int) ((((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)65216)) - (65215))))) >> (((((/* implicit */int) var_1)) + (16348)))))));
}
