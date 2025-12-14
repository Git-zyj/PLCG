/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76268
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_10 = ((/* implicit */long long int) (short)8750);
        var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((((/* implicit */int) arr_1 [11LL])) < (((/* implicit */int) (short)-8751))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [4U])) : (((/* implicit */int) (short)-8751))))) ? ((-(((/* implicit */int) (unsigned char)16)))) : (((/* implicit */int) (unsigned short)51855))))));
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) var_7))));
        var_13 = ((/* implicit */long long int) (+(((int) arr_1 [i_0]))));
        arr_2 [i_0] [(signed char)10] = ((/* implicit */unsigned short) min(((short)15457), (((/* implicit */short) ((((2615372483U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) <= (((((/* implicit */_Bool) -4518042354099367085LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)98))) : (1048630037U))))))));
    }
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_8))));
    /* LoopSeq 1 */
    for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_3 [i_1] [i_1])))) ? (arr_3 [i_1] [i_1]) : (((/* implicit */long long int) arr_4 [(short)1] [i_1]))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_1])))) : (((/* implicit */int) (short)5766))));
        var_15 += (((+(max((var_2), (((/* implicit */unsigned int) (signed char)-118)))))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))));
    }
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30467)) ? (((/* implicit */int) (unsigned short)30477)) : (((/* implicit */int) (signed char)98))))) ? (((/* implicit */int) (short)-8750)) : (((/* implicit */int) var_4))));
}
