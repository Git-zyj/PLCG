/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93716
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
    var_14 += ((/* implicit */signed char) var_4);
    var_15 ^= ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) var_13))))) | ((+(0LL)))));
                var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) -1311868680)))) : ((((+(var_11))) | (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) -1311868680)) : (239199091199347003ULL)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (0LL))) < (((/* implicit */long long int) ((/* implicit */int) min((var_4), (var_4))))))))));
}
