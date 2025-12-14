/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87772
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
    var_14 *= ((/* implicit */unsigned char) var_12);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) var_3);
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) min((min((var_6), (((/* implicit */unsigned char) min((var_8), (var_8)))))), (min((var_6), (((/* implicit */unsigned char) var_13))))));
                                var_16 = ((/* implicit */signed char) min((min((((/* implicit */short) var_2)), (var_3))), (((/* implicit */short) var_12))));
                                var_17 = ((/* implicit */signed char) min((var_17), (var_12)));
                            }
                        } 
                    } 
                } 
                arr_18 [i_0 - 2] [i_0] = ((/* implicit */unsigned long long int) min((min((var_12), (((/* implicit */signed char) var_11)))), (((/* implicit */signed char) min((var_1), (var_13))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_9);
    var_19 = ((/* implicit */short) var_0);
}
