/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76206
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
    var_20 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) min((((/* implicit */int) var_9)), (-1815923676)))))) ? (((/* implicit */unsigned int) var_12)) : (var_11)));
    var_21 = ((/* implicit */unsigned long long int) var_15);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((max((((arr_2 [i_0 - 4] [(short)9]) >> (((arr_4 [i_0]) - (2126412889089467479LL))))), (((/* implicit */long long int) arr_1 [i_0 + 1])))) * (min((((/* implicit */long long int) min(((short)-11456), (((/* implicit */short) (_Bool)1))))), (arr_2 [i_1 - 2] [i_0 + 1]))))))));
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) min((((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 333030679)) ? (((/* implicit */int) arr_0 [(_Bool)1] [i_1])) : (((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned int) arr_3 [i_0 - 4] [i_1] [i_0 - 4])), (arr_5 [i_0])))))), (((((/* implicit */long long int) ((/* implicit */int) min((arr_0 [i_0] [i_1]), (((/* implicit */unsigned short) (_Bool)1)))))) * (((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_0]))))))))));
            }
        } 
    } 
}
