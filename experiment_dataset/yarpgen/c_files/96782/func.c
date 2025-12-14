/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96782
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
    var_20 ^= ((/* implicit */signed char) min((var_17), (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)196))) : (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                arr_5 [i_1 - 1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (var_17)))) ? (((/* implicit */int) (unsigned short)56809)) : (((/* implicit */int) var_2)))) == ((~(((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 2]))))));
                var_21 *= ((/* implicit */signed char) ((_Bool) (+(((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */int) arr_4 [(unsigned short)2] [i_1])) : (var_19))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (-((+(((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) var_1))))))));
}
