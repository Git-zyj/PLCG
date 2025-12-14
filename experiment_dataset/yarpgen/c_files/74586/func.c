/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74586
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
    var_16 = (unsigned char)77;
    var_17 = ((/* implicit */unsigned long long int) ((unsigned char) var_2));
    var_18 = ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_0 [(short)9] [i_0]);
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) arr_2 [i_1]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_10)));
}
