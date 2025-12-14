/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62912
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
    var_11 |= ((/* implicit */signed char) max((((/* implicit */long long int) ((int) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_5)))))), (var_7)));
    var_12 += var_5;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_0] = 762796957;
                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_5))));
                var_14 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (4294967295U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-63))))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (signed char)-49))))) >= (((/* implicit */int) ((short) arr_3 [i_0] [i_1]))))))));
            }
        } 
    } 
}
