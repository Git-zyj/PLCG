/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75736
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
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : ((~(var_18))))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)30511)) / (((/* implicit */int) (unsigned char)54))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((arr_2 [i_0]) + (((/* implicit */unsigned long long int) arr_1 [i_0] [(short)7]))))))) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))))) >= (max((arr_2 [i_0]), (arr_2 [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */long long int) arr_1 [i_0] [(unsigned char)9]);
    }
}
