/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60023
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
    for (long long int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */_Bool) 9512099678456987782ULL);
                    arr_8 [5ULL] [(_Bool)1] [i_2 - 1] [i_0] = ((/* implicit */unsigned int) (unsigned char)252);
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) -1121626372);
    var_12 |= 2646767113U;
}
