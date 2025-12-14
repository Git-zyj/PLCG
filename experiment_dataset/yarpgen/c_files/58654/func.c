/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58654
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
    var_14 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 1129662548U)) & (arr_0 [i_0] [i_0]))))))) * (((((/* implicit */int) var_11)) / (arr_1 [i_0] [i_0])))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) max((((((/* implicit */_Bool) 4160749568U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (4160749568U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)0)) : (arr_1 [i_0] [i_0]))))))) | (((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) arr_1 [i_0] [i_0])) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) arr_1 [i_0] [i_0]))))))));
        var_16 = ((/* implicit */long long int) ((-5792554202777314980LL) > (((/* implicit */long long int) arr_1 [i_0] [i_0]))));
        var_17 = ((/* implicit */long long int) max((4160749568U), (134217733U)));
    }
    var_18 = ((/* implicit */int) var_11);
    var_19 = max((5792554202777314980LL), (((/* implicit */long long int) (unsigned char)255)));
}
