/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93864
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
    var_10 = ((/* implicit */long long int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)179)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_11 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29676)) ? (min(((-(var_3))), (((/* implicit */int) max(((short)-5311), (((/* implicit */short) arr_3 [i_0]))))))) : (((/* implicit */int) arr_3 [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_5)) : (min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1])))));
    }
    var_12 = ((/* implicit */unsigned short) (~(var_3)));
}
