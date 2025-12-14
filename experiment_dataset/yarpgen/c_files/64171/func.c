/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64171
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
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)142)) ? ((-9223372036854775807LL - 1LL)) : (9223372036854775807LL))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) (~(min((((/* implicit */int) arr_3 [i_1] [i_0])), (((var_10) & (((/* implicit */int) (short)-1))))))));
                arr_7 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)145)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-20632)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_15))));
                var_20 ^= ((/* implicit */unsigned long long int) (_Bool)0);
            }
        } 
    } 
}
