/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56890
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
    var_20 = max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_15)))), (min((((/* implicit */int) (!(var_14)))), (max((((/* implicit */int) var_8)), (1310310824))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) ((long long int) (-(6276647099998986164LL))));
                    var_22 = ((/* implicit */long long int) arr_2 [i_1 + 2] [i_1 + 2]);
                    var_23 = (!((_Bool)1));
                }
            } 
        } 
        arr_8 [7U] = ((/* implicit */unsigned long long int) arr_5 [i_0]);
    }
    var_24 = ((/* implicit */unsigned long long int) (unsigned short)38944);
}
