/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73930
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
    var_19 = ((/* implicit */long long int) max((var_19), (var_1)));
    var_20 = ((((/* implicit */_Bool) var_7)) ? (((((((/* implicit */_Bool) -3177214292776822162LL)) ? (var_11) : (var_0))) >> (((var_16) - (7237210319122693738LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_5)))))))));
    var_21 = var_0;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */long long int) max((var_22), (max((((long long int) ((var_15) / (-2441768505198180897LL)))), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))))))))));
                var_23 = ((/* implicit */long long int) max((var_23), (((((/* implicit */_Bool) var_7)) ? ((((((-9223372036854775807LL - 1LL)) | (arr_1 [i_0] [2LL]))) ^ (arr_0 [5LL]))) : ((~(arr_3 [i_1])))))));
                var_24 = ((/* implicit */long long int) max((var_24), (((((/* implicit */long long int) ((/* implicit */int) ((arr_3 [i_1]) <= (var_14))))) & (var_13)))));
                arr_4 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) 536870911LL)) ? (9223372036854775807LL) : (((long long int) arr_1 [i_0] [i_1])));
                arr_5 [i_0] = min((var_3), (var_1));
            }
        } 
    } 
}
