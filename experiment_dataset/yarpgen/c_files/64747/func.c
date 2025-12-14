/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64747
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
    var_20 += ((/* implicit */signed char) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [(short)14] [i_1] [(short)14] = ((/* implicit */unsigned char) 1896368401);
                var_21 *= ((/* implicit */signed char) (-(max(((((_Bool)1) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))), (var_8)))));
                arr_7 [(_Bool)1] = ((/* implicit */signed char) (_Bool)1);
            }
        } 
    } 
}
