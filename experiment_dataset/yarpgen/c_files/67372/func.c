/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67372
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)60)) : (var_15)))))) ? (var_3) : (((/* implicit */int) max((((/* implicit */unsigned char) var_12)), ((unsigned char)47))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_0]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((((((/* implicit */int) (short)32763)) > (((/* implicit */int) var_4)))) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [1] [i_0] [1])) ? (arr_1 [i_2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)40522)) | (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_2]))))) : (((((/* implicit */_Bool) 2097144U)) ? (((/* implicit */unsigned long long int) var_1)) : (arr_1 [i_1] [i_4])))))));
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_3] [(unsigned char)11] [i_4] = ((arr_8 [i_0] [i_0] [i_4]) ^ (((/* implicit */long long int) ((/* implicit */int) (short)0))));
                                arr_16 [i_0] [i_0] [(short)6] [i_3] [(short)6] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)66)), (arr_1 [i_1] [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1409856708U))))) : (((/* implicit */int) ((var_14) < (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [(signed char)7] [i_3] [(short)4] [i_4]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
