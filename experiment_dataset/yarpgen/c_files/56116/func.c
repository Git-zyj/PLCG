/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56116
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
    var_15 -= ((/* implicit */unsigned char) max((max(((short)19548), (((/* implicit */short) (unsigned char)240)))), (var_13)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((unsigned char) arr_0 [i_0] [i_0]);
                arr_5 [i_0] [i_0] [i_0] = arr_3 [i_0] [i_0] [i_0];
            }
        } 
    } 
}
