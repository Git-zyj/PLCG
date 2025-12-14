/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84176
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            {
                var_11 = max((((/* implicit */unsigned int) arr_0 [i_0])), (((unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
                arr_7 [i_0] = min((var_5), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)11462))))) ? (0U) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1 - 2])) ? (arr_1 [i_0] [i_0]) : (arr_2 [i_0])))))));
                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) var_5))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            {
                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((min((0U), (((/* implicit */unsigned int) arr_0 [i_3])))) * (((arr_6 [i_3]) % (arr_6 [i_3]))))))));
                arr_12 [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_1 [i_2] [i_3])))) ? (((/* implicit */int) arr_9 [i_2] [i_2])) : (((/* implicit */int) arr_5 [i_2] [i_2] [i_2]))))) | (min(((~(0U))), (min((((/* implicit */unsigned int) var_1)), (arr_6 [i_2])))))));
            }
        } 
    } 
}
