/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70202
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
    var_10 = ((/* implicit */long long int) ((((((/* implicit */int) (short)6776)) != (((/* implicit */int) var_2)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7486897478346883325LL)) ? (((/* implicit */int) var_5)) : (701787727)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 701787727)) ? (7145072161207717965ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))) : (((/* implicit */int) min((((/* implicit */unsigned char) var_1)), (var_5))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) 701787729);
                var_11 *= ((/* implicit */unsigned char) arr_4 [i_0]);
            }
        } 
    } 
}
