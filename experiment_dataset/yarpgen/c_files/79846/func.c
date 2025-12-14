/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79846
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
    var_13 = ((/* implicit */signed char) var_3);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) ((short) ((((/* implicit */int) var_10)) - (((((/* implicit */int) arr_1 [i_0] [i_1])) | (((/* implicit */int) arr_3 [i_0] [i_0])))))));
                arr_5 [i_0] [i_1] [(unsigned char)6] = ((/* implicit */_Bool) arr_2 [i_0 - 1]);
                var_15 = ((/* implicit */unsigned short) 5503283237012449161LL);
                var_16 ^= var_8;
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_3 [i_0 - 3] [i_1]))));
            }
        } 
    } 
}
