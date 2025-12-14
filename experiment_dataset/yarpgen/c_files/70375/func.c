/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70375
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
    var_11 = ((/* implicit */_Bool) var_9);
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) (unsigned short)60930))))))) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) var_3)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) -4951898343073964258LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-6656))) : (((long long int) -1389507503182656106LL)))));
                var_13 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1]))));
                var_14 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_1] [i_0 - 1]))));
            }
        } 
    } 
}
