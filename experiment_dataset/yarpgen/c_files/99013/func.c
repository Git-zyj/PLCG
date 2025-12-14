/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99013
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_10))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) 9223372036854775806LL)) ? (((/* implicit */long long int) var_11)) : (max((((/* implicit */long long int) var_5)), (-510214201662966282LL)))))));
                var_19 -= ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))))), (max((var_9), (arr_2 [i_0] [i_1])))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) (((-(5628357919638051364ULL))) * (((unsigned long long int) var_3))));
}
