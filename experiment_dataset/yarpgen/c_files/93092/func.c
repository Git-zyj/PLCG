/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93092
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                var_17 = ((((/* implicit */_Bool) (~(arr_4 [i_1 + 2])))) ? (((arr_1 [i_0]) ? (((/* implicit */int) ((unsigned char) 7020080927504967990ULL))) : (((arr_1 [14LL]) ? (arr_4 [i_1]) : (arr_2 [i_0] [i_1]))))) : ((~(((/* implicit */int) var_2)))));
                var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((((/* implicit */signed char) (_Bool)1)), (var_9)))), (var_11)));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (max((0U), (4294967295U))))), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-54)))))))));
}
