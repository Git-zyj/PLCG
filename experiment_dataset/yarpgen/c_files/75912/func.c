/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75912
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
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                var_12 ^= ((/* implicit */short) ((unsigned int) max((max(((unsigned short)11855), (arr_3 [i_0] [i_1] [i_1 + 1]))), (((/* implicit */unsigned short) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_7))))))));
                var_13 ^= ((/* implicit */short) (+(((/* implicit */int) arr_1 [(unsigned char)10]))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) var_2)))));
}
