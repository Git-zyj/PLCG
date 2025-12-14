/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72624
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
    var_13 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */int) (signed char)-124)) : (max((((/* implicit */int) var_2)), ((~(((/* implicit */int) (signed char)-124))))))));
    var_14 = ((3015809392U) | (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (-3192932249305257140LL))) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 3015809367U)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 18; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) var_3);
                    var_16 = ((/* implicit */long long int) var_1);
                }
            } 
        } 
    } 
}
