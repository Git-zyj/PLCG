/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67405
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 19; i_2 += 2) 
                {
                    for (int i_3 = 3; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (-(((unsigned int) arr_6 [i_2 - 2] [i_2] [i_2 - 1])))))));
                                var_14 |= ((/* implicit */int) 2147467264U);
                                arr_13 [i_0] [i_1] = ((unsigned char) (+(((/* implicit */int) (signed char)-14))));
                                arr_14 [(unsigned char)19] [i_3] [i_3 + 2] [i_3 + 4] [i_2 + 1] [(signed char)17] [(short)2] |= ((/* implicit */unsigned char) (+((+(((/* implicit */int) (short)28326))))));
                            }
                        } 
                    } 
                } 
                var_15 ^= ((/* implicit */signed char) min(((unsigned short)65526), (((/* implicit */unsigned short) (_Bool)1))));
                /* LoopNest 3 */
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 2) 
                        {
                            {
                                arr_23 [i_7] = ((/* implicit */signed char) (_Bool)1);
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) arr_15 [i_7] [i_6] [(unsigned short)13] [i_1]))));
                                arr_24 [i_7] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_1] [i_1] [6ULL] [i_0] [i_1] [i_1]))))) ? (min((((/* implicit */unsigned long long int) (unsigned char)87)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1] [i_1] [(unsigned char)14] [i_0] [i_0] [i_1]))))))));
                var_18 += ((/* implicit */unsigned long long int) 969087837U);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (var_6)))))))));
}
