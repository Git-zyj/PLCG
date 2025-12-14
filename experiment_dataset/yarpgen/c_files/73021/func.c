/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73021
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
    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) var_1))));
    var_11 = min(((~(((/* implicit */int) (!((_Bool)1)))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (var_6)))) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) (+(min((((/* implicit */int) (unsigned short)45158)), (252)))));
                arr_6 [i_1] = ((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_0]);
                var_12 = ((/* implicit */int) (unsigned short)1020);
            }
        } 
    } 
    var_13 += ((unsigned short) var_6);
}
