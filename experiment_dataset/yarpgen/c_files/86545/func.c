/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86545
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
    var_13 &= ((/* implicit */unsigned long long int) (+(max((((var_7) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10)))), (((/* implicit */int) (unsigned short)64462))))));
    var_14 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((var_2) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))) == (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)64462))))))), (max((((var_12) & (var_12))), (((/* implicit */unsigned long long int) var_9))))));
    var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))));
    var_16 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_17 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(unsigned char)8] [4U])))))) == (((520844478U) << (((((/* implicit */int) (signed char)-86)) + (106)))))));
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) arr_2 [i_1 + 1] [(short)12]))))))));
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) max((520844459U), (((unsigned int) (_Bool)1)))))));
                var_20 -= ((/* implicit */int) ((((/* implicit */_Bool) 520844478U)) ? (11300384047281151393ULL) : (((/* implicit */unsigned long long int) 2147483647))));
            }
        } 
    } 
}
