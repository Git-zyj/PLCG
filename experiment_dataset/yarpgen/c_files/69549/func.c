/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69549
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1])))), (((((/* implicit */_Bool) (short)-28172)) ? (((8705024097878171145ULL) / (((/* implicit */unsigned long long int) 797059650)))) : (((/* implicit */unsigned long long int) (-(4141521484U))))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 797059650)) ? (((unsigned int) arr_1 [i_0 - 1])) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1])))))));
        arr_2 [i_0] = ((((/* implicit */_Bool) 887901260)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */short) (signed char)93)), (var_8))))))) : (var_7));
        var_16 = ((/* implicit */signed char) var_11);
    }
    /* LoopSeq 1 */
    for (signed char i_1 = 1; i_1 < 7; i_1 += 2) 
    {
        var_17 |= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) max((var_12), (arr_3 [2ULL])))) ? (((/* implicit */int) ((signed char) arr_1 [i_1]))) : (((/* implicit */int) max((var_13), ((short)19714)))))));
        arr_5 [i_1] = ((/* implicit */unsigned short) arr_3 [i_1]);
    }
    var_18 = ((/* implicit */int) var_13);
}
