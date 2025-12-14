/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79175
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
    for (long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        arr_4 [i_0 + 2] = (unsigned char)240;
        arr_5 [i_0] = var_4;
        arr_6 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_2 [i_0 + 3])) & (((/* implicit */int) arr_2 [i_0 + 2])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 1])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        arr_10 [13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1]))) : (arr_3 [i_1])))) ? ((-(((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_0))))))) : ((+((+(((/* implicit */int) var_4))))))));
        arr_11 [i_1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (short)-4706)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)27))) : (1222919193U))), (min((4294967268U), (((/* implicit */unsigned int) min((var_6), (((/* implicit */unsigned short) arr_0 [i_1] [i_1])))))))));
        var_10 = var_7;
    }
    var_11 = ((/* implicit */long long int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_6))));
    var_12 = ((/* implicit */long long int) var_0);
}
