/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73789
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
    var_17 ^= (!(((/* implicit */_Bool) min((max((639379043U), (639379043U))), (((/* implicit */unsigned int) (signed char)-29))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = (!(((/* implicit */_Bool) (unsigned char)66)));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned int i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) (!((_Bool)0)));
                            arr_11 [i_0] [i_1] [9LL] [i_0 - 1] = ((/* implicit */unsigned long long int) min((min((2209216460U), (0U))), (((/* implicit */unsigned int) (-(min((((/* implicit */int) (_Bool)1)), (1597601588))))))));
                            /* LoopSeq 2 */
                            for (unsigned long long int i_4 = 2; i_4 < 17; i_4 += 4) 
                            {
                                var_19 = ((/* implicit */unsigned short) var_0);
                                var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
                                var_21 = (!(var_11));
                            }
                            for (unsigned short i_5 = 1; i_5 < 18; i_5 += 4) 
                            {
                                var_22 = ((/* implicit */int) max((var_22), ((+(((/* implicit */int) (unsigned char)66))))));
                                var_23 = ((/* implicit */int) 2823513176U);
                            }
                            arr_16 [i_1] = ((/* implicit */int) var_1);
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
    var_25 = ((/* implicit */long long int) min((min((((/* implicit */int) (unsigned char)66)), (max((-1951990583), (((/* implicit */int) var_2)))))), (((/* implicit */int) (unsigned char)189))));
}
