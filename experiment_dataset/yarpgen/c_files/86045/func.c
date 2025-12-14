/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86045
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
    var_15 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) var_2)), (var_9))) != (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967286U)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))) : (max((((/* implicit */unsigned int) (unsigned short)0)), (var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    var_17 ^= ((/* implicit */signed char) var_7);
                    var_18 = ((/* implicit */unsigned char) (((-(1400719399))) <= (((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_6)))) ? (var_2) : (((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 3] [i_1 - 2] [i_0]))))));
                    var_19 = max((((/* implicit */unsigned int) var_11)), (min((((/* implicit */unsigned int) 1227576608)), (max((((/* implicit */unsigned int) arr_4 [4U] [12U])), (arr_3 [i_1] [i_0]))))));
                    var_20 = arr_0 [i_0] [i_2];
                }
            } 
        } 
    } 
}
