/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92232
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
    var_15 = ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_9)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) arr_2 [i_0 - 1])) / (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (-797850884) : (var_14)))) - (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65522))) | (0LL))))))));
                    arr_10 [i_1] = ((/* implicit */unsigned short) max((arr_1 [i_0] [i_0]), (((((-20LL) / (((/* implicit */long long int) ((/* implicit */int) var_4))))) >> (((((/* implicit */_Bool) var_0)) ? (0LL) : (((/* implicit */long long int) 0))))))));
                    arr_11 [i_0 - 1] [(signed char)6] [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_6 [i_2 + 2] [i_2 - 1] [i_2 + 1] [i_2])))) ? (((unsigned long long int) var_14)) : (((unsigned long long int) ((int) arr_3 [i_1] [(short)0])))));
                    arr_12 [(short)0] [i_2 + 2] [(short)0] [(short)0] = ((/* implicit */unsigned int) (-(min((((((/* implicit */_Bool) (unsigned short)40758)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13)))), (arr_2 [i_0 - 2])))));
                }
            } 
        } 
    } 
}
