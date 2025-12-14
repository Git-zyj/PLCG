/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61474
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((var_15), (((/* implicit */int) var_8)))), (min((var_7), (((/* implicit */int) var_5))))))) ? (((/* implicit */int) max((var_3), (((/* implicit */short) ((_Bool) var_2)))))) : (var_7)));
    var_17 = var_1;
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_18 += ((/* implicit */signed char) (-(max((((unsigned long long int) arr_1 [i_4])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1 - 2] [(short)5] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_8 [6ULL] [(unsigned char)8] [i_2] [i_4])) : (((/* implicit */int) arr_4 [(short)0] [i_3] [i_4])))))))));
                                var_19 = ((/* implicit */unsigned char) min((max((arr_7 [i_1] [i_1 - 4] [i_2]), (arr_10 [i_0] [11] [i_2] [i_1 - 3] [i_4] [i_3]))), (max((arr_10 [i_4] [i_1 + 2] [i_2] [i_1 + 1] [i_4] [(short)14]), (arr_7 [i_0] [i_1 + 1] [i_2])))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((arr_11 [i_0]), (((/* implicit */unsigned short) arr_1 [i_0])))), (((/* implicit */unsigned short) arr_6 [i_0] [i_1 + 2] [i_2]))))) ? (arr_10 [i_2] [(signed char)4] [i_1 - 3] [i_1] [i_1] [12]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) 1225355496968172257LL))))));
                    var_21 = ((/* implicit */int) ((unsigned long long int) max((((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))) : (arr_5 [i_0]))), (((/* implicit */unsigned long long int) max((arr_10 [i_2] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_10 [i_0] [i_0] [i_1 - 3] [i_1 + 1] [i_2] [i_1 + 1])))))));
                }
            } 
        } 
    } 
    var_22 ^= ((/* implicit */int) max((max((((/* implicit */long long int) ((short) var_2))), (((long long int) var_13)))), (((/* implicit */long long int) var_15))));
    var_23 = ((/* implicit */unsigned char) var_7);
}
