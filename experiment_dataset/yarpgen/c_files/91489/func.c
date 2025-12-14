/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91489
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
    for (int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) var_4);
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 67108863ULL)) ? (var_12) : (((/* implicit */int) var_1))))));
            }
        } 
    } 
    var_18 = var_6;
}
