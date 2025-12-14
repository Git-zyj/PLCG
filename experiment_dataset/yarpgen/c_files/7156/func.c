/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7156
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
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_14 |= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_0] [i_0]))))));
                arr_5 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)0))))), (min((3ULL), (((/* implicit */unsigned long long int) 2530942056842640820LL)))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_13)))) ? (((/* implicit */int) max((var_4), ((signed char)-122)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
}
