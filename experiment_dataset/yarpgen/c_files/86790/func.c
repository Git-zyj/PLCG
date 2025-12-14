/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86790
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
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 24; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */_Bool) var_6);
                var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1 - 3] [i_1 + 1])) ? (((unsigned long long int) arr_5 [i_1 - 3] [i_1 + 1])) : ((~(var_1))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-108)) | (((/* implicit */int) (signed char)64))));
}
