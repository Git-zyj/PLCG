/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99807
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
    for (int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_10 [i_2] [i_1] [i_2] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11722))) : (14510926242024730946ULL)));
                    arr_11 [i_2] [i_2] = ((/* implicit */short) (~(14510926242024730946ULL)));
                    arr_12 [i_2] [i_2] [(short)12] [i_2] = ((/* implicit */unsigned int) (unsigned short)30795);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)118)) ? (14510926242024730948ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34741)))));
}
