/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68054
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
    for (int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_1] [(unsigned short)3] = ((/* implicit */unsigned char) ((int) ((unsigned int) var_8)));
                var_11 += ((/* implicit */unsigned char) ((short) min((((unsigned short) var_7)), (((/* implicit */unsigned short) arr_2 [i_1 + 1] [i_0 + 1])))));
            }
        } 
    } 
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) min((max((((/* implicit */unsigned int) min((var_1), (((/* implicit */int) (unsigned short)15488))))), (min((var_10), (var_6))))), (((/* implicit */unsigned int) ((signed char) var_10))))))));
}
