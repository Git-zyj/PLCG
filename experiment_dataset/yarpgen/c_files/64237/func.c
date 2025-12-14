/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64237
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_2 [i_0] [i_1] [i_1]) >= (((/* implicit */long long int) -2105658335)))))));
                arr_5 [i_1] = ((/* implicit */short) (unsigned char)151);
                var_14 += ((/* implicit */_Bool) (unsigned char)225);
            }
        } 
    } 
    var_15 = ((/* implicit */short) var_5);
}
