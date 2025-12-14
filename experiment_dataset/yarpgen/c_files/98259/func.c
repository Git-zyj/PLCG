/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98259
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
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [1U]))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        var_18 = ((/* implicit */signed char) (-(arr_1 [i_0])));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))));
    }
    for (int i_1 = 1; i_1 < 9; i_1 += 2) 
    {
        var_20 = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_1 [(unsigned short)10]))))))), (max(((~(arr_0 [i_1]))), (((/* implicit */long long int) arr_4 [i_1 - 1] [i_1]))))));
        arr_5 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1 + 1] [i_1])) + (((/* implicit */int) arr_4 [i_1 + 1] [i_1]))))) ? (((arr_3 [i_1 + 1]) / (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1])))) : (((((/* implicit */int) arr_4 [i_1 + 1] [i_1])) / (((/* implicit */int) arr_4 [i_1 - 1] [i_1]))))));
        var_21 = ((/* implicit */unsigned char) (-(((((((/* implicit */long long int) arr_3 [i_1])) / (arr_0 [(unsigned char)4]))) / (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1] [i_1 - 1])) / (((/* implicit */int) arr_4 [i_1] [i_1])))))))));
    }
    var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-16))))))))));
}
