/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73830
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)78)) ? (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (unsigned short)48997)) ? (((/* implicit */int) (unsigned short)16549)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))) : (((/* implicit */int) var_7))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */_Bool) ((short) min((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))) ^ (arr_0 [4LL]))), (((/* implicit */long long int) min((1299634332U), (((/* implicit */unsigned int) (unsigned char)206))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [16] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)119)) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) (unsigned char)0))));
                                arr_15 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */long long int) arr_4 [i_1] [i_2] [i_3]);
                                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (signed char)-123))));
                                arr_16 [i_3] [i_1] [i_2] [i_3] [i_4] [i_0] [i_1] = ((/* implicit */unsigned short) ((-1232933539) - (((/* implicit */int) ((((/* implicit */int) arr_6 [i_1] [i_1] [i_2])) < (((/* implicit */int) arr_6 [i_0] [i_2] [i_3])))))));
                                var_14 += ((/* implicit */signed char) (+((+(((/* implicit */int) (unsigned char)119))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
