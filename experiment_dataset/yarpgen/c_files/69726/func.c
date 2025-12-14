/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69726
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35809))) : (893958769282852153ULL)));
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_1))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)3))) ^ (arr_0 [i_0 + 1] [i_0])))) ? (((((/* implicit */_Bool) 1185041538U)) ? (var_6) : (((/* implicit */unsigned long long int) 3109925757U)))) : (((/* implicit */unsigned long long int) ((long long int) var_2)))));
        var_16 -= ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (var_8));
    }
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_8)) + (var_10)))) ? (((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))) : (var_2)))) ? (min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))), (((/* implicit */int) var_3)))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_13)))))))));
}
