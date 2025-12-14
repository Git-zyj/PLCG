/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93628
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
    var_10 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_4))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32740))) / (4749970881128329076ULL)))))) || (arr_1 [i_0])));
        var_12 = ((/* implicit */unsigned long long int) var_9);
        var_13 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_0])), (min((var_8), (((/* implicit */unsigned int) arr_0 [i_0])))))))));
        arr_2 [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) var_6)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1]))))), (((/* implicit */long long int) (unsigned char)255))));
    }
}
