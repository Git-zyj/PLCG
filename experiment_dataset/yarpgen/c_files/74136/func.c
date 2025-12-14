/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74136
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
    var_13 += ((/* implicit */int) var_8);
    var_14 = (~(min((max((((/* implicit */unsigned int) var_10)), (var_11))), (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (var_11))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) min((arr_0 [i_2]), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_5 [i_0] [i_1] [i_2])), (min((((/* implicit */int) var_1)), (var_4))))))));
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) || (((/* implicit */_Bool) min((var_10), (arr_5 [i_0] [i_1] [i_2]))))))), ((~(arr_0 [i_1])))))));
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (((-(((/* implicit */int) (signed char)-8)))) / (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))));
                }
            } 
        } 
    } 
}
