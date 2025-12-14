/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6563
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
    var_15 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0 + 1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)109), ((unsigned char)134))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))));
                arr_7 [16LL] [16LL] [16LL] |= ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) : (((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)109))) : (var_6))))), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_14)) ? (var_1) : (var_1)))))));
                var_16 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (18446744073709551615ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (arr_2 [i_1] [i_0 + 1]))))));
            }
        } 
    } 
}
