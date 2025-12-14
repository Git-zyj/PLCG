/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79090
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_4))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_0 [(short)12]))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) min((max((((/* implicit */short) var_1)), (arr_1 [i_0]))), (((/* implicit */short) (signed char)126))));
        arr_3 [i_0] = arr_0 [i_0];
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) (((((~(((/* implicit */int) var_5)))) / (((/* implicit */int) (short)-13691)))) != (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1])) < (((/* implicit */int) arr_5 [i_1])))))));
        var_12 |= arr_4 [i_1];
        arr_7 [(unsigned char)2] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_5 [i_1]), (arr_5 [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1])))))));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((arr_4 [i_1]), (arr_0 [i_1]))), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)-126)) || (((/* implicit */_Bool) (signed char)-116)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))))) : (((/* implicit */int) (signed char)-123))));
        arr_8 [(unsigned char)1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (signed char)127)) > (((/* implicit */int) arr_1 [i_1]))))) == (((/* implicit */int) arr_0 [i_1]))));
    }
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (~(((((((/* implicit */int) var_1)) < (((/* implicit */int) (signed char)126)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_9))))))))))));
}
