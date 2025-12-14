/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7869
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
    var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_6))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) (unsigned char)79))) > ((-2147483647 - 1))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_18 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) min((var_11), (((/* implicit */unsigned char) var_12)))))) : (var_13)))) ? ((-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12)))))) : (((/* implicit */int) var_2)));
                    arr_7 [i_0] [i_0] [i_0 - 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((var_1) >= (((/* implicit */int) var_10)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (var_3)))) ? (((/* implicit */int) var_0)) : ((~(var_1))))), (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned char) var_12)), (var_10)))) > (max((var_1), (((/* implicit */int) var_14)))))))));
}
