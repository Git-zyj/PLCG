/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59334
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
    var_17 = ((/* implicit */_Bool) var_2);
    var_18 = ((/* implicit */long long int) (short)26493);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) (short)5943));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (short)-5943)), (-453227586)))) ? ((+(var_3))) : (((/* implicit */unsigned long long int) ((var_8) % (arr_0 [i_0] [i_0]))))));
    }
    for (signed char i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        var_20 = var_4;
        arr_5 [i_1] [i_1] = ((/* implicit */int) var_15);
        arr_6 [1] [1] = arr_4 [i_1] [i_1];
        arr_7 [2LL] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)5943))) % (1455947594U)));
    }
}
