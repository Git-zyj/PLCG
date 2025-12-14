/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97728
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
    var_17 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_12))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) (-(((unsigned int) ((arr_4 [i_0] [i_0] [i_1]) + (((/* implicit */long long int) var_6)))))));
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned char) (signed char)30))))) ? (arr_4 [i_1] [i_1] [i_0]) : (((/* implicit */long long int) 2296622958U)))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)4))))) ? (((((/* implicit */_Bool) (unsigned short)46289)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46278))) : (arr_4 [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19237)))))));
            }
        } 
    } 
}
