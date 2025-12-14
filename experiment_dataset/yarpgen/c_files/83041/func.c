/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83041
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
    var_17 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_7);
                var_18 = ((/* implicit */long long int) max((var_18), (((((/* implicit */_Bool) ((int) 2944570577868498723LL))) ? (((((/* implicit */_Bool) -2944570577868498724LL)) ? (((/* implicit */long long int) 34624626U)) : (-2944570577868498734LL))) : (((/* implicit */long long int) ((int) ((int) arr_1 [10LL] [10LL]))))))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) * (arr_5 [i_0] [i_0] [i_0 - 1])))) ? ((-(var_16))) : (((((/* implicit */_Bool) 4028715390U)) ? (arr_5 [i_0] [i_0] [i_0 + 2]) : (((/* implicit */unsigned long long int) var_0))))));
            }
        } 
    } 
    var_20 |= ((/* implicit */signed char) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_8))));
}
