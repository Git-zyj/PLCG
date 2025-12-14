/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73360
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
    var_17 = (unsigned char)230;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)196)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (unsigned char)1))));
                var_19 += ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)200))))) % (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)63)) << (((((/* implicit */int) arr_2 [i_0])) - (12)))))) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_0 [i_0]))))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)180)) && (((/* implicit */_Bool) (unsigned char)236))));
            }
        } 
    } 
}
