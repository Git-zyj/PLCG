/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98452
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
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) min(((signed char)-64), ((signed char)-68)));
                arr_6 [i_0] = ((/* implicit */signed char) max((((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_0 [i_1 - 1])))), (((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_0 [i_1 + 1]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) min((min((((((/* implicit */_Bool) 3U)) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) (signed char)-23)))), (((/* implicit */int) (signed char)45)))), (((/* implicit */int) var_9))));
}
