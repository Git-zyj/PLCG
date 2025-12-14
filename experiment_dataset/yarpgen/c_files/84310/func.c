/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84310
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
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((signed char) var_12)))));
    var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) (~(4294967295U)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (~(((((/* implicit */_Bool) ((int) 1892308232U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113))) : (((((/* implicit */_Bool) (unsigned char)94)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11624))))))));
                var_18 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned int) var_1)));
                arr_6 [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_4 [i_0]) : (((/* implicit */long long int) 1892308232U))))) : (((unsigned long long int) 2499453071236456306ULL))))));
                var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (0U))))) ? ((~(((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */int) var_2)))))) : ((-(((/* implicit */int) var_10))))));
            }
        } 
    } 
    var_20 = ((int) (~((-(((/* implicit */int) var_12))))));
}
