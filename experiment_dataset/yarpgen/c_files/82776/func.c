/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82776
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
    var_18 = ((((/* implicit */_Bool) max(((unsigned char)255), (((/* implicit */unsigned char) (signed char)21))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-16))))) : (var_4)))) : (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16))) / (var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_5))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
                arr_6 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) (-((+(((/* implicit */int) var_10)))))));
                arr_7 [i_0] = ((/* implicit */_Bool) (unsigned short)27907);
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) ((int) arr_2 [i_0] [i_0]));
                var_20 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-26)), (arr_4 [i_0] [5U] [i_0])))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) arr_4 [i_1 + 1] [i_1 - 2] [i_0])) : (134217724ULL)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) var_0))))));
    var_22 = ((/* implicit */long long int) var_10);
    var_23 = ((/* implicit */signed char) var_6);
}
