/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81272
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
    var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)65)));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_15)))))))) / (max((((/* implicit */unsigned int) ((unsigned char) var_0))), (((unsigned int) (signed char)(-127 - 1)))))));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)40)), (min((((/* implicit */unsigned char) (signed char)120)), ((unsigned char)5)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (min((var_9), (((/* implicit */long long int) 1073741823U))))));
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (signed char)-120))));
}
