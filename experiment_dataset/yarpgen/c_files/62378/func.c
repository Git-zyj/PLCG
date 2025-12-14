/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62378
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
    var_10 |= ((/* implicit */short) ((unsigned short) (~(((int) var_0)))));
    var_11 = ((/* implicit */short) (unsigned short)13839);
    var_12 = ((/* implicit */unsigned int) max((var_12), (294524320U)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned int) var_2);
                    arr_9 [i_1] = ((/* implicit */unsigned char) arr_4 [i_0]);
                }
            } 
        } 
    } 
}
