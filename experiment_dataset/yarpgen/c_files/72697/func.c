/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72697
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
    var_19 += ((/* implicit */unsigned short) var_5);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) arr_6 [i_0] [15U] [i_0 - 1] [i_0])))))), (((unsigned long long int) var_17))));
                    arr_7 [i_0] = ((/* implicit */long long int) (((((~(((/* implicit */int) arr_5 [i_0] [i_0] [i_0 - 1])))) + (2147483647))) >> (((var_15) - (572525830)))));
                    arr_8 [i_2] [i_2] = ((/* implicit */unsigned char) (+(((unsigned long long int) ((var_2) + (((/* implicit */unsigned int) var_15)))))));
                }
            } 
        } 
    } 
}
