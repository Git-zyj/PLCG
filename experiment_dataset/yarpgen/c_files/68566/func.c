/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68566
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)1119)) : (((/* implicit */int) var_9)))))))) + (((((/* implicit */_Bool) arr_3 [i_1] [i_1 - 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))))));
                var_15 = ((/* implicit */unsigned int) var_12);
            }
        } 
    } 
    var_16 *= ((/* implicit */short) ((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_10)) : (var_4))) == (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_8))))) ? (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) % (var_8))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))))) : (((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | (((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) var_5))))) ? (((((/* implicit */_Bool) 13185784804156429656ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)113))) : (var_8))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-17)))))))))));
}
