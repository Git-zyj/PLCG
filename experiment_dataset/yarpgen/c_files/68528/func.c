/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68528
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [11LL] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) 11835173930589801634ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (18446744073709551605ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_14 = ((((((/* implicit */_Bool) arr_1 [i_1])) ? (6611570143119749982ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_1]))))));
        arr_7 [i_1] = ((/* implicit */int) (unsigned char)240);
    }
    var_15 = ((/* implicit */int) var_12);
}
