/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99247
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
    var_13 = ((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (4294967295U))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) ((arr_0 [i_0]) >= (max((arr_3 [i_1]), (((((/* implicit */_Bool) arr_0 [4LL])) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))))));
                arr_6 [i_1] [i_1] = ((/* implicit */_Bool) 678329844U);
            }
        } 
    } 
    var_14 = ((unsigned long long int) ((long long int) ((short) var_11)));
    var_15 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) << (((var_12) - (296188015U)))))) != (min((((/* implicit */unsigned int) (signed char)-127)), (var_12)))))), (((long long int) min((((/* implicit */unsigned int) var_10)), (var_9))))));
}
