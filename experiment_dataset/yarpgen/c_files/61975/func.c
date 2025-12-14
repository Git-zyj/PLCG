/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61975
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) ((unsigned long long int) max((var_1), (((/* implicit */unsigned long long int) arr_1 [i_1 - 1])))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)41954);
                arr_6 [(unsigned short)5] = ((/* implicit */long long int) (unsigned short)35676);
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        for (long long int i_6 = 3; i_6 < 16; i_6 += 3) 
                        {
                            {
                                arr_21 [i_2] [i_3] [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) ((arr_18 [i_6] [2LL] [i_5] [i_4] [i_3] [i_2] [i_2]) | (var_9)))) ? (((unsigned long long int) (short)2067)) : (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_10)) ? (var_9) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))));
                                var_13 = ((((unsigned long long int) arr_18 [i_2] [i_2] [i_4] [i_5] [i_6 + 1] [i_6 + 2] [i_2])) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (max((max((max((var_1), (((/* implicit */unsigned long long int) var_10)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (var_0))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_13 [i_4]))))) + (((((/* implicit */_Bool) var_8)) ? (arr_15 [(short)12] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))))))));
                }
            } 
        } 
    } 
}
