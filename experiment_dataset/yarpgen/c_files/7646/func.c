/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7646
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_17)) == (var_3)));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned int i_2 = 4; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 2] [i_2 + 1])) < (((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 1] [i_2 - 2]))))), (((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0 - 1] [i_2 + 1])) ? (((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 2] [i_2 + 2])) : (((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 1] [i_2 - 4]))))));
                    var_21 = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_5 [i_1] [i_1] [i_2 + 1])), (((((/* implicit */long long int) 2387314168U)) * (17LL)))));
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) arr_4 [i_0])))), (((/* implicit */int) arr_4 [i_0]))))), (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned short) arr_4 [i_0]))))) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (max((var_3), (((/* implicit */unsigned long long int) arr_3 [i_0]))))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [i_1] [i_2 + 1]))))) ? (((/* implicit */int) arr_2 [i_0] [i_2 + 2])) : (((/* implicit */int) arr_5 [i_0 + 1] [i_2 - 2] [i_2 + 2]))))));
                }
            } 
        } 
    } 
    var_22 = var_9;
}
