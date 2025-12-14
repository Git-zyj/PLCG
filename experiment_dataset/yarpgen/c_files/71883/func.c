/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71883
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_15 -= ((/* implicit */_Bool) ((int) 720449651));
        var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_4))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) (unsigned char)60);
    }
    for (unsigned short i_1 = 2; i_1 < 19; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) max((arr_5 [i_1 - 1]), (((/* implicit */unsigned char) var_10))));
        var_18 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)88)) >> (((((/* implicit */int) (short)-1)) + (31))))))));
        var_19 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)38702))));
        var_20 = ((/* implicit */unsigned char) arr_4 [i_1 + 2]);
        var_21 = ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)38705)), ((~(((/* implicit */int) ((_Bool) arr_4 [i_1])))))));
    }
    var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)196)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)38303)))))))));
}
