/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92119
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
    var_19 = ((/* implicit */signed char) (+(max((min((var_3), (((/* implicit */long long int) (short)-30769)))), (((/* implicit */long long int) min((var_2), (((/* implicit */unsigned int) var_4)))))))));
    var_20 = ((/* implicit */long long int) (~(((/* implicit */int) (!((_Bool)1))))));
    var_21 = ((/* implicit */signed char) (~(((((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((var_12), (((/* implicit */unsigned short) var_16))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (signed char i_4 = 4; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_17 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_0] [i_2 - 2] [i_2] [i_2])))))));
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_0] [i_0]))))), (((/* implicit */unsigned int) ((unsigned short) var_2)))))) ? (((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_15 [i_0] [i_1] [i_3] [i_4])), ((short)7626))))) & (min((arr_16 [i_4] [i_4] [i_4 - 2] [i_4] [7]), (((/* implicit */long long int) var_11)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_4 - 2] [i_4 + 3] [i_4 + 2] [i_4] [i_4 - 4])) ? (((((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_3] [i_4])) | (((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_2 - 3] [i_2 - 2])))) : (((/* implicit */int) arr_14 [i_0] [i_3] [i_2 - 2] [i_1] [i_0])))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_16))) ? ((~(var_1))) : (arr_12 [i_0] [i_1] [i_1] [i_2 - 1] [i_2 - 2])))), (((((/* implicit */_Bool) arr_6 [i_2 - 3] [i_2 - 1] [i_2 - 3] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2 - 3] [i_2 - 3] [i_2 - 1] [i_2 - 1]))) : (var_5)))));
                    arr_18 [i_0] [i_0] [i_0] [i_1] &= ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_7)))) - (min((var_3), (((/* implicit */long long int) arr_7 [i_2 - 3] [i_2] [i_1] [i_0])))))) - (var_3)));
                }
            } 
        } 
    } 
}
