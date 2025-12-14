/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9572
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
    var_16 = ((/* implicit */unsigned char) var_13);
    var_17 ^= ((/* implicit */_Bool) var_15);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned int) arr_1 [i_0]);
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 16; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */short) arr_0 [i_0]);
                            var_20 = ((/* implicit */short) arr_6 [i_0] [6]);
                        }
                    } 
                } 
            }
        } 
    } 
}
