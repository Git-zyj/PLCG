/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74088
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
    var_11 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) (~(((/* implicit */int) max((var_6), ((unsigned char)20)))))))));
    var_12 &= ((/* implicit */unsigned char) ((unsigned short) min(((-(((/* implicit */int) (unsigned char)21)))), (((/* implicit */int) var_1)))));
}
