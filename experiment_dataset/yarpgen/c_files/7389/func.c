/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7389
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((2140978550651639464LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)7)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) var_8))))) : ((-(((/* implicit */int) (signed char)12))))));
        arr_2 [i_0] = ((long long int) (unsigned short)49627);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) min((var_17), (min(((unsigned short)0), (var_7))))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_16)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) < ((~(((/* implicit */int) arr_1 [i_0])))))))) : (min((((((/* implicit */_Bool) (unsigned short)58374)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))), ((-(var_6)))))));
    }
    var_21 = ((/* implicit */_Bool) (~(min((var_16), (max((var_6), (var_9)))))));
}
