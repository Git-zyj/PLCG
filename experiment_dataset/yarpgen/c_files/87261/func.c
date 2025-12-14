/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87261
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) 7464937570431461478LL);
                var_18 ^= ((/* implicit */unsigned char) max((max((arr_4 [(unsigned char)3] [7] [i_0 + 1]), (arr_4 [i_1 - 1] [i_1 - 1] [i_0 - 1]))), (((((/* implicit */_Bool) -5749031327782392103LL)) ? (5749031327782392102LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-51)))))));
                var_19 = ((/* implicit */_Bool) (+((-(((((/* implicit */_Bool) -5749031327782392079LL)) ? (arr_4 [2ULL] [3LL] [(unsigned short)12]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))))));
                var_20 = ((/* implicit */int) var_15);
            }
        } 
    } 
    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-36)), (var_5)))) ? (((/* implicit */int) ((var_0) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-118)))))) : (-1859002929)))) ? ((-(max((5749031327782392105LL), (((/* implicit */long long int) var_15)))))) : (((/* implicit */long long int) ((/* implicit */int) var_3))));
}
