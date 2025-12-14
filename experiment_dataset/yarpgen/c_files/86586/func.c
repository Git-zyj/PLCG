/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86586
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
    var_17 = ((/* implicit */unsigned char) 1857169786U);
    var_18 = ((/* implicit */_Bool) var_8);
    var_19 = ((/* implicit */short) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_11)))) || (((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) var_1)) : (var_3)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-13172)), (arr_2 [i_1])))) ? (((/* implicit */unsigned long long int) (~(arr_2 [i_0 - 1])))) : (((((/* implicit */unsigned long long int) -9223372036854775786LL)) - (3960181372673248716ULL)))));
                var_21 = ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]);
            }
        } 
    } 
}
