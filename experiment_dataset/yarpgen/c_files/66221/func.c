/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66221
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_2 + 4])), (((17985638327528942973ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_3] [13ULL] [i_0] [i_2 - 2])))))));
                                arr_13 [i_1] [i_3] [(unsigned short)13] [i_1] [(signed char)10] [i_0] [i_1] = ((/* implicit */unsigned long long int) var_7);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */_Bool) min(((-(arr_6 [i_2 + 1] [i_2 + 1] [i_2 - 2]))), (((/* implicit */unsigned long long int) arr_8 [i_0] [(_Bool)0] [i_0] [i_0]))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) var_4);
}
