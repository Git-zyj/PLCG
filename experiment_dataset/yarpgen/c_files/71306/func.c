/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71306
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
    var_10 = ((/* implicit */unsigned int) var_2);
    var_11 = ((/* implicit */short) ((unsigned int) ((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_5)))) : (min((716655173U), (((/* implicit */unsigned int) (signed char)84)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */short) min(((+(((714919068U) * (var_8))))), (max((3580048228U), (((/* implicit */unsigned int) (unsigned char)196))))));
                arr_6 [i_0] [i_0] [(short)8] = ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_1)))) ^ ((~(((/* implicit */int) (short)24511))))));
                var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)207)))) | (((var_7) ? (((/* implicit */unsigned int) var_2)) : (var_8))))))));
                arr_7 [i_0] = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (var_2))), (((/* implicit */int) var_6)))) >= (((/* implicit */int) var_5))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) var_0);
}
