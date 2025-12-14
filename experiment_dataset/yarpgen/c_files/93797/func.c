/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93797
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
    var_14 = max(((+(((((/* implicit */_Bool) 5432815023245202765ULL)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) arr_2 [i_0] [(short)0] [i_1 - 1]);
                var_16 = ((/* implicit */unsigned long long int) ((((min((2629868128U), (1180310415U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-20531))) < (arr_3 [i_0]))))) >= (((4294967295U) - (0U)))))))));
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 - 1] [i_1])) ? (arr_2 [3U] [i_1 - 1] [i_0]) : (arr_2 [i_0] [i_1 - 1] [i_0])))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1] [i_0])) ? (((/* implicit */unsigned long long int) 0U)) : (arr_2 [i_0] [i_1 - 1] [4ULL]))) : ((-(arr_2 [i_1] [i_1 - 1] [i_1])))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967294U)) ? (0U) : (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_1)) ? (var_12) : (876323976877947804ULL)))))));
    var_19 = ((/* implicit */short) min((((((((/* implicit */_Bool) var_0)) ? (10660871688621864854ULL) : (((/* implicit */unsigned long long int) 4294967295U)))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))), (((/* implicit */unsigned long long int) var_11))));
}
