/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70472
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
    var_17 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) 15320578262740470612ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)44))) : (((var_3) ? (((/* implicit */unsigned int) -283624649)) : (arr_4 [i_2 + 1])))));
                    arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (-(((int) arr_3 [i_0] [i_2 + 1] [i_0]))));
                }
            } 
        } 
    } 
}
