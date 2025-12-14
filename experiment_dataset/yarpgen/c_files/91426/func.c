/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91426
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
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (arr_1 [i_0]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
        arr_3 [i_0] = ((/* implicit */int) (-(arr_0 [i_0])));
        arr_4 [i_0] [i_0] = 751602187;
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */int) var_4);
        arr_8 [i_1] = ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)127)), (arr_5 [i_1] [i_1])))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1])))));
        arr_9 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(var_2)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (51874253968468522ULL))) : (((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)90)) : (((/* implicit */int) (short)1023)))))));
    }
    var_10 = var_2;
    var_11 = ((/* implicit */signed char) max((var_7), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))))))));
}
