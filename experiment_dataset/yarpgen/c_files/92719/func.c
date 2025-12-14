/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92719
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
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned int) 14595066654894248741ULL);
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (14595066654894248732ULL)));
                    var_16 |= 764150940U;
                    arr_8 [i_0 + 3] [i_0 + 3] [i_0] [13ULL] = (_Bool)1;
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_11))));
    var_18 = ((/* implicit */unsigned char) var_7);
    var_19 = ((/* implicit */long long int) var_0);
}
