/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96758
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                arr_6 [4ULL] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 131071)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)6137))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            for (unsigned int i_4 = 2; i_4 < 15; i_4 += 4) 
            {
                {
                    arr_15 [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)-19))));
                    arr_16 [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) min(((unsigned char)50), ((unsigned char)255)));
                }
            } 
        } 
    } 
}
