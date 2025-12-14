/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60827
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
    var_12 += ((/* implicit */unsigned char) var_2);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((var_1) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                var_13 |= ((((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((arr_2 [i_0] [i_0] [i_0]) & (arr_1 [i_0]))))) | (max((((/* implicit */unsigned int) arr_3 [i_0 - 1] [i_0 - 1])), (max((((/* implicit */unsigned int) (signed char)-14)), (var_2))))));
                var_14 &= ((/* implicit */int) (unsigned char)248);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_9), (((/* implicit */unsigned char) (signed char)-14))))) + (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)-22315))))))) ? (((/* implicit */int) var_10)) : (max((76140339), (((/* implicit */int) (unsigned short)21))))));
    var_16 = ((/* implicit */short) var_9);
    var_17 &= (-(3045574829U));
}
