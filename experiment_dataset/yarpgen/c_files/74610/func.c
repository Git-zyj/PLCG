/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74610
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
    var_12 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_2))))), (min((-5329441698612509213LL), (var_3))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((int) (+(4084891270U))));
                var_14 = ((((long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1 + 1])))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) 5329441698612509242LL))) ? (((((/* implicit */_Bool) -5329441698612509213LL)) ? (-1226093) : (((/* implicit */int) (unsigned char)8)))) : (((/* implicit */int) var_2))))));
            }
        } 
    } 
}
