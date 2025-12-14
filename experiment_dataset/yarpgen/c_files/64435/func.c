/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64435
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) min((((/* implicit */long long int) arr_2 [i_0] [i_0] [i_0])), (var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) max((arr_4 [i_0 - 1] [i_1] [i_2]), (((/* implicit */int) (unsigned char)110))))))) : ((((!(((/* implicit */_Bool) (unsigned char)141)))) ? ((~(10134538401883639784ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)164)))))));
                    arr_9 [i_0] [(unsigned char)22] = ((/* implicit */_Bool) var_8);
                    arr_10 [i_2] [i_0] [i_2] [i_2] = ((/* implicit */signed char) (unsigned char)48);
                }
            } 
        } 
    } 
    var_16 &= ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)2))))) : (max((var_1), (((/* implicit */unsigned long long int) var_14)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (9055183900568989917ULL))));
    var_17 = ((/* implicit */signed char) var_5);
}
