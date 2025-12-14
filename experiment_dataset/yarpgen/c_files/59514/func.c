/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59514
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
    for (unsigned short i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                var_15 *= ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)40918))))))))));
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (+(((/* implicit */int) var_12)))))));
            }
        } 
    } 
    var_17 &= ((/* implicit */signed char) var_14);
    var_18 = ((/* implicit */unsigned int) var_2);
    var_19 |= ((/* implicit */signed char) (((~(((/* implicit */int) var_10)))) << (((((((/* implicit */_Bool) ((short) (unsigned short)24617))) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) 2386217172U)) ? (((/* implicit */int) (unsigned short)54917)) : (((/* implicit */int) var_13)))))) - (29961)))));
}
