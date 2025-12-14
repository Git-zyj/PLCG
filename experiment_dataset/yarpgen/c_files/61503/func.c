/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61503
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
    var_10 = min((var_8), (((signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))));
    var_11 ^= ((/* implicit */signed char) ((((/* implicit */int) var_8)) ^ ((~(((((((/* implicit */int) var_7)) + (2147483647))) << (((((((/* implicit */int) var_7)) + (115))) - (5)))))))));
    var_12 = var_1;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) max((arr_3 [i_1] [i_1] [i_0]), (arr_3 [i_1] [i_1] [i_0]))))));
                arr_5 [i_0] [i_1] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)106))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) (+(((((/* implicit */int) (signed char)25)) % (((/* implicit */int) (signed char)-9))))));
}
