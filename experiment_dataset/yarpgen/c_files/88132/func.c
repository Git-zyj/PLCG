/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88132
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
    var_18 = ((/* implicit */long long int) var_13);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */int) arr_2 [(unsigned short)7]);
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_2] [i_2])) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (short)-20843))))));
                }
            } 
        } 
    } 
}
