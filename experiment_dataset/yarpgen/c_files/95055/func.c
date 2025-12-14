/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95055
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
    for (short i_0 = 2; i_0 < 9; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) (+(((3590757312U) % (1118051655U)))));
        arr_2 [i_0 - 1] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) var_14)) + (10216061293223241891ULL))) | (((/* implicit */unsigned long long int) arr_1 [i_0 - 1]))));
    }
    for (short i_1 = 2; i_1 < 9; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_1 [i_1 - 2]), (arr_1 [i_1 - 2])))) ? (max((arr_1 [i_1 - 2]), (arr_1 [i_1 - 2]))) : ((+(arr_1 [i_1 - 2])))));
        var_18 = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_4 [i_1 + 3])) >> ((((-(((/* implicit */int) var_11)))) + (159)))))));
    }
    var_19 = ((/* implicit */int) var_1);
}
