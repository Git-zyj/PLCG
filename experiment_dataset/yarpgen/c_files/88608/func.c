/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88608
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
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_1] [i_2 + 1] = ((/* implicit */short) ((arr_4 [i_0 - 1]) == ((+(((/* implicit */int) arr_7 [i_2 - 3] [i_2] [i_2] [i_0 - 1]))))));
                    arr_9 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) ((arr_4 [i_0 - 2]) / ((+(((/* implicit */int) var_0))))));
                    var_10 = max((((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (arr_5 [i_2 - 1] [i_2 + 1] [i_2 - 2] [i_0 + 4]) : (arr_5 [i_2 - 3] [i_2 - 1] [i_2 + 1] [i_0 - 3]))), (((arr_3 [i_0 + 1]) + (((2044392891) + (((/* implicit */int) var_4)))))));
                }
            } 
        } 
    } 
    var_11 = (+(((/* implicit */int) var_9)));
}
