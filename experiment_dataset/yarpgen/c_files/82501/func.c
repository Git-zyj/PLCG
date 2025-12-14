/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82501
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
    for (int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_18 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))))), (arr_3 [i_0])))) ? (max((((/* implicit */unsigned long long int) var_16)), (arr_6 [i_0] [i_0] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(short)6] [i_1]))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) && (((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1]))));
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
            }
        } 
    } 
    var_19 = ((/* implicit */int) var_13);
    var_20 = ((/* implicit */unsigned long long int) ((unsigned int) var_4));
    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) 2291846007950061463ULL)))))) : (var_7))) ^ (((/* implicit */long long int) ((/* implicit */int) var_13)))));
}
