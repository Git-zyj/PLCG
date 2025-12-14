/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56466
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
    var_12 &= ((/* implicit */int) var_6);
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((var_9) ? (((/* implicit */int) var_6)) : (var_2)))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (9223372036854775783LL) : ((-9223372036854775807LL - 1LL))))))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)62407)) + (((/* implicit */int) (signed char)73))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_2] [11ULL] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))));
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (var_7) : ((+(var_7))))))))));
                    arr_8 [i_1] [i_2] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_4))))));
                }
            } 
        } 
    } 
}
