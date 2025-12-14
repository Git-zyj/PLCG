/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9344
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
    var_17 &= ((/* implicit */long long int) var_14);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 24; i_1 += 4) 
        {
            {
                arr_8 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_4 [i_0])))))))), (arr_3 [i_0])));
                var_18 &= ((/* implicit */short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_0])) ? (-2139734137) : (((/* implicit */int) arr_2 [i_0] [i_1 - 4])))), (((/* implicit */int) (!(((/* implicit */_Bool) 2139734137))))))))));
                var_19 = ((/* implicit */unsigned char) min((max((min((((/* implicit */long long int) (signed char)-36)), (var_7))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)78))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2139734137)) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0])))))));
            }
        } 
    } 
}
