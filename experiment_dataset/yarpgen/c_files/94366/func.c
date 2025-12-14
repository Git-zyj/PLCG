/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94366
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
    var_15 = ((/* implicit */int) ((_Bool) (unsigned short)18720));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_16 = ((/* implicit */long long int) ((((unsigned int) ((var_8) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14))))) * (((/* implicit */unsigned int) max((var_1), (((/* implicit */int) arr_0 [i_0 + 1])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((-(1606997746U))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1])))));
    }
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (1606997744U)))) ? (1606997737U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
}
