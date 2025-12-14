/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66841
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        arr_3 [(unsigned short)13] = ((/* implicit */unsigned int) ((((/* implicit */long long int) 8388607U)) != (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8388607U)))))) : (var_15)))));
        var_16 = ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) 8388607U)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (var_14))) : (((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_15))) ? (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) ((((/* implicit */int) var_8)) >= (arr_1 [i_1]))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (short)0)) > (arr_1 [i_1]))))))) : (((unsigned long long int) arr_6 [i_1] [i_1]))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) var_12);
        arr_8 [i_1] = min((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1]))))), (((((/* implicit */_Bool) var_8)) ? (arr_6 [i_1] [i_1]) : (((/* implicit */int) arr_2 [i_1] [i_1])))));
        var_18 ^= ((/* implicit */unsigned long long int) var_8);
    }
    var_19 = ((/* implicit */short) (-(((/* implicit */int) (short)0))));
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)0))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)45722))) >= (((((/* implicit */_Bool) (short)-3)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
}
