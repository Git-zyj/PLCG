/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76244
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
    var_10 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_4))))))))));
    var_11 = ((/* implicit */unsigned long long int) min(((~((+(((/* implicit */int) var_4)))))), (((/* implicit */int) var_3))));
    var_12 = ((/* implicit */unsigned int) min((((/* implicit */int) var_7)), (max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) (short)32766)))), (((/* implicit */int) (short)4096))))));
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 274877906928LL)), (281474943156224ULL)))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_9)), (var_1)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
}
