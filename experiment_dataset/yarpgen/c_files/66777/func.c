/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66777
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_12 = (((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])) & (arr_2 [i_1])))))) ? (((/* implicit */long long int) arr_1 [i_1 - 3])) : (min((((((/* implicit */_Bool) arr_0 [i_2])) ? (-1LL) : (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) (signed char)31)))));
                    arr_6 [i_0] [i_0] [i_0] [i_0] = var_8;
                    arr_7 [i_1 - 2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (arr_1 [i_1])))))) ? (max((((/* implicit */unsigned long long int) arr_3 [i_1 - 1] [i_1 - 3] [i_2])), (min((var_7), (((/* implicit */unsigned long long int) arr_4 [10U] [1U] [10U])))))) : (((/* implicit */unsigned long long int) min((arr_4 [i_1 - 1] [i_1 - 3] [i_1]), (var_6))))));
                }
            } 
        } 
    } 
    var_13 |= ((var_4) | (var_6));
    var_14 = ((/* implicit */int) (~(max((((/* implicit */long long int) var_1)), (var_3)))));
}
