/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8972
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned short) var_8)), ((unsigned short)3802))));
                arr_7 [(unsigned short)4] [i_1] = ((/* implicit */_Bool) ((unsigned short) ((unsigned short) arr_5 [(_Bool)1] [i_0 + 1] [i_0 + 1])));
                var_10 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)2474))));
            }
        } 
    } 
    var_11 += ((unsigned short) (unsigned short)25428);
}
