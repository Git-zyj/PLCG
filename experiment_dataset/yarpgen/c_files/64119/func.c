/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64119
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
    var_10 = (-(15608725682418498217ULL));
    var_11 = ((unsigned short) var_5);
    var_12 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1 - 1] [i_1] = (unsigned short)63721;
                arr_6 [i_1] [i_1] [i_1] = max((max((var_4), (((/* implicit */unsigned short) arr_2 [i_1 + 2])))), (((/* implicit */unsigned short) (_Bool)0)));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned short) var_9)), ((unsigned short)1560))))))));
}
