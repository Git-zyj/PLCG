/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94091
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
    var_15 ^= ((/* implicit */unsigned int) var_8);
    var_16 = ((/* implicit */long long int) var_0);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_17 -= arr_5 [i_0] [i_0] [i_0] [i_0];
                        var_18 &= ((/* implicit */signed char) arr_4 [i_0] [i_1] [i_2]);
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_7 [14ULL] [14ULL] [i_1] [14ULL]))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = arr_3 [i_0] [i_0] [i_0];
    }
}
