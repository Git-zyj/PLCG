/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72208
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
    var_15 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                {
                    var_16 *= ((/* implicit */short) (+(1661725686U)));
                    arr_7 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (unsigned char)255);
                }
            } 
        } 
    } 
}
