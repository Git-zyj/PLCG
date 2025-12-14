/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80011
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
    var_17 = ((/* implicit */long long int) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_0] = var_1;
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) + (((((/* implicit */_Bool) (-(arr_0 [i_0] [i_0])))) ? (((/* implicit */int) (unsigned short)64197)) : (((/* implicit */int) var_6))))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)31240)) : (((/* implicit */int) arr_5 [i_1]))))) + (var_8)));
            }
        } 
    } 
}
