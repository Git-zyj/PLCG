/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78374
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
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (254824782U) : (((/* implicit */unsigned int) arr_0 [i_0 + 2] [i_0 + 2])))) < (((/* implicit */unsigned int) 838041013))))) - ((-(((((/* implicit */int) (signed char)36)) - (((/* implicit */int) var_9))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) var_7);
        arr_4 [i_0] = ((/* implicit */_Bool) (~(min((arr_0 [i_0 - 1] [12LL]), (arr_0 [i_0 - 1] [i_0 - 1])))));
    }
    var_12 = ((/* implicit */unsigned int) var_5);
}
