/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82593
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
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) max((17393905989401732910ULL), (8139655529081828026ULL)));
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) 1757176091)) ? (-1) : (0))))));
                }
            } 
        } 
    } 
    var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1757176091)) ? (-372865155) : (-1)));
    var_22 = ((((/* implicit */_Bool) -5752320310196635460LL)) ? (14) : (2));
}
