/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73592
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_13 ^= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_4 [i_1 - 1] [i_1 + 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((int) var_6))))));
                var_14 -= ((var_5) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1 + 1])) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) (unsigned short)45064)))) : (((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */int) var_8))))))));
                var_15 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_11)) ? (arr_4 [i_1 + 1] [i_1 + 1] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) - (var_6))))));
                arr_5 [i_0] [i_0] [6U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)4096)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (32512U)));
            }
        } 
    } 
    var_16 = ((/* implicit */short) var_5);
    var_17 = ((/* implicit */unsigned short) ((((var_4) != (((var_11) >> (((var_6) - (737690364U))))))) || (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((var_2) + (3331421217759095405LL)))))) || (((/* implicit */_Bool) var_8))))));
    var_18 = ((/* implicit */unsigned short) var_8);
}
