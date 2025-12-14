/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65095
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
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((_Bool) var_12));
        var_14 = ((/* implicit */short) arr_0 [i_0] [i_0]);
        var_15 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_0 [i_0] [i_0 - 2])) & (((long long int) arr_0 [i_0] [i_0 + 1]))));
        arr_3 [i_0] &= ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned long long int) ((short) arr_0 [i_0] [i_0 - 2]))), (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_0)))))));
    }
    for (int i_1 = 3; i_1 < 9; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) arr_0 [i_1] [i_1]);
        arr_8 [i_1] [i_1 - 2] = ((/* implicit */_Bool) arr_4 [i_1] [i_1]);
        var_16 ^= ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned short)15] [i_1]))));
        arr_9 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_0 [i_1 + 2] [i_1 + 2]), (arr_0 [i_1 + 2] [i_1 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 1]))) : (min((arr_4 [i_1 - 2] [i_1]), (arr_4 [i_1 - 1] [i_1 - 3])))));
        var_17 = ((/* implicit */unsigned int) arr_0 [i_1 - 1] [i_1]);
    }
    for (int i_2 = 3; i_2 < 9; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_3 = 2; i_3 < 9; i_3 += 1) 
        {
            var_18 += ((unsigned short) 89309727U);
            var_19 = ((/* implicit */unsigned short) arr_1 [i_3]);
        }
        arr_14 [i_2] [i_2] = ((/* implicit */int) ((long long int) min((((/* implicit */long long int) arr_0 [i_2] [i_2 + 2])), (arr_11 [i_2] [i_2 + 1]))));
    }
    var_20 = var_9;
}
