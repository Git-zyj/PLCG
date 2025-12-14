/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64987
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
    var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (5592065280858513119ULL)))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (1422311083381570685ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned long long int) var_15)) != (min((1422311083381570685ULL), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1]))))))))));
                    var_19 *= (+(max((arr_4 [i_0 - 2] [i_0 + 1] [i_0 - 1]), (((/* implicit */unsigned int) (short)18901)))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_13);
}
