/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80725
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
    var_13 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_0 [i_0]))))) / (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) 22U)))))));
        var_15 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65524)) > (((/* implicit */int) arr_1 [i_0])))))) * (((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (-2LL)))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((arr_2 [i_1 - 2] [i_1 - 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21)))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) > (((/* implicit */int) arr_4 [i_1]))));
    }
    var_17 = ((/* implicit */unsigned int) ((((((4ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) * (var_1)));
}
