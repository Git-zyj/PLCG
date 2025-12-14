/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81987
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
    var_19 *= ((/* implicit */unsigned int) ((long long int) ((((long long int) 4294967295U)) ^ (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)60880)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] |= ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */long long int) var_16))))))));
                var_20 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_13)), (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : ((+(var_10)))))) ? (max((((unsigned long long int) var_4)), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))))) : (max((((/* implicit */unsigned long long int) var_5)), (var_2)))));
            }
        } 
    } 
    var_21 ^= var_13;
}
