/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58341
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = (((+(var_15))) & (var_6));
        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (72057594037927935ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (var_7) : (((var_17) ? (var_5) : (var_1)))))) ? (((((/* implicit */_Bool) var_9)) ? (var_0) : (var_4))) : (((((/* implicit */_Bool) var_18)) ? (var_10) : (var_15))));
    }
    var_21 |= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) % (var_6)))))));
}
