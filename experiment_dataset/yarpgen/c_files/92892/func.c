/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92892
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1 - 1] [i_2] = ((/* implicit */unsigned short) max(((-(arr_7 [i_2] [i_0] [i_2 - 2]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_1 + 3] [i_1 - 1])))))));
                    var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (max((var_5), (((/* implicit */int) arr_8 [i_0] [i_0] [(short)16] [i_0])))) : (((/* implicit */int) var_1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4032)) ? (18446744073709551601ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) max((((/* implicit */int) ((_Bool) (+(var_7))))), (var_5))))));
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_13))));
}
