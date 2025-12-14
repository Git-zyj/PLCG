/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85718
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
    var_15 = ((((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 123059189)))) || (((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) var_13))))))) ? (var_1) : (((/* implicit */unsigned long long int) var_0)));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_2] [i_1] [i_2] &= (+(((arr_1 [i_0 + 1]) ? (-65380304) : (((/* implicit */int) arr_1 [i_0 - 1])))));
                    var_16 = ((/* implicit */_Bool) var_9);
                    arr_8 [i_0] [i_1 + 1] [i_2] [i_2] |= ((((/* implicit */long long int) ((((/* implicit */_Bool) ((123059189) * (((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */int) min((arr_4 [i_1]), (arr_4 [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) -123059189)))))))) + ((~(((-6558942566004411977LL) & (((/* implicit */long long int) ((/* implicit */int) (short)29897))))))));
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) min((123059195), (((((/* implicit */_Bool) -123059187)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (var_10)))));
                }
            } 
        } 
    } 
}
