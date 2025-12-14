/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55473
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_1)), (var_0))) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))))) & (var_3)));
    var_13 &= ((/* implicit */_Bool) max((((((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), ((unsigned char)12))))))), (min((var_11), (min((((/* implicit */unsigned long long int) var_9)), (var_3)))))));
}
