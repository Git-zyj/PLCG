/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83245
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
    var_17 = ((((/* implicit */int) var_14)) << (((((((/* implicit */_Bool) ((var_15) << (((var_6) + (1556120452)))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_16))) : (((((/* implicit */_Bool) var_15)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) - (18446744073709534957ULL))));
    var_18 = ((/* implicit */short) min((((/* implicit */int) var_10)), (((((((/* implicit */int) var_12)) + (2147483647))) << (((((((/* implicit */int) var_3)) << (((var_1) - (1339492564U))))) - (1526726656)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (18372778768894932770ULL)));
                    arr_11 [(signed char)16] [i_2] &= ((/* implicit */signed char) (~(((arr_0 [i_0 - 1]) << (((arr_0 [i_0 - 1]) - (3492667024U)))))));
                }
            } 
        } 
    } 
}
