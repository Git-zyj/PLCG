/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88309
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
    var_18 = ((/* implicit */long long int) (+(((/* implicit */int) var_13))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        var_19 = ((/* implicit */short) (+((~(arr_1 [i_0 + 1])))));
        arr_2 [i_0] [i_0 - 2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((short) ((long long int) arr_1 [i_0])))), (22U)));
    }
    var_20 = ((/* implicit */long long int) var_16);
    var_21 = ((/* implicit */unsigned char) (short)-6715);
}
