/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85189
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
    var_19 = ((/* implicit */long long int) var_6);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) var_5))))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((_Bool) arr_5 [i_0] [i_1])))));
                var_22 = ((/* implicit */signed char) ((short) (signed char)35));
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_12), (-605061639)))) ? (((/* implicit */int) (unsigned short)15680)) : ((+(((/* implicit */int) (signed char)-36))))));
            }
        } 
    } 
}
