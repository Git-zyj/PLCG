/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73795
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
    var_16 = ((/* implicit */unsigned char) var_6);
    var_17 = ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)24576)) : (((/* implicit */int) (_Bool)1)))) : (var_8)));
                var_18 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */unsigned long long int) var_8)) - (var_10)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((1061631886U) - (1061631862U)))))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_4)), (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (((var_12) << (((var_5) - (4825789950016330909ULL))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) (-(((/* implicit */int) var_13))))) ^ (max((((/* implicit */unsigned int) var_6)), (var_12))))), (((/* implicit */unsigned int) max(((unsigned char)188), (((/* implicit */unsigned char) (_Bool)1)))))));
    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((_Bool)1) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_2)))))));
}
