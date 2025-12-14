/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56921
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
    var_15 = var_7;
    var_16 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) var_8);
                    var_18 = ((/* implicit */unsigned long long int) var_3);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) arr_3 [i_0]);
                                var_20 = ((/* implicit */long long int) (~(((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_4))) | (((/* implicit */unsigned long long int) ((var_2) ^ (((/* implicit */unsigned int) -1280700292)))))))));
                                arr_13 [(_Bool)1] [i_1] [7U] [i_1] [i_0] = ((/* implicit */_Bool) arr_7 [i_0]);
                                arr_14 [i_0] [(_Bool)1] [i_2 - 2] [i_3] [i_1] = ((/* implicit */signed char) var_12);
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(-1903071733)))) ? ((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0]))) : (arr_8 [i_1] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2 + 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
