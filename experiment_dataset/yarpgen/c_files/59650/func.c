/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59650
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
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] |= ((/* implicit */unsigned long long int) (-(1886674146U)));
        arr_4 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (3318169695U)))) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_2 [i_0])))));
        arr_5 [i_0 - 2] [i_0] = ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((((/* implicit */_Bool) 976797585U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_2))) : (2408293149U));
        var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1]))) : (110408996U))))));
        var_11 = ((unsigned long long int) var_5);
    }
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) min((var_2), (var_8))))));
    var_13 = ((/* implicit */int) var_2);
}
