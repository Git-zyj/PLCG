/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94425
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
    var_20 = ((/* implicit */signed char) var_18);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        arr_4 [i_0] [i_0 + 1] = ((/* implicit */int) (short)22941);
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (+(((/* implicit */int) var_13)))))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [(unsigned char)18])) ? (((/* implicit */int) arr_3 [10U] [12ULL])) : (((/* implicit */int) arr_3 [i_0 + 2] [(unsigned char)14]))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((signed char) arr_0 [i_0 - 1] [i_0]));
        arr_6 [i_0] = ((/* implicit */unsigned char) ((arr_2 [i_0 + 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))));
    }
    var_23 += ((/* implicit */unsigned char) var_0);
}
