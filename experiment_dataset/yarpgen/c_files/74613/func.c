/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74613
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
    var_12 = ((/* implicit */signed char) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) / (var_3)));
        arr_3 [i_0] = ((/* implicit */short) (+(((5566978541765785630LL) ^ (((/* implicit */long long int) arr_0 [i_0]))))));
    }
    var_13 = ((/* implicit */_Bool) (+(var_7)));
}
