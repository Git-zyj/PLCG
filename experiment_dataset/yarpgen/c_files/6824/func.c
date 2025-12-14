/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6824
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
    var_19 = var_4;
    var_20 ^= ((/* implicit */unsigned int) ((unsigned long long int) var_2));
    var_21 = ((unsigned short) ((max((var_14), (((/* implicit */unsigned long long int) var_11)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_8)) : (var_4))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        var_22 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (max((((/* implicit */long long int) var_8)), (var_11))) : (((/* implicit */long long int) var_8))))));
        var_23 *= ((/* implicit */unsigned int) var_3);
    }
    var_24 = ((/* implicit */long long int) ((unsigned char) ((long long int) ((((/* implicit */_Bool) 85778872U)) ? (((/* implicit */int) (unsigned short)511)) : (1190793281)))));
}
