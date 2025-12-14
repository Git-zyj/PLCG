/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98046
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
    var_13 = ((/* implicit */signed char) var_1);
    var_14 = (+(min(((-(((/* implicit */int) var_7)))), (var_11))));
    var_15 = (((+(((/* implicit */int) ((var_11) >= (((/* implicit */int) var_7))))))) >> (((((/* implicit */int) ((unsigned short) var_1))) - (4961))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((((unsigned long long int) arr_3 [i_0 + 3] [i_0 + 2])) < (((arr_2 [i_0 + 3] [i_0 + 3]) | (((/* implicit */unsigned long long int) var_4))))));
                var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((long long int) -3068360899909783545LL))) > (max((((arr_2 [i_0] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [10]))))), (((/* implicit */unsigned long long int) var_7))))));
                var_18 -= ((/* implicit */short) arr_4 [i_0] [i_0] [i_1]);
                var_19 *= ((/* implicit */_Bool) var_6);
            }
        } 
    } 
}
