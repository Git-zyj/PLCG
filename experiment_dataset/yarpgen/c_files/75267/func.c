/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75267
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
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */signed char) (unsigned char)252);
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) 4294967295U))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    var_13 = ((/* implicit */long long int) (unsigned char)233);
                    arr_8 [i_2] [(unsigned short)0] = ((/* implicit */unsigned char) 4294967295U);
                }
            }
        } 
    } 
    var_14 *= ((/* implicit */unsigned long long int) var_10);
}
