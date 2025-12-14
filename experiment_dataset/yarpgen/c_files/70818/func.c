/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70818
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
    var_12 = ((/* implicit */unsigned char) ((long long int) max((var_9), (((/* implicit */int) ((unsigned short) var_6))))));
    var_13 &= ((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */int) var_1)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((((/* implicit */_Bool) arr_2 [i_1])) ? (var_5) : (((((/* implicit */_Bool) (short)-4433)) ? (((/* implicit */int) (short)-31113)) : (((/* implicit */int) (short)31110)))));
                arr_6 [i_1] = ((/* implicit */long long int) (unsigned short)35102);
            }
        } 
    } 
    var_14 |= ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) % (max((((((/* implicit */int) var_7)) * (((/* implicit */int) var_11)))), (((/* implicit */int) var_2))))));
}
