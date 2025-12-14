/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61890
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
    var_20 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_6)) != (var_14)))), ((-(((((/* implicit */long long int) ((/* implicit */int) var_18))) | (var_12)))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 12797992440944060402ULL)) ? (12797992440944060393ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_1 - 1] [i_1 + 1])), (max((arr_6 [i_0] [i_0]), (arr_6 [i_0] [i_1 + 1]))))))));
                arr_8 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [(short)4] [6ULL])) : (((/* implicit */int) arr_1 [i_1] [i_0]))))) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_1 - 2]))))) || (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) || (((((/* implicit */int) arr_1 [i_1] [9LL])) != (((/* implicit */int) arr_5 [i_0] [i_0]))))))));
            }
        } 
    } 
}
