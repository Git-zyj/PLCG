/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58715
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
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */_Bool) var_4);
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) min((arr_0 [(unsigned char)0] [i_0]), (((/* implicit */unsigned int) (_Bool)0)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (min((arr_0 [i_0] [(signed char)24]), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)45418)) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0]))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) var_4);
}
