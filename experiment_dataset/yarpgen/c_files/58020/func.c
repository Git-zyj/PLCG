/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58020
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
    var_18 ^= (-(((/* implicit */int) ((unsigned char) ((var_0) << (((/* implicit */int) (unsigned char)4)))))));
    var_19 -= ((/* implicit */long long int) var_6);
    var_20 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) var_1)))) ^ ((-(((/* implicit */int) (unsigned char)4)))))) + (var_6)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        var_21 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((18446744073709551591ULL) + (18446744073709551591ULL))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0])) | (((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((int) arr_0 [i_0] [i_0])) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-102)), ((unsigned char)4))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_22 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) arr_5 [i_1])) : (arr_4 [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)32)) << (((arr_4 [i_1] [i_1]) - (5007017657154260698ULL))))))));
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_1] [i_1]), (arr_2 [i_1]))))) : (min((((arr_4 [i_1] [i_1]) >> (((var_6) + (286251224))))), (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1]))))));
    }
}
