/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59126
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            {
                var_10 += ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((arr_4 [i_0] [i_1 - 2] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1U)))) ? (min((((/* implicit */unsigned long long int) var_7)), (3213272132869879129ULL))) : (((/* implicit */unsigned long long int) ((var_3) | (((/* implicit */int) arr_2 [(_Bool)1] [(unsigned char)12])))))))));
                var_11 = ((/* implicit */_Bool) var_1);
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) ((((/* implicit */int) var_6)) >> (((((unsigned long long int) var_0)) * ((-(12283748652013034488ULL)))))));
    var_13 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) ((unsigned long long int) 386514252019756104LL))) ? (((12283748652013034488ULL) << (((((/* implicit */int) var_4)) - (78))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_7)))))));
    var_14 = ((/* implicit */unsigned char) ((unsigned short) ((min((((/* implicit */unsigned long long int) (short)-23958)), (12283748652013034478ULL))) << (((((var_8) ? (((/* implicit */unsigned int) var_3)) : (4294967284U))) - (3383768489U))))));
}
