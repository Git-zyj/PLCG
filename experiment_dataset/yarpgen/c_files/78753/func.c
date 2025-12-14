/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78753
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_4 [i_2 - 1] [i_2 - 1]), (var_0))))) == (((3280333448U) + (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                    var_11 -= ((/* implicit */signed char) max((((/* implicit */unsigned int) (+(0)))), (3757139859U)));
                    var_12 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 623431174U)) ? (((((/* implicit */_Bool) -7997502633406427165LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1]))) : (arr_8 [i_0] [i_1] [i_2]))) : (((4294967295U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_2 - 2] [i_2])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_13 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_13 [i_0] [4U] [i_2 + 1] [i_0]))) ? (arr_8 [i_2 + 2] [i_2] [(unsigned short)7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                                arr_14 [i_4] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 537827428U)) > (min((((/* implicit */unsigned long long int) max(((unsigned short)53080), ((unsigned short)35238)))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (8143012750804128415ULL) : (((/* implicit */unsigned long long int) 251746352U))))))));
                                arr_15 [i_2] [i_1] [i_3] [i_3] [i_3] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_2] [i_2])) ? (((min((arr_0 [i_4] [i_2 + 2]), (arr_0 [i_2] [i_2]))) + (((unsigned int) var_0)))) : ((+(1338532316U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((3757139879U) << (((2389996058U) - (2389996041U))));
}
