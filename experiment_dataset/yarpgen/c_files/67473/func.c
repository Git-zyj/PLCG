/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67473
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
    for (int i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_19 ^= ((/* implicit */_Bool) 755585812U);
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_12)))))), (min((((((/* implicit */_Bool) arr_6 [0U] [i_1] [i_3])) ? (16ULL) : (((/* implicit */unsigned long long int) var_16)))), (((/* implicit */unsigned long long int) ((_Bool) 11U)))))))));
                            }
                        } 
                    } 
                } 
                arr_14 [7] [i_1] = ((/* implicit */unsigned long long int) (_Bool)0);
                var_21 = (((_Bool)1) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (18446744073709551599ULL) : (arr_3 [i_0])))));
                var_22 = ((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_23 = ((/* implicit */int) min((((var_11) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (min((7812596857009124700ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) var_14)))), ((!(((/* implicit */_Bool) 18446744073709551593ULL)))))))));
}
