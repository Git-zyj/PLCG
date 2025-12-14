/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60850
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
    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned char) var_1))))), (min((var_9), (((/* implicit */unsigned long long int) var_1)))))))));
    var_19 += ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))), (min((((/* implicit */unsigned long long int) var_2)), (var_0))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
    var_20 = ((/* implicit */short) max((((/* implicit */unsigned int) max(((+(((/* implicit */int) var_17)))), (((/* implicit */int) min((((/* implicit */short) var_14)), (var_11))))))), (max((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-20))))), (max((2147483648U), (((/* implicit */unsigned int) var_6))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_21 += ((/* implicit */unsigned int) (~((-(max((arr_5 [i_0] [(unsigned char)0]), (((/* implicit */unsigned long long int) var_13))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [(signed char)3] [i_1] [i_3] [i_3] [i_2] [i_0] [i_2] = ((/* implicit */short) min(((-(max((((/* implicit */unsigned int) var_5)), (1308487206U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max(((short)8), ((short)-31910)))))))));
                                var_22 = ((/* implicit */unsigned int) min(((-(max((var_8), (((/* implicit */unsigned long long int) var_13)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_4] [i_4] [i_4])), (var_4)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
