/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70749
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
    var_15 = ((/* implicit */unsigned char) (((+(((/* implicit */int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) var_9))))))) / (((/* implicit */int) ((((/* implicit */_Bool) (+(var_4)))) && (((/* implicit */_Bool) var_1)))))));
    var_16 = ((/* implicit */unsigned long long int) var_3);
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((min((var_2), (((/* implicit */unsigned long long int) max((var_9), (var_12)))))) < (((/* implicit */unsigned long long int) ((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_5)))) % (((var_6) + (var_7)))))))))));
}
