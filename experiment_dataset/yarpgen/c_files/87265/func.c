/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87265
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
    var_12 = ((/* implicit */long long int) var_4);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        arr_4 [i_0 + 1] |= ((/* implicit */short) max((-22), (((/* implicit */int) (unsigned char)95))));
        var_13 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_5)) ? ((-(((/* implicit */int) var_11)))) : (((((/* implicit */int) var_6)) + (((/* implicit */int) var_3)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [(short)22])) : (((/* implicit */int) var_10))))) ? (((arr_3 [i_0]) + (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_2 [i_0 + 2]))))));
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (-(((((/* implicit */_Bool) ((arr_3 [i_0]) & (arr_3 [i_0])))) ? (((/* implicit */unsigned int) arr_3 [i_0 + 2])) : (arr_1 [i_0 + 4] [i_0 + 4]))))))));
        var_15 |= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((var_7), (arr_0 [i_0 - 1])))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned char) arr_2 [i_0])))))) : (arr_1 [i_0 + 2] [i_0 + 3])))));
    }
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_4)))) ? ((~(((/* implicit */int) (short)16320)))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-1760239536)))));
}
