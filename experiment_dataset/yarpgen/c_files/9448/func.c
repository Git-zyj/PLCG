/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9448
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
    var_12 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (signed char)21)) ? (((/* implicit */int) var_10)) : (((((((/* implicit */int) var_0)) + (2147483647))) >> (((((/* implicit */int) var_4)) + (56)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [(unsigned char)1] [8U] &= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_1 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [2U])) == (((/* implicit */int) var_7))))))))) ? (((var_2) - (((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)28986)))))));
                arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)36550)) && ((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)64)) || (((/* implicit */_Bool) 1480336059141751457ULL)))))))) ? (min((((/* implicit */unsigned long long int) var_0)), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
            }
        } 
    } 
}
