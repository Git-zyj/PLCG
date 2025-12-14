/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73351
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
    var_19 = max((var_9), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_4))) || (((/* implicit */_Bool) var_11))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [(unsigned char)0] [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) arr_4 [i_1] [i_1])) ^ (((((/* implicit */_Bool) arr_6 [i_0] [(signed char)0] [i_2])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_1 [i_0] [i_1])))))));
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_5 [i_0] [(_Bool)1] [(signed char)7] [i_2]))));
                }
            } 
        } 
    } 
}
