/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92944
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) ((unsigned char) ((18446744073709551599ULL) + (15ULL)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2 + 1] [i_1] [i_0] |= ((/* implicit */unsigned long long int) arr_4 [i_2] [i_0] [i_0]);
                    var_15 = ((/* implicit */unsigned short) var_1);
                }
            } 
        } 
    } 
}
