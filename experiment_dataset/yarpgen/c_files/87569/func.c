/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87569
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
    var_12 &= ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 7; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (short)-7645))));
                var_14 = (+(max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) (short)-7626)) ? (var_10) : (arr_5 [i_0] [i_1]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 1; i_2 < 7; i_2 += 3) 
    {
        for (short i_3 = 1; i_3 < 8; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                {
                    arr_15 [i_3] [(short)8] = ((unsigned int) (!(((/* implicit */_Bool) arr_13 [i_3] [i_3 + 2] [i_4] [i_2 - 1]))));
                    arr_16 [i_4] [i_4] |= ((/* implicit */unsigned int) (short)7645);
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 8; i_6 += 2) 
                        {
                            {
                                var_15 = ((((arr_5 [i_2 - 1] [i_2 - 1]) <= (arr_5 [i_4] [i_6 + 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_5 [i_3 - 1] [i_6 - 1]) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-7646))))))) : (((unsigned int) (short)7668)));
                                arr_23 [6U] [i_5] [i_5] [i_2] &= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_4]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) ((short) var_3))) - (((/* implicit */int) var_0)))));
}
