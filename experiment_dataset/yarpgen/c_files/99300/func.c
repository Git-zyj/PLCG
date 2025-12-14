/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99300
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */short) (+(((/* implicit */int) arr_3 [i_0] [i_1]))));
                arr_7 [i_0] [i_1] = ((/* implicit */signed char) arr_0 [i_1]);
                var_19 = (((((~(((/* implicit */int) (!(var_11)))))) + (2147483647))) << ((((~(-289659565))) - (289659564))));
            }
        } 
    } 
    var_20 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)5500)))), ((~(-2138191606))))))));
    var_21 = ((/* implicit */_Bool) min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_17)) : ((~(((/* implicit */int) var_13))))))));
}
