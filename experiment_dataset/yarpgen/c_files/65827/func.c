/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65827
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
    var_12 = ((/* implicit */int) (~(var_5)));
    var_13 = ((/* implicit */unsigned long long int) ((var_4) >> (((var_2) + (1811528086)))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_14 += ((/* implicit */unsigned long long int) (((+(arr_4 [i_0 - 1]))) | (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_4 [i_0 - 2])))));
                arr_6 [5] [i_0 - 2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (((var_5) >> (((var_1) - (775571041059440041LL)))))));
            }
        } 
    } 
}
