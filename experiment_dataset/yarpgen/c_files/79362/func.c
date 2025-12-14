/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79362
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
    var_14 = ((/* implicit */short) ((((int) ((((/* implicit */_Bool) 16777184U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (2627503705U)))) + ((~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)251)) : (var_3)))))));
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_10))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */_Bool) arr_3 [i_0] [i_1]);
                    arr_7 [i_0] [i_0] |= ((/* implicit */unsigned char) 2627503705U);
                    arr_8 [i_1] = ((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_1]);
                }
            } 
        } 
    } 
}
