/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8684
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_16 [i_1] &= ((/* implicit */short) max((var_15), (((/* implicit */long long int) arr_15 [i_1] [i_1]))));
                                var_20 = ((/* implicit */_Bool) ((short) ((unsigned long long int) (unsigned char)255)));
                            }
                        } 
                    } 
                } 
                var_21 ^= ((/* implicit */short) -6732157365096626951LL);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            for (unsigned int i_7 = 1; i_7 < 21; i_7 += 1) 
            {
                {
                    var_22 += ((/* implicit */unsigned char) ((((((/* implicit */int) (short)16383)) * (((/* implicit */int) arr_23 [i_7 + 2] [i_7 + 1] [i_7 - 1])))) - (((/* implicit */int) min(((unsigned char)249), (((/* implicit */unsigned char) (_Bool)1)))))));
                    var_23 = ((/* implicit */int) arr_23 [i_7 - 1] [i_5] [i_5]);
                }
            } 
        } 
    } 
}
