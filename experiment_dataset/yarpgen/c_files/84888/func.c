/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84888
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
    var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)40499)) && (((/* implicit */_Bool) 8699606768181791164ULL)))) ? (((/* implicit */int) var_18)) : (min((var_17), (((/* implicit */int) (!(((/* implicit */_Bool) (short)29890)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)15773)) << (((((/* implicit */int) (short)32746)) - (32732)))))) ^ (arr_5 [i_1 - 1] [i_0]))), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_0]))));
                arr_6 [(_Bool)1] [i_0] [(_Bool)1] &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)29890))) | ((~(min((2030904695153456679ULL), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1 + 1] [i_0]))))))));
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_1 - 1] [i_1]) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0])))))), (arr_5 [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 2]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))) % (arr_5 [i_0] [i_1])))))));
                arr_7 [i_0] = ((/* implicit */int) (-((+(((unsigned int) var_5))))));
            }
        } 
    } 
    var_22 |= ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))))))), (var_5)));
    var_23 = min((((/* implicit */unsigned int) var_13)), (max((((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) (short)32737))))), (((/* implicit */unsigned int) min((((/* implicit */int) (short)-32739)), (175357603)))))));
}
