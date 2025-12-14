/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66854
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
    var_16 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)7)))) + (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_3))))))) << (((((/* implicit */int) ((unsigned short) ((var_1) / (((/* implicit */unsigned long long int) 2067035840)))))) - (7910)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */short) arr_0 [i_0]);
                    var_18 ^= ((/* implicit */unsigned char) (+(max((((/* implicit */int) (unsigned char)42)), (2147483647)))));
                }
            } 
        } 
    } 
}
