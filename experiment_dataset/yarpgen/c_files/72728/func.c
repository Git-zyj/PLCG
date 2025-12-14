/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72728
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 4; i_2 < 8; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) max((var_20), (max((max((((((/* implicit */_Bool) 1073741823)) ? (0U) : (arr_5 [i_0] [i_1] [i_2]))), (((/* implicit */unsigned int) -139822202)))), (max((var_8), (((/* implicit */unsigned int) var_11))))))));
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_19), (((/* implicit */unsigned int) arr_1 [i_0] [(_Bool)1]))))) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2] [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) != (((arr_3 [i_0] [i_2]) ? (arr_4 [(short)8]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))))))))) : (((((/* implicit */_Bool) 489856325U)) ? (max((var_12), (((/* implicit */unsigned int) (short)-32765)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)57)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [10] [i_0])))))))));
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(max((arr_4 [i_0 - 1]), (((/* implicit */long long int) -139822202))))))) ? (((/* implicit */long long int) (-(arr_5 [i_0] [i_0 + 1] [i_2])))) : (((((/* implicit */_Bool) arr_4 [i_0 - 2])) ? (((((/* implicit */_Bool) (signed char)127)) ? (arr_4 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)131))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1])))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_1] [4ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (arr_5 [i_0 + 1] [i_2 + 1] [(_Bool)1]))) + (((/* implicit */unsigned int) (+(((/* implicit */int) var_17)))))));
                                var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_15)))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_3 [i_1] [i_3]))))))) ? (arr_5 [i_0 + 1] [i_1] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [11]))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) arr_9 [i_2] [i_2] [i_1] [i_1] [i_0]))))) ? (max((((/* implicit */long long int) var_17)), (var_2))) : (((/* implicit */long long int) max((-1665493088), (139822204))))))) ? (((/* implicit */long long int) -139822202)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (var_1) : (((/* implicit */long long int) arr_5 [i_0 - 1] [i_1] [(short)11]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : ((-(arr_4 [(short)3])))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_10)), (var_9)))) : (max((var_1), (((/* implicit */long long int) var_4)))))), (min(((+(-2673199131491128538LL))), (((/* implicit */long long int) -139822202))))));
}
