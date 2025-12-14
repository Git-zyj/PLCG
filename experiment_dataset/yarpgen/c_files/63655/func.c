/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63655
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
    var_10 = ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 7; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 8; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) var_1);
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max(((~(((/* implicit */int) arr_4 [i_0])))), (((/* implicit */int) ((unsigned short) (unsigned short)54196)))));
                            }
                        } 
                    } 
                } 
                var_12 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) var_9))))), (var_4))) * (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_1]))))) * (((unsigned int) 0LL)))))));
                var_13 = ((/* implicit */unsigned short) min(((-(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (min((((/* implicit */long long int) (unsigned short)54196)), (-7646891899590893506LL)))));
            }
        } 
    } 
}
