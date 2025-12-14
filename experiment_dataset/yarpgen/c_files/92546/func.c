/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92546
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_1 [i_0]))) ? (((/* implicit */int) ((arr_1 [i_0]) < (arr_1 [i_0])))) : ((+(-1)))));
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */short) max((arr_2 [i_1 + 1]), (((/* implicit */unsigned long long int) ((-16) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */short) max((((((/* implicit */int) var_3)) - (((/* implicit */int) var_4)))), (((/* implicit */int) arr_3 [i_1] [i_1]))));
            }
        } 
    } 
    var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 817713921)) ? (((((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_4))))) * (((/* implicit */int) max((var_4), (((/* implicit */unsigned char) var_13))))))) : (((/* implicit */int) var_11))));
}
