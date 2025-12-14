/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79659
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
    var_16 = ((/* implicit */_Bool) var_5);
    var_17 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (1094287773U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)2651))))))))));
    var_18 = ((/* implicit */unsigned long long int) (short)8176);
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_11))))) + (((/* implicit */int) ((unsigned short) (short)-8176)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8176))) <= (10104652293182014521ULL))), (((_Bool) var_6)))))) : ((~(max((((/* implicit */unsigned long long int) var_1)), (10104652293182014521ULL)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((unsigned int) 10104652293182014515ULL);
        var_20 += ((/* implicit */long long int) ((unsigned long long int) min((((/* implicit */unsigned char) arr_1 [i_0] [i_0])), (var_15))));
    }
}
