/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76147
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
    for (int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        var_12 = ((/* implicit */signed char) ((max((((/* implicit */long long int) var_1)), (9223372036854775807LL))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(5342660398263702103ULL))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (((~(min((14306701361323575591ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))))) >> (((min((min((var_7), (((/* implicit */int) (signed char)68)))), (var_11))) - (55)))));
        var_13 = (!(((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [i_0])))));
        var_14 = ((/* implicit */unsigned int) ((min(((~(arr_1 [i_0]))), (((/* implicit */unsigned long long int) min((var_11), (arr_0 [i_0])))))) << (((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_1 [i_0]))) - (1980714357ULL)))));
    }
    var_15 = ((unsigned long long int) 16883589430135989886ULL);
    var_16 = var_6;
    var_17 = ((/* implicit */unsigned long long int) var_11);
}
