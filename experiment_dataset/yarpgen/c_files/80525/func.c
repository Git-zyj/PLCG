/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80525
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
    var_15 = ((/* implicit */signed char) ((unsigned char) var_12));
    var_16 = ((/* implicit */unsigned short) var_11);
    var_17 = var_14;
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_4 [(unsigned short)8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [8])) / (((/* implicit */int) (unsigned short)9318))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(short)8] [(short)8]))))) : (((((/* implicit */int) arr_2 [i_0] [(unsigned short)6])) / (((/* implicit */int) arr_2 [i_0] [0ULL]))))));
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            arr_7 [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 1] [i_0]))) : (arr_5 [(signed char)3] [i_1 + 2] [i_1 + 3])))));
            arr_8 [i_0] [4] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_0])) <= ((-(((/* implicit */int) ((((/* implicit */int) (unsigned short)56218)) <= (var_12))))))));
        }
    }
}
