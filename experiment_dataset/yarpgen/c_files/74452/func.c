/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74452
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = 4294967295U;
                var_17 = ((/* implicit */signed char) var_1);
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) min((arr_1 [i_0]), (((/* implicit */signed char) (!(var_13)))))))));
                var_19 = ((/* implicit */unsigned int) max((((/* implicit */short) (!((!((_Bool)1)))))), (arr_4 [i_0] [i_0] [i_1])));
                var_20 = max((((((/* implicit */_Bool) 4294967274U)) ? ((~(4294967285U))) : (((((/* implicit */_Bool) 1U)) ? (1U) : (0U))))), (((/* implicit */unsigned int) arr_3 [i_1] [i_1] [i_0])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned char) arr_8 [i_2]);
                var_22 = ((/* implicit */unsigned long long int) arr_9 [i_2] [i_2] [i_3]);
            }
        } 
    } 
}
