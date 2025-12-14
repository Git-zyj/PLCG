/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94836
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
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            {
                var_13 *= ((/* implicit */int) (!(((/* implicit */_Bool) (+((~(3847255795435770812LL))))))));
                arr_5 [i_0] [i_0] [7LL] = ((/* implicit */_Bool) min(((~(((/* implicit */int) var_6)))), (max((arr_4 [i_1 - 1] [i_1] [i_1]), (arr_4 [i_1 - 1] [i_1 + 1] [i_1])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) >> (((arr_6 [i_2]) - (5180244437413943730ULL))))))));
        var_14 ^= ((/* implicit */short) arr_9 [16U]);
    }
}
