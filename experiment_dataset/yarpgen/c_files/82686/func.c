/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82686
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
    var_20 = ((/* implicit */unsigned int) (!(min(((!(((/* implicit */_Bool) var_17)))), (((((/* implicit */int) (signed char)116)) < (((/* implicit */int) var_9))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_21 = ((/* implicit */signed char) -1642687664);
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (+(var_5)));
    }
    for (unsigned char i_1 = 2; i_1 < 18; i_1 += 2) 
    {
        arr_6 [i_1] &= ((/* implicit */unsigned int) (-(((arr_4 [i_1 - 2]) / (arr_4 [i_1 - 2])))));
        var_22 = ((/* implicit */int) min((var_22), (((1479986423) % (((/* implicit */int) (unsigned char)99))))));
    }
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) arr_7 [i_2] [i_2]);
        var_24 = ((/* implicit */unsigned int) max((min((((/* implicit */int) (unsigned char)48)), (arr_4 [i_2]))), (max((arr_4 [i_2]), (((/* implicit */int) var_14))))));
    }
    var_25 = ((/* implicit */unsigned char) var_15);
    var_26 = ((/* implicit */unsigned int) var_16);
    var_27 = ((/* implicit */unsigned char) min((1002580886U), (((/* implicit */unsigned int) (signed char)110))));
}
