/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85919
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_17 -= ((short) (+(18446744073709551609ULL)));
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 3) 
    {
        var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((var_10) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_3 = 2; i_3 < 13; i_3 += 3) 
            {
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) arr_6 [i_1 - 1]))));
                var_20 -= ((arr_1 [i_3]) % (var_3));
                var_21 = ((/* implicit */unsigned long long int) ((((long long int) arr_3 [i_2])) * (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_1 + 2])))));
                arr_11 [i_3] [i_3] [i_3 - 1] = ((/* implicit */int) ((unsigned short) var_3));
                var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_2])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (var_1) : (((/* implicit */unsigned int) var_13))));
            }
            arr_12 [i_1] = arr_3 [i_1 + 2];
        }
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_1] [i_1] [i_1 + 1] [i_1])) >> (((/* implicit */int) arr_9 [i_1] [i_1 + 1] [i_1 + 2] [i_1]))));
    }
    var_24 = ((/* implicit */long long int) (_Bool)1);
}
