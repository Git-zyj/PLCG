/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91951
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
    var_16 = var_9;
    var_17 += max((max(((-(var_2))), ((~(3806536432892099978ULL))))), (((/* implicit */unsigned long long int) var_1)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_16 [i_3] [i_4] = ((/* implicit */unsigned int) max((max((var_3), (((/* implicit */unsigned long long int) min((arr_15 [i_2] [10U] [i_2] [i_2] [i_2] [i_2] [i_2]), (arr_8 [i_0])))))), (max((min((arr_13 [i_0] [i_0] [i_0 + 3] [i_0] [i_0] [i_0]), (var_11))), (((arr_4 [i_2] [i_3] [i_2]) / (14640207640817451637ULL)))))));
                                arr_17 [i_4] [i_4] [i_1] [i_3] [i_2] = ((/* implicit */unsigned int) min((min((min((arr_14 [i_0] [4U] [i_2] [i_2] [i_4]), (arr_9 [i_1 - 3] [i_2] [i_4]))), (((((/* implicit */_Bool) arr_8 [9ULL])) ? (arr_13 [i_0 - 1] [i_1] [i_3] [i_3] [i_0 + 2] [0ULL]) : (arr_4 [i_2] [i_0] [i_4]))))), (((/* implicit */unsigned long long int) ((arr_0 [i_0 + 2] [i_0 + 2]) % (max((var_9), (arr_1 [i_0]))))))));
                            }
                        } 
                    } 
                    arr_18 [i_0 - 1] [1ULL] [i_2] = max((16773120U), (16773120U));
                }
            } 
        } 
    } 
}
