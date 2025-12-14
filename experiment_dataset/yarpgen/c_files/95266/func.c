/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95266
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
    var_17 += ((/* implicit */int) ((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)23877)))));
    var_18 = ((/* implicit */unsigned short) 3643546037583393441LL);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) max(((-(max((var_15), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))))), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_4] [i_4] [i_0] [i_4] = ((/* implicit */signed char) var_6);
                                arr_12 [i_4] [2U] [i_2] [i_0] [2] [i_0] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (((/* implicit */int) arr_1 [i_0]))))) ? (((arr_7 [2U] [2U] [2U] [i_0]) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [i_2] [i_1] [i_0]))))) : (((/* implicit */long long int) max((((/* implicit */int) var_11)), (arr_2 [i_0] [i_1 + 1])))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_0 - 2] [i_0 + 1] [(short)4] [i_0])))))));
                            }
                        } 
                    } 
                    arr_13 [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)22066);
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_4 [i_0 - 2])) ? (arr_4 [i_0 + 1]) : (arr_4 [i_0 + 1])))))));
                }
            } 
        } 
    } 
}
