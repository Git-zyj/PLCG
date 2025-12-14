/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75012
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
    var_13 = ((/* implicit */long long int) (-(((/* implicit */int) var_9))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) var_4);
        arr_5 [i_0] |= ((/* implicit */long long int) max((-923373284), (((/* implicit */int) ((arr_0 [i_0]) > (923373283))))));
        var_14 = ((/* implicit */long long int) min((var_14), (min((((/* implicit */long long int) -881716764)), ((+(min((((/* implicit */long long int) var_10)), (arr_3 [i_0])))))))));
        var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
        arr_6 [i_0] &= ((/* implicit */long long int) max((min((((/* implicit */int) (short)-24684)), (((((/* implicit */_Bool) 7U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))))), (((((/* implicit */_Bool) ((int) var_10))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (-923373284))) : ((~(((/* implicit */int) var_3))))))));
    }
}
