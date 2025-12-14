/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76869
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) & (((/* implicit */int) min((((/* implicit */unsigned short) var_17)), (arr_1 [i_0] [i_0])))))) : (((((/* implicit */_Bool) (unsigned short)30368)) ? (((/* implicit */int) arr_3 [(unsigned char)1] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) 4294967295U);
        var_20 -= var_13;
    }
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_14))) ? (((/* implicit */int) (unsigned short)35183)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) var_10))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13)))))));
    var_22 = ((unsigned int) var_14);
    var_23 &= var_4;
    var_24 = ((/* implicit */unsigned int) var_4);
}
