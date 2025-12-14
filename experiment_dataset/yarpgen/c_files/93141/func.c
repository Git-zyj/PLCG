/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93141
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
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_14 &= ((unsigned short) ((max((2108851363), (((/* implicit */int) arr_3 [i_1] [i_0])))) + (((/* implicit */int) var_5))));
                var_15 += ((/* implicit */unsigned short) (-(max((arr_0 [i_0]), (arr_0 [i_0])))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (signed char)-20)))))));
}
