/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73009
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) ((((5269759310469887249ULL) > (((/* implicit */unsigned long long int) -1635847748294842789LL)))) ? (((/* implicit */long long int) (~(min((((/* implicit */unsigned int) arr_0 [8ULL] [i_0])), (arr_1 [i_0])))))) : ((+(((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-18022))) : (-5826606332876423461LL)))))));
        arr_3 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-98)))))) - (((var_13) >> (((5826606332876423458LL) - (5826606332876423438LL))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 4) 
    {
        var_16 += ((/* implicit */short) ((((/* implicit */int) arr_5 [i_1 + 1])) << (((-5826606332876423461LL) + (5826606332876423461LL)))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */long long int) ((/* implicit */int) (short)4854))) : (-5826606332876423461LL)));
    }
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (+(((/* implicit */int) (short)4854)))))));
    var_19 = ((/* implicit */long long int) (~((~(((/* implicit */int) var_6))))));
}
