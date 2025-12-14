/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64924
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
    var_10 ^= ((/* implicit */_Bool) (-(max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_5))), (((/* implicit */long long int) min((var_8), (((/* implicit */int) var_7)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))) ? (((/* implicit */int) ((arr_3 [i_0] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 1])))))) : ((~(((/* implicit */int) arr_2 [i_1]))))))));
                var_11 = ((/* implicit */unsigned long long int) arr_0 [i_1]);
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (arr_4 [i_0] [i_1 - 1])))) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_2 [i_1 + 1]))))) ? (((/* implicit */unsigned long long int) min((((((arr_1 [i_0]) + (2147483647))) << (((((/* implicit */int) arr_0 [i_1 - 1])) - (147))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))))) : ((~(332995389135465949ULL)))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((var_3) + (9223372036854775807LL))) << (((((/* implicit */int) var_6)) - (154)))))) ? (((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_0))))) >= (var_8))))));
    var_14 = ((/* implicit */_Bool) max((((long long int) (!(((/* implicit */_Bool) var_4))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_7)))))) > (((((/* implicit */_Bool) var_3)) ? (var_9) : (var_4))))))));
}
