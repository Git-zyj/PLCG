/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69567
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
    var_20 = ((/* implicit */unsigned int) (!(var_16)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_1])), (var_8)))) ? (((/* implicit */int) var_3)) : (((var_10) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14)))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_16)))), (((/* implicit */int) ((((/* implicit */int) arr_8 [i_4])) > (((/* implicit */int) arr_10 [i_2] [i_3] [i_4])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1 + 3])) + (((/* implicit */int) arr_2 [i_0 + 1]))))) : (((arr_12 [i_2 + 2] [i_2] [i_2] [i_1] [i_1]) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0)))))))));
                                var_23 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_2] [i_2] [i_2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) ? (arr_5 [i_1 + 3] [i_1] [i_2 - 1]) : (((/* implicit */unsigned long long int) min((arr_9 [i_1] [i_2] [i_3] [(_Bool)0]), (((/* implicit */unsigned int) arr_10 [i_3] [i_2] [i_1]))))))), (((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_1 + 2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 3]))) : (arr_5 [i_0 - 3] [i_1 + 1] [i_2])))));
                                arr_14 [i_2] = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))) * (((arr_7 [i_2 + 4] [i_1] [i_0 - 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0 - 3])), (arr_5 [i_0] [i_1 - 1] [i_0 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_0 - 2]), (((/* implicit */short) var_17)))))) : ((~(arr_5 [i_0] [i_1 - 3] [i_0 - 3])))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) ((((/* implicit */int) var_18)) == (((/* implicit */int) max((min((((/* implicit */signed char) var_19)), (var_14))), (var_6))))));
}
