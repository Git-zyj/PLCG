/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74523
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
    var_12 = ((/* implicit */_Bool) var_10);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) arr_4 [i_2] [i_1 - 3] [i_0]))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) + (arr_0 [i_0] [i_0]))) : (max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) arr_4 [i_0] [i_1 + 1] [i_2]))))));
                    var_13 = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))), (min((((/* implicit */unsigned int) min((var_3), (((/* implicit */short) arr_10 [i_0] [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [i_2])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))))))));
                    arr_12 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned short) min((min((min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1 - 2] [i_2] [i_1 - 2])), (arr_7 [i_0] [i_2]))), (((arr_10 [i_0] [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [i_1]) : (arr_7 [i_1] [i_0]))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) arr_4 [i_0] [i_1 - 3] [19LL]))))) : (min((var_10), (((/* implicit */unsigned long long int) var_7))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(var_1)))), (min((((/* implicit */unsigned int) var_4)), (var_11))))))));
}
