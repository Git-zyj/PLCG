/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61322
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
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */_Bool) min((var_4), (((unsigned short) arr_4 [1ULL] [(short)9]))));
                var_11 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_0 [i_0] [i_0])))))) : (((/* implicit */int) var_3))));
            }
        } 
    } 
    var_12 += ((/* implicit */_Bool) max((((/* implicit */long long int) (short)22248)), (min((((var_1) * (((/* implicit */long long int) 0U)))), (((/* implicit */long long int) var_3))))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((4294967295U) >> (((var_0) - (2920411243U))))) >> (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (var_8)))))) ? (var_0) : (((/* implicit */unsigned int) (~(max((var_5), (((/* implicit */int) (unsigned char)3)))))))));
    var_14 |= ((/* implicit */_Bool) var_7);
    var_15 = ((/* implicit */_Bool) var_2);
}
