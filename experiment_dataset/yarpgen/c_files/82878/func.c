/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82878
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
    var_12 = ((/* implicit */unsigned char) (+(var_7)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (_Bool)1);
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) ((arr_0 [i_0]) << (((arr_2 [i_0] [i_0]) + (755665326))))));
    }
    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
}
