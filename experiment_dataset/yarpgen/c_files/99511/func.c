/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99511
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
    var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)123))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_8))) - ((-((-(var_7)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (unsigned char)224))));
                arr_5 [i_1] [i_0] = ((min((5900603624901305392ULL), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1 + 1] [(short)4])))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 3] [i_0])) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (((/* implicit */int) (unsigned char)123))))) <= (arr_0 [i_1 + 2] [i_1]))))));
            }
        } 
    } 
}
