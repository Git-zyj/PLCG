/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59526
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
    var_11 = (unsigned short)6968;
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (2686114896U)));
    var_13 = ((/* implicit */int) (signed char)-119);
    var_14 = ((/* implicit */long long int) -1614849625);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_3 [i_1 + 1] [i_1 - 3]) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 3])) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 3]))))) && (((((/* implicit */int) (signed char)115)) <= (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 3]))))));
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [15])), (1614849625)))) ? (var_7) : (max((((((/* implicit */int) (signed char)127)) / (((/* implicit */int) arr_3 [i_0] [i_0])))), (2147483630)))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (int i_3 = 4; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-122))) <= (((((/* implicit */_Bool) (unsigned short)2048)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (17014036491677339636ULL)))))), (min((((/* implicit */unsigned int) arr_10 [i_0] [10LL] [i_2] [i_3 - 1] [i_4 - 3])), (((((/* implicit */_Bool) var_10)) ? (arr_8 [i_2] [i_2] [(signed char)13] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
                                var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 9828921731862301062ULL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (17014036491677339636ULL) : (((/* implicit */unsigned long long int) var_0))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_3 - 3] [i_4 - 4] [i_1 + 1] [i_4 + 2])) ? (min((17014036491677339636ULL), (((/* implicit */unsigned long long int) 572240230)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3 - 4] [i_2] [i_0] [i_3 - 2] [i_4 + 2]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
