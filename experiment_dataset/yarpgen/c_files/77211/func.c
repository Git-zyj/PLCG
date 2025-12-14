/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77211
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_6)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        var_11 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) ((unsigned short) 1952222104))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0])))))), (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (7119035376239506444ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
        arr_5 [i_0] [i_0] = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10591)))))) ? (((/* implicit */unsigned long long int) (~(var_5)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) & (var_1))))), (((/* implicit */unsigned long long int) arr_3 [i_0])));
    }
}
