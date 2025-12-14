/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67753
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_16 = ((((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */int) arr_4 [i_1] [(signed char)12] [i_0])) : (((/* implicit */int) arr_1 [i_0])))) ^ (((((/* implicit */int) arr_3 [i_1])) & (((/* implicit */int) arr_3 [i_0])))));
                var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_1])) - (((/* implicit */int) arr_3 [i_0]))))) ? (arr_5 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) -2147483639)) ? (524564409735088214ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_0] [i_0]))))) : (arr_5 [i_0] [i_1]))) - (524564409735088209ULL)))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((var_10) ? (var_3) : (((/* implicit */int) var_1)))) : (var_9)));
    var_19 = var_1;
    var_20 = ((/* implicit */signed char) max((var_20), (var_1)));
}
