/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55682
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
    var_16 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) arr_0 [i_0]);
        var_18 -= ((/* implicit */_Bool) arr_3 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_19 += ((/* implicit */int) arr_5 [i_1]);
        var_20 = ((/* implicit */int) arr_5 [i_1]);
    }
    for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        arr_9 [(unsigned short)6] &= (!(((/* implicit */_Bool) (-(arr_7 [i_2])))));
        var_21 += ((/* implicit */unsigned char) min((((/* implicit */long long int) var_13)), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_6 [i_2])), ((unsigned short)0)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_5))))) : (min((arr_8 [i_2] [i_2]), (((/* implicit */long long int) var_1))))))));
    }
}
