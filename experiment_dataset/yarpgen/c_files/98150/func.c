/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98150
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
    var_11 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */int) (short)13386)) <= (((/* implicit */int) (unsigned short)10114)))) ? (((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) (short)12742)))) : (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_0 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [(short)11])) : (((/* implicit */int) var_5)))) : (((((/* implicit */int) var_6)) / (((/* implicit */int) arr_0 [i_0]))))));
    }
    var_12 = ((/* implicit */unsigned char) ((1155086367U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)25589)))));
}
