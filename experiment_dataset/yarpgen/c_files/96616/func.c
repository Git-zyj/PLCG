/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96616
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
    var_16 |= ((/* implicit */signed char) 0ULL);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 20; i_2 += 3) 
            {
                {
                    var_17 += ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_2 - 1])) == (((arr_0 [i_1]) ? (((/* implicit */int) arr_5 [i_2 + 1])) : (((/* implicit */int) (signed char)-4))))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15))) & (2937063448U)));
                }
            } 
        } 
    } 
}
