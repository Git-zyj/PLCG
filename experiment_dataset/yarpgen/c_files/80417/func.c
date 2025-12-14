/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80417
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)20)) ? (((/* implicit */int) (unsigned short)41984)) : (((/* implicit */int) (unsigned short)9088))))));
                arr_5 [i_1] [i_0] = min(((unsigned short)64), ((unsigned short)52097));
            }
        } 
    } 
    var_11 = min(((unsigned short)63433), ((unsigned short)2103));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) + (((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) ((unsigned short) (unsigned short)36286)))))));
}
