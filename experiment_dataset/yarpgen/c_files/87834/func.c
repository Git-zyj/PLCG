/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87834
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
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)100)) >> (((arr_2 [i_1]) - (331805290)))))) + (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */unsigned long long int) -981208512)) % (arr_4 [(short)8])))))));
                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((((/* implicit */_Bool) ((int) 981208511))) ? (((/* implicit */unsigned long long int) (-(981208521)))) : (8776415531191063251ULL)))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) ((int) (-(((/* implicit */int) (short)-9134)))));
    var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(949354703U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_4) : (-981208512))))))), (var_8)));
}
