/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92833
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
    var_19 *= ((/* implicit */unsigned char) var_15);
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((short) (+(((((/* implicit */_Bool) var_9)) ? (arr_3 [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0]))))))));
                    var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))) : (2524735136U)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_22 &= ((/* implicit */unsigned short) (~(min((((((/* implicit */_Bool) arr_3 [i_0 + 3] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)232))) : (var_15))), (((/* implicit */long long int) arr_4 [i_0 - 1] [i_0 - 1] [i_1] [i_2 + 2]))))));
                                arr_12 [i_0] [i_0] [i_0] [i_3] [(_Bool)1] = ((/* implicit */long long int) min((((((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_3)) - (118))))) > (((/* implicit */int) (unsigned short)33999)))), (((((((/* implicit */int) arr_8 [i_0] [i_0])) * (((/* implicit */int) (unsigned short)6400)))) >= (((/* implicit */int) (unsigned char)232))))));
                                arr_13 [i_0] [i_1] [(short)3] = ((/* implicit */short) arr_2 [i_0] [i_0] [i_2]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) min((min((var_12), (((/* implicit */unsigned short) (unsigned char)139)))), (((/* implicit */unsigned short) (unsigned char)158))))))))));
}
