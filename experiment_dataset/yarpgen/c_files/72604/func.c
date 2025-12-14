/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72604
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (max((((/* implicit */int) (unsigned short)54748)), (var_2))) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)49152))))))) ? ((+(((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */int) (short)2047)))))) : (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */_Bool) ((((_Bool) (_Bool)1)) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)-2032))))));
                var_22 = ((/* implicit */_Bool) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])))))))));
            }
        } 
    } 
}
