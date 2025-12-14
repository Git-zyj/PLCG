/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79448
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
    var_13 |= ((/* implicit */unsigned char) 2575579273525618445ULL);
    var_14 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                arr_6 [i_1 - 1] [i_0] [i_0] = ((/* implicit */unsigned char) 2575579273525618425ULL);
                var_15 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) arr_5 [i_0])))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2575579273525618424ULL)) ? (((/* implicit */int) ((_Bool) (signed char)-86))) : (((/* implicit */int) var_0))))) : (var_2))))));
}
