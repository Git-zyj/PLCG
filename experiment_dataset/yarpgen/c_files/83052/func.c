/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83052
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_14 ^= ((/* implicit */unsigned short) ((unsigned long long int) min(((short)2048), (((/* implicit */short) arr_0 [i_1])))));
                arr_5 [0LL] [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((1073217536), (1073217536)))) ^ (min((((/* implicit */long long int) (unsigned short)0)), (var_2)))))), (min((((/* implicit */unsigned long long int) -5479355124819897934LL)), (0ULL)))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (-(((unsigned int) var_13))));
}
