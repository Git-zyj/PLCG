/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86021
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
    var_18 = ((/* implicit */unsigned char) (((+(var_14))) * (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_5))) * (((/* implicit */int) ((signed char) var_8))))))));
    var_19 |= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)224)) * (((/* implicit */int) (unsigned short)42922))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))) : (arr_2 [i_1]))));
                var_20 = ((/* implicit */signed char) ((min((((/* implicit */long long int) arr_4 [(short)7] [(unsigned char)7] [i_1])), (min((((/* implicit */long long int) var_11)), (92475624882266175LL))))) * (((/* implicit */long long int) max((var_17), (((/* implicit */unsigned int) (unsigned short)42933)))))));
                var_21 = ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_22 = ((/* implicit */short) var_1);
    var_23 = ((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22615))) * (((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))));
}
