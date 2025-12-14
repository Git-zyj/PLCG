/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83045
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
    var_14 = ((/* implicit */signed char) var_10);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) arr_4 [i_0 - 2] [i_0 + 2] [i_0])))));
                    var_16 ^= ((((/* implicit */_Bool) var_8)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 4611685984067649536LL)))) : (((unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-27022)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-12))) : (961709230U)))));
                }
            } 
        } 
    } 
}
