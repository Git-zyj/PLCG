/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65154
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
    var_10 = ((/* implicit */unsigned char) var_7);
    var_11 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_12 ^= ((/* implicit */int) ((signed char) max((((((/* implicit */_Bool) (unsigned short)18178)) ? (((/* implicit */int) (unsigned char)255)) : (608263181))), (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)18189)))))));
        var_13 = ((/* implicit */signed char) (-(max(((+(((/* implicit */int) var_3)))), (((/* implicit */int) (unsigned char)97))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [7U])) : (((/* implicit */int) arr_2 [i_0] [i_0])))))), ((-(((/* implicit */int) var_4))))));
        var_14 = ((((((/* implicit */_Bool) 2636786929U)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])))) | (((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_0] [i_0])))));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(3720324717U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((unsigned int) (unsigned char)156))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)132))) & (6694610499773106566LL)))) ? (503316480) : (((((/* implicit */int) (unsigned short)30632)) | (((/* implicit */int) var_9)))))) : (((/* implicit */int) var_7))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 909734207530632018ULL)) ? (arr_0 [i_1]) : (arr_0 [i_1]))))));
        var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [5LL]) : (arr_0 [i_1])));
        arr_8 [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 189489353)) : (4213361945860930080ULL)))));
    }
}
