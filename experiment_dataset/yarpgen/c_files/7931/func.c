/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7931
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
    var_14 *= (_Bool)1;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */long long int) ((((/* implicit */int) max(((_Bool)0), ((_Bool)1)))) << (((((((/* implicit */_Bool) (short)3474)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1)))) - (79)))));
                var_16 = ((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned char)15)))), (((((((/* implicit */int) var_3)) + (2147483647))) >> (((((/* implicit */int) var_4)) - (18555)))))));
            }
        } 
    } 
}
