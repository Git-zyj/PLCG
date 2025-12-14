/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8995
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((int) ((unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) min(((short)28747), (((/* implicit */short) arr_1 [i_0] [i_0]))))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 547804159U)) : (arr_0 [i_0] [i_0])))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0] [i_0])))))) : (((unsigned long long int) arr_1 [i_0] [i_0]))));
    }
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) var_18))));
}
