/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99352
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_11))));
    var_14 = 211636462;
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_0] = max((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_2 [i_1 - 2] [i_0 + 3] [i_0]))), (((/* implicit */long long int) min((var_2), (arr_3 [i_0] [i_1])))));
                var_15 &= ((((/* implicit */_Bool) -211636437)) ? ((-2147483647 - 1)) : (115441150));
            }
        } 
    } 
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) var_1))) < (-6777170540696863457LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7))))))))))));
}
