/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6091
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
                var_16 = ((/* implicit */unsigned int) (~(((arr_2 [i_0]) >> ((((~(17166033676101990006ULL))) - (1280710397607561548ULL)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((int) (-(((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)54))) : (var_4))))));
}
