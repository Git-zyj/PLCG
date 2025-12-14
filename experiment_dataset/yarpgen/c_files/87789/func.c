/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87789
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
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((var_11) <= (((/* implicit */unsigned int) var_1)))))));
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_15))));
    var_21 = ((/* implicit */signed char) -3284303461176400757LL);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        arr_3 [(short)11] [i_0] = ((/* implicit */unsigned long long int) ((arr_2 [i_0 + 1] [11U]) && (arr_2 [i_0 - 1] [i_0])));
        /* LoopSeq 1 */
        for (int i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            arr_7 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) ((unsigned short) 134217728U));
            arr_8 [4ULL] = ((/* implicit */_Bool) (unsigned char)133);
            var_22 = ((/* implicit */unsigned char) arr_1 [i_0 + 1]);
        }
    }
    var_23 = ((/* implicit */unsigned char) ((unsigned long long int) var_4));
}
