/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75884
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
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned short)38251)), (0LL)));
    var_18 = ((/* implicit */unsigned char) -6571289729621664553LL);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) var_0);
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_20 = var_6;
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_0]))));
                        }
                    } 
                } 
                arr_9 [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)38251)) / (1018089551)));
            }
        } 
    } 
}
