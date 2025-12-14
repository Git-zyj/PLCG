/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59087
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
    /* vectorizable */
    for (short i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0 - 2] [10U])) ? (((/* implicit */int) ((short) arr_3 [i_0] [i_1] [i_1]))) : (((/* implicit */int) (unsigned char)105))));
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (~(var_12)));
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (arr_2 [i_0 + 3] [i_0 + 4] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
        }
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((var_1) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))))))))));
        var_22 = ((/* implicit */_Bool) var_5);
    }
    var_23 = ((/* implicit */int) 348854649U);
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) > (3712270922U)));
}
