/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86127
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-109)) < (((/* implicit */int) (signed char)-109))));
    var_18 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) var_5)) >= (var_9)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                {
                    var_19 -= ((/* implicit */_Bool) var_9);
                    arr_9 [16] [16] [i_1 + 2] [i_2] &= ((/* implicit */signed char) ((((long long int) arr_8 [i_0] [i_1 + 1] [i_2])) << ((((-(((/* implicit */int) arr_2 [i_0 - 2])))) + (157)))));
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_2 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-31))) : (arr_6 [i_1] [i_2 - 2])))))))));
                }
            } 
        } 
    } 
}
