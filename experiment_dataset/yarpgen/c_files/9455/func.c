/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9455
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
    var_12 = ((/* implicit */unsigned long long int) ((var_1) ^ (var_11)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0 + 1] [i_0] [8ULL] [i_2] [i_3] [i_4] = ((/* implicit */long long int) min((var_9), (var_9)));
                                var_13 = ((/* implicit */unsigned long long int) max((var_13), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_1] [2U] [i_3 + 1]))))))), (max((arr_2 [i_0 + 2] [i_1] [i_2]), (arr_2 [i_0 + 1] [(short)5] [i_2])))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) arr_4 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1])))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (signed char)-95))));
}
