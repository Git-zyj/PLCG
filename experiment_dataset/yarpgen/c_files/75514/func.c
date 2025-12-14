/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75514
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
    var_12 = ((unsigned int) ((((/* implicit */_Bool) min(((unsigned short)52672), ((unsigned short)64612)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 650958103U)) || (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) var_7))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) / (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) max((var_0), ((unsigned char)48)))))))));
    var_14 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) | (((/* implicit */int) (unsigned char)233))))), (var_2))), (((((/* implicit */unsigned int) ((/* implicit */int) min((var_10), (var_1))))) ^ (max((((/* implicit */unsigned int) var_10)), (4294967295U)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned char) max((var_15), (var_0)));
                arr_4 [i_0] = ((/* implicit */unsigned short) arr_3 [i_0]);
                arr_5 [(unsigned short)6] [(unsigned short)4] [(unsigned short)6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)87))) * (4294967295U)));
            }
        } 
    } 
}
