/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81246
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
    for (short i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */int) var_1);
        var_13 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (((unsigned long long int) arr_0 [i_0 - 2] [i_0 + 2]))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                {
                    var_14 |= ((((/* implicit */_Bool) 4611686018427383808ULL)) ? (13835058055282167807ULL) : (14856907020937292800ULL));
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])), (16781119834373594394ULL)))))));
                }
            } 
        } 
    } 
}
