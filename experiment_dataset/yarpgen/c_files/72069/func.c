/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72069
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
    var_13 = ((/* implicit */long long int) ((0U) << (((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_14 = (-(max((((((/* implicit */_Bool) (unsigned char)198)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)11))) : (16057020911906984673ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_2 [(unsigned char)6]))))))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) (short)11)), (arr_6 [i_0] [i_1] [i_0]))), (((/* implicit */long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) (signed char)-1)))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) & (((/* implicit */int) arr_1 [i_0] [i_1])))) << (((max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1])), (arr_7 [9]))) - (2777307415289112067ULL)))))) : ((~(((((/* implicit */_Bool) (unsigned short)15619)) ? (2389723161802566945ULL) : (((/* implicit */unsigned long long int) 3528300402U))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) var_0);
}
