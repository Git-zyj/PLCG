/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95940
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
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */signed char) ((unsigned short) arr_0 [i_1 - 2]));
            var_10 = ((/* implicit */unsigned short) ((arr_2 [i_0 + 3] [i_1 - 1]) ? (1587028924918247498ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
        }
        arr_6 [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) arr_1 [i_0 + 2]))));
    }
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) var_1))));
}
