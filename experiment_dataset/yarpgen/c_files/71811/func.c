/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71811
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) << (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) < (((806439973) ^ (806439973))))))));
                arr_6 [i_1] = ((/* implicit */unsigned short) (((~(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) && (((/* implicit */_Bool) arr_1 [i_0] [i_1]))))))) >= (max((((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_7))))), (((806439982) << (((((/* implicit */int) var_5)) - (46814)))))))));
                var_12 = ((/* implicit */short) max((((/* implicit */unsigned int) arr_1 [i_0] [i_1])), (min((arr_4 [9] [9] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) != (arr_1 [i_0] [i_1]))))))));
                arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_2 [i_0] [i_1])))))) - (((unsigned int) arr_4 [i_1] [i_1] [i_1]))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_4))));
}
