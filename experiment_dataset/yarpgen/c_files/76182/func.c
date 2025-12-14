/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76182
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
    var_17 = var_13;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) (unsigned short)27223)) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-8865))))))) ? (((((/* implicit */_Bool) 1980274655U)) ? (arr_1 [i_0 - 3] [i_0 + 1]) : (((/* implicit */long long int) arr_2 [i_0] [i_1])))) : (arr_1 [10] [10]))))));
                var_19 = (unsigned short)62405;
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((var_4) >> (((/* implicit */int) var_7)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
    var_21 = ((/* implicit */unsigned short) var_5);
}
