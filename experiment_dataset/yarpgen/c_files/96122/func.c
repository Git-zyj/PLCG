/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96122
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_11 = ((unsigned short) (-(var_8)));
            var_12 += ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)255))));
        }
        arr_7 [i_0] = ((/* implicit */int) ((long long int) -1));
    }
    var_13 = ((/* implicit */unsigned short) var_6);
}
