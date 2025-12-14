/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83150
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
    var_16 &= ((/* implicit */short) max((((((/* implicit */_Bool) var_0)) ? (((unsigned long long int) var_14)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))))), ((-(var_12)))));
    var_17 = ((/* implicit */unsigned char) ((((int) -32687947)) ^ (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 23; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_8 [i_0] [i_0] [i_2] [i_3 + 1] = ((max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_0])) : (((/* implicit */int) var_15)))), (((/* implicit */int) max((var_15), (var_15)))))) ^ (((/* implicit */int) arr_1 [i_0])));
                            arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_2 - 2] [i_2 - 3] [i_0]))) | (arr_4 [i_1] [i_2 - 3] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_4 [i_2] [i_2 - 1] [i_3])))))) : (((unsigned int) (signed char)-1))));
                            var_18 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (1443990009) : (((/* implicit */int) var_11))))) : (arr_6 [i_0] [i_0]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)105)) : (var_2)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) + (432029452)))) : (arr_4 [i_0 + 1] [i_0 + 1] [i_0])))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */signed char) arr_6 [i_0] [i_1]);
            }
        } 
    } 
}
