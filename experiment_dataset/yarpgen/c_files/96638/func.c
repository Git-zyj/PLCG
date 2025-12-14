/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96638
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
    var_14 ^= ((/* implicit */short) max((((/* implicit */unsigned int) (signed char)-108)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) (-((-(arr_2 [i_0] [i_0 + 1])))));
        var_16 -= ((/* implicit */short) arr_1 [i_0 + 1]);
    }
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-119)) & (((/* implicit */int) (unsigned short)33822))))) : (3024061829U)));
    /* LoopSeq 2 */
    for (short i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_4))));
        arr_6 [i_1] = ((/* implicit */short) (-(((995206080) >> (((-1) + (17)))))));
    }
    for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) max((arr_8 [i_2]), (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) << (((((/* implicit */int) var_0)) - (171))))))));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(2147483647)))) | (1597001308864762223LL)))) ? (((/* implicit */int) (unsigned short)50373)) : (((/* implicit */int) ((((/* implicit */_Bool) 2368618535U)) || ((_Bool)1))))));
    }
}
