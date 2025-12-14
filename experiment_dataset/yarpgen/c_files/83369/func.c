/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83369
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
    var_11 = (!(((/* implicit */_Bool) var_1)));
    var_12 = ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned short) var_1))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_13 &= ((/* implicit */int) arr_3 [i_1 + 3] [i_1 + 1]);
                    var_14 = ((/* implicit */unsigned long long int) (signed char)31);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) 42753735U);
                                var_16 = ((/* implicit */unsigned long long int) var_2);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
