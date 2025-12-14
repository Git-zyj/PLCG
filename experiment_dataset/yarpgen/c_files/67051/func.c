/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67051
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
    var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1073725440)) ? (1073725432) : (((/* implicit */int) (unsigned char)233)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) var_16);
                arr_6 [(signed char)8] &= ((/* implicit */short) min((arr_3 [i_0]), (((/* implicit */signed char) ((3943069192U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)42))))))));
            }
        } 
    } 
}
