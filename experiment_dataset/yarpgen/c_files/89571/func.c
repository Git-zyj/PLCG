/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89571
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [(short)11] [7LL] = ((/* implicit */int) max((((/* implicit */unsigned int) arr_2 [i_0 - 1])), (max((var_2), (((/* implicit */unsigned int) arr_2 [i_0 - 1]))))));
        arr_4 [i_0] = ((((/* implicit */int) (!(arr_1 [i_0 - 1])))) >> ((((~(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_0 [16] [i_0])))))) + (22592))));
    }
    var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) var_12))))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_16)), (var_13)))))) << (((min((((unsigned long long int) var_1)), (max((((/* implicit */unsigned long long int) var_5)), (var_9))))) - (11339479449235324256ULL)))));
    var_18 = ((/* implicit */_Bool) var_5);
}
