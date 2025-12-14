/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85748
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
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) min((((((/* implicit */_Bool) ((unsigned short) var_14))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_11))), (var_10))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_21 += ((/* implicit */unsigned char) arr_0 [i_0]);
        arr_2 [(short)0] = ((/* implicit */unsigned long long int) var_8);
        var_22 = ((/* implicit */unsigned long long int) var_6);
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_1 [i_0 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39293))))))));
    }
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (var_10) : (var_19))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_12))))))))) ? (((((var_13) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255))))))) : (((((/* implicit */_Bool) var_19)) ? (min((var_1), (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_13) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned char) (unsigned short)54011);
        var_26 += ((/* implicit */unsigned short) arr_3 [i_1] [(short)6]);
    }
    for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) min((var_0), (((((/* implicit */_Bool) (unsigned short)54006)) ? (arr_5 [i_2 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39293))))))))));
        var_28 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_3)) ? (min((10752716974724908911ULL), (10752716974724908928ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))));
        arr_7 [i_2] = ((/* implicit */unsigned short) ((1544094750759747428ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)146)))));
    }
}
