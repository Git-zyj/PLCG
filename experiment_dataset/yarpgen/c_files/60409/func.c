/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60409
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) var_3))));
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((signed char) (unsigned short)5))) : (((/* implicit */int) (short)13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_4))))))) : (min(((+(4294967275U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65532)))))))));
    var_14 = ((/* implicit */long long int) (~(((/* implicit */int) ((var_9) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)5)), (3197559407U)))))))));
}
