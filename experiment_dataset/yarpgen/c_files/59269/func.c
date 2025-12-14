/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59269
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
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 1] [i_2])) ? (arr_2 [i_1]) : (arr_5 [i_0] [i_0 + 1] [i_2]))), (((((/* implicit */_Bool) 2097151U)) ? (((/* implicit */int) var_0)) : (arr_2 [i_0 + 1])))));
                    arr_9 [i_0] [i_1] [i_2] &= ((/* implicit */int) ((unsigned long long int) (short)-1));
                    var_17 = ((/* implicit */_Bool) (+(arr_2 [i_0 - 1])));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (short)7);
}
