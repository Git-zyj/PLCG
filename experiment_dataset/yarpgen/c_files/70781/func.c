/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70781
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
    var_10 ^= ((/* implicit */_Bool) (-((~(max((var_7), (((/* implicit */int) (short)1023))))))));
    var_11 = ((/* implicit */unsigned int) (unsigned char)48);
    var_12 += ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) % (((((/* implicit */_Bool) max(((unsigned char)255), ((unsigned char)250)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
    var_13 &= max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40205)) ? (var_7) : (((/* implicit */int) (unsigned short)25336))))) || (((/* implicit */_Bool) max(((unsigned short)25331), (((/* implicit */unsigned short) (unsigned char)234)))))))), (var_1));
}
