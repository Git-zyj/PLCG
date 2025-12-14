/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64213
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
    var_15 ^= ((/* implicit */unsigned char) max((max((((var_6) ^ (802143034154688213LL))), (((/* implicit */long long int) max(((unsigned short)65535), (((/* implicit */unsigned short) var_1))))))), ((+(var_11)))));
    var_16 = min((((/* implicit */long long int) ((((/* implicit */int) var_4)) & (((((/* implicit */_Bool) 2147483647)) ? (16775168) : (((/* implicit */int) (unsigned char)255))))))), ((~(max((((/* implicit */long long int) var_9)), (var_11))))));
}
