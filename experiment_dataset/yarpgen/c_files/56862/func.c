/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56862
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
    var_12 -= (!(((/* implicit */_Bool) var_9)));
    var_13 = ((/* implicit */unsigned char) var_10);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        var_15 -= ((/* implicit */unsigned char) var_1);
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_1] [i_1]))))))));
        var_17 = ((/* implicit */unsigned int) (~(min((arr_0 [i_1]), (arr_3 [i_1] [i_1])))));
        var_18 += ((unsigned short) ((short) 12643882576243213250ULL));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) 1565639187991731918ULL))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (arr_3 [i_2] [i_2]) : (arr_3 [i_2] [i_2]))))));
    }
    var_21 = var_8;
}
