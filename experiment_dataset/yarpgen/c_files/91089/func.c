/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91089
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
    var_11 |= ((/* implicit */unsigned int) ((max((1U), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-8181)) & (((/* implicit */int) (signed char)-18))))))) > (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))))))));
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) var_9))));
    var_13 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_7 [i_0 - 2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) arr_5 [i_2]);
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) max((((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_0 + 1] [i_0]))))), (((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_5 [i_1]), (var_8))))))))))));
                    arr_8 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8180)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_1]))))) ? ((-(((/* implicit */int) (short)-8162)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1])))))));
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_10))));
                }
            } 
        } 
    } 
}
