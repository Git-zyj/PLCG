/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67614
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
    var_14 = ((/* implicit */unsigned long long int) ((min((var_9), (((/* implicit */int) ((unsigned char) 2147483633))))) % (((/* implicit */int) var_4))));
    var_15 = ((_Bool) min((((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_13))))), (((((/* implicit */_Bool) 1879048192)) ? (2147483642) : (235277885)))));
    var_16 *= ((var_1) == (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_8))))) / (max((-2147483646), (((/* implicit */int) var_11))))))));
    var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_7)) | (((/* implicit */int) ((signed char) var_13)))))));
    var_18 &= ((/* implicit */_Bool) var_2);
}
