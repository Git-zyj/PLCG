/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88815
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
    var_13 = ((/* implicit */unsigned long long int) 1073741820);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [7LL] [7LL] = ((/* implicit */unsigned char) ((signed char) (_Bool)1));
                    arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) arr_3 [i_0 + 1]);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) var_0);
    var_15 = ((/* implicit */long long int) (+((~(((/* implicit */int) var_5))))));
    var_16 = var_12;
}
