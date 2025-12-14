/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76532
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
    var_13 = ((/* implicit */short) var_6);
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned char) arr_1 [9ULL]);
        arr_5 [i_0] = ((((/* implicit */_Bool) ((((arr_0 [i_0] [i_0]) + (9223372036854775807LL))) >> (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */short) ((unsigned char) var_6));
        arr_9 [i_1] = ((/* implicit */_Bool) var_8);
    }
}
