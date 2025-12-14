/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57457
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
    for (short i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */short) var_3);
                    var_15 = ((/* implicit */short) 1283391270U);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_2);
    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) * (((/* implicit */int) (signed char)-1))))) : (((((/* implicit */_Bool) var_14)) ? (1423712659U) : (((/* implicit */unsigned int) var_5)))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)162)) && (((/* implicit */_Bool) 2871254636U))))))));
}
