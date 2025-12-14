/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73321
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_16 *= ((/* implicit */signed char) min((min((4294967295U), (1U))), (((/* implicit */unsigned int) (signed char)43))));
                    var_17 = ((/* implicit */unsigned long long int) var_8);
                    var_18 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) (unsigned char)235)) << (((var_8) + (7412572807424720116LL))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((+(arr_11 [i_0])))))) ? (((unsigned long long int) (+(((/* implicit */int) (short)-18077))))) : (max((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) max((var_14), (((/* implicit */long long int) var_1)))))))));
                                arr_13 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_10 [i_0] [i_1] [i_0] [i_3] [i_4])))) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) var_15))));
                                var_19 -= ((/* implicit */unsigned char) var_11);
                                var_20 = ((/* implicit */long long int) arr_6 [i_0] [i_0] [i_2] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */long long int) var_10))));
}
