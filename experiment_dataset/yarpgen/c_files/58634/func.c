/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58634
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
    for (int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) var_14);
                var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */unsigned long long int) arr_0 [i_0 + 2])))) <= (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_0 - 1])))))));
                var_19 = ((((((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))))) >> (((arr_4 [i_0]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(unsigned char)11] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 2]))) : (((((/* implicit */_Bool) var_8)) ? (2863598344U) : (arr_1 [i_0])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_3);
}
