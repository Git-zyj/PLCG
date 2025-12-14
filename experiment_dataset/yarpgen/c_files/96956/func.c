/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96956
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
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-5461)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) (short)20)) : (max((((/* implicit */int) (unsigned char)251)), (var_3)))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) var_14);
                arr_7 [i_0] [(unsigned char)9] [(unsigned char)9] |= ((/* implicit */short) ((((/* implicit */_Bool) -1755643815)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((2965282223U) < (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : ((+(((/* implicit */int) (unsigned char)103)))))) : (((/* implicit */int) var_5))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) 2965282223U))));
    var_18 = ((/* implicit */signed char) var_3);
}
