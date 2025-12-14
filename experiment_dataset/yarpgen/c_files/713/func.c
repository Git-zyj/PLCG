/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/713
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
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_10 [i_0] [i_0] [i_1] [i_1] [i_0] [i_4] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((var_2) / (((/* implicit */int) arr_9 [i_1]))))), (max((arr_5 [i_4]), (arr_5 [i_2])))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_3])) != (((/* implicit */int) var_4))))), ((~(arr_4 [i_2]))))) : (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) arr_3 [i_0 - 2] [i_1])), (arr_5 [i_2 - 1]))), (((/* implicit */unsigned int) ((int) arr_4 [i_3]))))))));
                                var_13 = max((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0]))) + (arr_5 [i_0 - 1])))) ? (((arr_6 [i_0] [i_0] [i_1] [i_3 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3]))) : (arr_5 [i_0]))) : (arr_5 [i_3 + 2]))), (((/* implicit */unsigned int) var_6)));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 1] [i_1]))) + (var_8))) * (511536810U)));
                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)100)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (((/* implicit */int) arr_9 [i_1]))))) ? (((/* implicit */int) min((((/* implicit */signed char) var_4)), ((signed char)-90)))) : (((((/* implicit */int) arr_8 [i_0 + 1])) * (((/* implicit */int) arr_3 [i_1] [i_0]))))))))))));
                var_16 = ((/* implicit */short) var_2);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_11);
}
