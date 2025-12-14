/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57377
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
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))), (arr_1 [i_1] [i_1])))) ? (((/* implicit */long long int) min(((+(((/* implicit */int) var_12)))), ((+(((/* implicit */int) var_4))))))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8444)))))));
                var_15 = ((/* implicit */unsigned int) min((var_15), ((-(max((((/* implicit */unsigned int) (_Bool)0)), (3007708405U)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))) | ((~(var_13)))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
}
