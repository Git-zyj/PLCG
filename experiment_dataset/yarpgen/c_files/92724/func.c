/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92724
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
    var_14 &= ((/* implicit */int) (+(((((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))) - (((2200143550U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30533)))))))));
    var_15 = ((/* implicit */long long int) min((var_15), (((((/* implicit */_Bool) ((2200143561U) * (30U)))) ? (((/* implicit */long long int) ((((int) var_7)) + (((/* implicit */int) ((_Bool) 2200143561U)))))) : (var_10)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned char) 30U);
                var_17 = arr_0 [i_0] [i_0];
                arr_7 [16] [5U] = ((/* implicit */_Bool) ((short) (((~(2535259431952505323LL))) & (((/* implicit */long long int) arr_2 [i_0] [i_1])))));
            }
        } 
    } 
}
