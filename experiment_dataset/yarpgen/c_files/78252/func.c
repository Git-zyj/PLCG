/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78252
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_18 -= ((/* implicit */unsigned char) 17980268239595229283ULL);
                    var_19 = ((/* implicit */long long int) arr_0 [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        arr_9 [i_1] [(unsigned char)14] [i_1] [i_1] [i_1 - 2] [i_1] = ((/* implicit */unsigned long long int) ((signed char) ((short) var_14)));
                        var_20 = var_14;
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (~(17980268239595229283ULL)));
}
