/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59184
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
    var_18 ^= ((/* implicit */short) ((((((/* implicit */_Bool) (-(3565757474U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 16306343550350263573ULL)) && (((/* implicit */_Bool) var_17)))))) : (min((((/* implicit */unsigned int) 453488399)), (1984U))))) % (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_7))));
                    var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(arr_3 [i_0] [i_1])))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_2]))) : (var_4)))));
                    var_21 |= ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_1]))));
                }
            } 
        } 
    } 
}
