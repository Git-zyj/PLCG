/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88338
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
    var_13 = ((/* implicit */unsigned long long int) (!((!(((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_8))))))));
    var_14 |= ((/* implicit */_Bool) ((int) (+(((/* implicit */int) var_5)))));
    var_15 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_16 |= ((/* implicit */short) (unsigned short)6);
        var_17 = ((/* implicit */unsigned long long int) ((unsigned char) (~(var_8))));
        var_18 &= ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [18U]))) : (var_9)))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) max(((~(var_11))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)1024))) >= (var_3))))));
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_19 = (~(((/* implicit */int) arr_0 [i_1])));
        var_20 ^= ((/* implicit */int) (~(arr_1 [i_1])));
        var_21 = max(((-(((/* implicit */int) var_1)))), (((/* implicit */int) arr_0 [i_1])));
    }
    for (short i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        var_22 += ((/* implicit */unsigned int) ((unsigned short) arr_4 [i_2]));
        var_23 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)26672)), (0U)))), (min((((/* implicit */unsigned long long int) ((int) arr_10 [i_2] [i_2]))), (arr_5 [i_2])))));
    }
}
