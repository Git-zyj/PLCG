/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71305
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
    var_15 = ((/* implicit */unsigned short) 1346147288);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_4] [i_0] = ((/* implicit */long long int) (unsigned short)1023);
                                var_16 = (unsigned short)44212;
                            }
                        } 
                    } 
                    var_17 ^= ((/* implicit */int) 8449960581920390080LL);
                    var_18 = ((/* implicit */unsigned char) 4337342581769183152LL);
                    var_19 -= ((/* implicit */unsigned int) -4457893527863406964LL);
                    arr_15 [i_0] [17] = (signed char)47;
                }
            } 
        } 
    } 
}
