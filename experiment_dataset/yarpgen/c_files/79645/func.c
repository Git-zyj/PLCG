/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79645
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) -211775493)), (var_1)))) ? (((/* implicit */int) (_Bool)1)) : (arr_0 [i_0]))), (((int) min((((/* implicit */long long int) arr_1 [i_0] [i_1])), (arr_3 [i_0]))))));
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [9U] [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_4)))) : (arr_3 [i_0]))))));
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (signed char)-11))));
            }
        } 
    } 
    var_19 = min(((~(max((20ULL), (var_5))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned char) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_0)))));
    var_20 = ((/* implicit */int) var_9);
    var_21 = ((min((18446744073709551596ULL), (min((((/* implicit */unsigned long long int) (unsigned char)165)), (18446744073709551615ULL))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (var_2))))));
}
