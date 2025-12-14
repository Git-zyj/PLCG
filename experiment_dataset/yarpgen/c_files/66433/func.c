/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66433
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) | (arr_1 [i_0] [i_0]))) : (((/* implicit */int) arr_0 [i_0]))));
        var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((63), (arr_1 [(_Bool)1] [(_Bool)1])))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [(signed char)14] [(_Bool)1]) : (((/* implicit */int) var_15)))))) : (-58)));
    }
    var_20 = ((/* implicit */unsigned short) -58);
}
