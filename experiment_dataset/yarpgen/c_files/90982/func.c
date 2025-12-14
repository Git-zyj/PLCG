/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90982
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
    var_11 = ((/* implicit */int) var_4);
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) var_3))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)32755)) : (((/* implicit */int) (short)-32764))))) && ((!(((/* implicit */_Bool) arr_2 [10])))))))));
        var_14 = ((/* implicit */unsigned short) (-(arr_1 [i_0])));
        arr_3 [i_0 + 1] [i_0] = ((/* implicit */unsigned short) min(((-(arr_1 [i_0]))), (((/* implicit */unsigned int) var_0))));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) arr_0 [i_0 + 1] [i_0 - 1]))));
        var_16 ^= ((/* implicit */_Bool) (unsigned short)57723);
    }
    var_17 = ((/* implicit */_Bool) ((int) (short)-32761));
}
