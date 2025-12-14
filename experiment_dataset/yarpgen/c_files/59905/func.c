/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59905
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
    var_12 = ((/* implicit */unsigned char) var_5);
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (2600781791U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) || (((/* implicit */_Bool) var_8)))))));
    var_14 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (-(2554093355U)))))) || (((((/* implicit */int) var_6)) <= (((/* implicit */int) (signed char)102))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_15 &= ((/* implicit */unsigned short) 5LL);
        var_16 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) arr_1 [i_0])))));
    }
}
