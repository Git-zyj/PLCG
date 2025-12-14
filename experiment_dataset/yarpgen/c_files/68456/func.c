/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68456
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
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) min((((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (-4768757606959971054LL))))), ((+(2396365713U)))));
        arr_3 [i_0] = ((/* implicit */unsigned int) var_2);
        arr_4 [i_0 + 1] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned char) max((((/* implicit */unsigned int) arr_2 [i_0 - 1])), (40093811U)))));
        var_21 = ((/* implicit */unsigned char) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 2049600793U)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-4008)) : (((/* implicit */int) (short)-1016)))) : (((/* implicit */int) arr_2 [i_0])))))));
    }
    var_22 = var_5;
}
