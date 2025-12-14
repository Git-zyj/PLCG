/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57081
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
    var_19 += ((/* implicit */unsigned char) var_7);
    var_20 = ((/* implicit */unsigned int) min((max((var_15), (((/* implicit */long long int) ((((/* implicit */int) var_18)) + (-1855188838)))))), (((/* implicit */long long int) var_6))));
    var_21 &= ((/* implicit */unsigned char) var_15);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_4 [i_0]);
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */unsigned long long int) var_7)))) - (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)6005)) : (((/* implicit */int) arr_1 [i_1] [i_0])))) : (((/* implicit */int) arr_1 [i_0] [i_0])))))));
                var_23 &= ((/* implicit */short) (~(((((((/* implicit */int) var_4)) << (((arr_0 [i_0]) - (2201304494695325441LL))))) << (((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_17)))) + (78)))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (signed char i_3 = 3; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_12 [i_4] [i_2] [i_2] [i_1] [(short)1] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_6 [i_0] [5LL] [i_2] [i_3 - 2]), (((/* implicit */unsigned char) arr_9 [(short)6] [i_4] [i_3] [i_2] [(short)5] [i_0])))))) : (var_14))));
                                arr_13 [i_4] [i_3 - 2] [3ULL] [3ULL] [i_1] [(short)9] = ((/* implicit */unsigned char) var_11);
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) var_18)) / (((/* implicit */int) arr_3 [(short)7]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
