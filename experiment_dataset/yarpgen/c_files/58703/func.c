/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58703
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
    var_10 = ((/* implicit */signed char) ((((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) | (((/* implicit */unsigned int) ((var_5) ? ((~(((/* implicit */int) var_7)))) : (min((((/* implicit */int) (_Bool)0)), (var_4))))))));
    var_11 |= ((/* implicit */long long int) var_2);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) arr_1 [i_0] [i_0]))));
        var_13 = var_7;
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_1))));
        var_15 &= ((/* implicit */long long int) var_5);
    }
    var_16 = ((var_5) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47449))));
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)47449)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */unsigned long long int) var_4)) & (var_8)))));
}
