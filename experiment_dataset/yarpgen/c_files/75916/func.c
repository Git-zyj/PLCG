/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75916
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
    var_16 ^= ((/* implicit */signed char) ((unsigned short) var_8));
    var_17 = ((/* implicit */short) var_7);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) ((signed char) arr_0 [i_0 + 1]));
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) arr_1 [i_0] [i_0 - 1]))));
    }
    for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 2; i_2 < 16; i_2 += 1) 
        {
            var_20 = ((/* implicit */long long int) arr_3 [i_1] [i_1]);
            var_21 = ((/* implicit */long long int) arr_4 [i_1]);
        }
        var_22 = ((/* implicit */short) ((long long int) ((short) ((signed char) (signed char)-79))));
    }
    var_23 = ((/* implicit */long long int) var_2);
}
