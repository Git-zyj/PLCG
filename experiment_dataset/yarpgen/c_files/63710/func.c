/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63710
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_1] &= ((/* implicit */unsigned int) min((((((/* implicit */int) (short)31960)) & (((/* implicit */int) (unsigned short)65535)))), ((-(((/* implicit */int) arr_1 [i_2 - 3] [i_1 + 1]))))));
                    arr_9 [9U] [i_1 + 2] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (short)-15706)), (max((((/* implicit */long long int) (signed char)-91)), (5LL)))));
                    arr_10 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((var_0), ((short)-31960))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned int) var_10);
    var_13 += ((/* implicit */long long int) (short)-2);
}
