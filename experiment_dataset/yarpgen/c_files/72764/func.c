/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72764
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
    for (short i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_8 [i_0 + 1] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (!((!((_Bool)0)))))), (((unsigned int) var_14))));
                    arr_9 [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) min(((short)23455), (((/* implicit */short) arr_2 [i_0 + 2]))))), (((unsigned short) max((var_1), (((/* implicit */int) var_6)))))));
                }
            } 
        } 
    } 
    var_20 = ((unsigned char) (+(((/* implicit */int) (short)-23437))));
}
