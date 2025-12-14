/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89591
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
    var_11 = ((/* implicit */unsigned short) min((((((/* implicit */long long int) 3873333026U)) / (7987166820775287513LL))), (((/* implicit */long long int) (-(((421634269U) * (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) var_8);
        var_13 = ((/* implicit */unsigned long long int) ((long long int) ((arr_2 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))));
        var_14 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (421634279U) : (arr_2 [i_0]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)230)))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((var_2), (((/* implicit */long long int) (unsigned short)36501)))) | (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)29053), (((/* implicit */unsigned short) arr_0 [i_0]))))))))) ? (min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)230))) : (421634260U)))), ((-(var_7))))) : (((unsigned long long int) var_0))));
    }
}
