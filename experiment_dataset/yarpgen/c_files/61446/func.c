/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61446
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned int i_3 = 3; i_3 < 20; i_3 += 3) 
                    {
                        {
                            arr_13 [i_3] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) 1538304486);
                            arr_14 [i_0] [i_2] [i_2] [i_2] = 7461385735705020938LL;
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) -310116583);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) 7461385735705020967LL);
}
