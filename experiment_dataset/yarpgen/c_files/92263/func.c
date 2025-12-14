/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92263
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
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (var_9))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_17 -= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((2147483647) % (arr_2 [(unsigned char)1])))) > (arr_3 [i_0] [(short)6]))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) arr_3 [i_0 + 1] [i_1]);
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) 2018551004)) > (((((/* implicit */unsigned int) arr_2 [i_1])) - (4294967295U)))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0] [i_1])))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))));
                var_18 = ((/* implicit */short) 2018551004);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
}
