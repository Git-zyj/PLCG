/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94718
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
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((max(((!(((/* implicit */_Bool) (unsigned char)18)))), (((_Bool) (unsigned char)0)))) ? (((((/* implicit */_Bool) ((arr_1 [i_0] [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)101)))))) ? (((/* implicit */long long int) var_16)) : (arr_4 [i_1]))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-92)) || (((/* implicit */_Bool) (signed char)-92)))))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) var_16)) : (arr_4 [i_0])))))));
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned char)0)) % (var_15)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)255))))) : (((((/* implicit */_Bool) min((2493302567U), (((/* implicit */unsigned int) (unsigned char)24))))) ? (arr_4 [i_0]) : (((((/* implicit */_Bool) 0)) ? (var_3) : (((/* implicit */long long int) 7U))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (((-8245395991364613273LL) - (((/* implicit */long long int) ((int) arr_0 [i_0])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) var_4);
}
