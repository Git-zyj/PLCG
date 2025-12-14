/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95882
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
        for (signed char i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) << (((/* implicit */int) var_13))))) ? (arr_3 [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned long long int) arr_4 [i_0]))))) ? ((~(var_15))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */int) var_2)), (var_12)))), (((unsigned int) (signed char)18))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    arr_9 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) arr_2 [i_1])))))) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                    arr_10 [i_0] [i_0] [i_1 + 2] [i_0] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) 3670016)) && (((/* implicit */_Bool) var_12))))));
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (~(max((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))), (((/* implicit */int) ((((/* implicit */_Bool) 1794557171964284828ULL)) || (((/* implicit */_Bool) arr_4 [i_0])))))))));
                    arr_12 [i_0] [i_0] = ((/* implicit */int) arr_7 [i_0] [i_1] [i_2]);
                }
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)15))));
    var_19 = ((((/* implicit */_Bool) max((((((/* implicit */int) var_13)) ^ (((/* implicit */int) (signed char)-75)))), (((/* implicit */int) var_17))))) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) ((((7019464978370209898ULL) << (((var_3) - (11032625336555602440ULL))))) >= (var_15))))));
}
