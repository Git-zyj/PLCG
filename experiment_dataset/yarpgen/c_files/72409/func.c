/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72409
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
    var_15 = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) (_Bool)1)), (((14348070973489691269ULL) - (4613587725712812878ULL)))))));
    var_16 |= var_7;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_4 [i_0] [(_Bool)1] |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 2219160440U)) ? ((+(arr_3 [i_0] [i_1]))) : ((((_Bool)1) ? (3809634691695073699ULL) : (((/* implicit */unsigned long long int) 3700659182U)))))), (min(((~(arr_3 [i_0] [i_0]))), ((~(arr_1 [i_0] [i_1])))))));
                arr_5 [i_1] = (_Bool)1;
            }
        } 
    } 
}
