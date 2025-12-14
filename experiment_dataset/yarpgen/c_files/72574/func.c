/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72574
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
    var_17 *= var_13;
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_3))));
                    var_19 = ((/* implicit */signed char) ((long long int) var_3));
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (~(18446744073709551615ULL))))));
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) arr_3 [i_0])) ^ (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) 2719266528U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)31))))))) ? (arr_1 [4U] [i_1]) : (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_0 [i_0]) : (arr_7 [i_0 - 1] [i_1] [i_2]))) / (((/* implicit */unsigned int) (~(((/* implicit */int) var_15))))))))));
                    var_22 = arr_4 [i_0] [i_0] [i_0];
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_0))));
}
