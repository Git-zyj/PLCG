/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63926
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
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */long long int) (~((+((+(((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_0]))))))));
                var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (short)-14856)), ((~(arr_3 [i_0])))));
                var_20 = ((/* implicit */unsigned int) (!((!((!((_Bool)0)))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_21 *= ((/* implicit */unsigned short) (_Bool)0);
                                var_22 = ((/* implicit */signed char) max(((-(((((/* implicit */unsigned int) 2147483647)) * (4002108930U))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1] [i_1] [i_1])) * (((/* implicit */int) arr_9 [i_0] [i_2] [i_2] [i_3])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((8191U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)107)))))) ? (max((var_13), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)127))))))))));
}
