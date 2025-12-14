/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97522
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
    var_12 = ((/* implicit */signed char) min((((((/* implicit */int) var_2)) / (((/* implicit */int) ((unsigned short) var_8))))), (((/* implicit */int) ((((/* implicit */_Bool) min((var_6), (var_5)))) || (((/* implicit */_Bool) ((int) var_2))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] |= ((/* implicit */signed char) max((((unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_0 - 1])) + (((/* implicit */int) arr_1 [i_0] [i_0]))))), (((/* implicit */unsigned int) ((((var_8) / (((/* implicit */long long int) ((/* implicit */int) var_6))))) == (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0 + 1]))))))));
        arr_5 [i_0 + 1] = ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_1 [(signed char)5] [i_0 + 1])))), (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned short i_1 = 1; i_1 < 21; i_1 += 2) /* same iter space */
    {
        arr_9 [(short)15] |= ((/* implicit */signed char) arr_3 [i_1 - 1] [i_1 - 1]);
        var_13 ^= (unsigned short)34542;
    }
    for (unsigned short i_2 = 1; i_2 < 21; i_2 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) ((unsigned short) arr_13 [i_2] [i_2 + 1]))) * (((/* implicit */int) ((arr_11 [i_2]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2 + 1] [i_2 + 1])))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2] [i_2 - 1])) || (((/* implicit */_Bool) arr_0 [i_2 - 1] [i_2 - 1])))))));
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) ((short) var_4))) % (((/* implicit */int) arr_6 [i_2 + 1])))))));
        var_16 *= arr_6 [i_2 + 1];
    }
}
