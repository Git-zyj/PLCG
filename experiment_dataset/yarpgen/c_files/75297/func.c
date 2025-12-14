/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75297
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
    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) var_6))));
    var_11 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_9))));
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)57015)) << (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-31178))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_13 = (+(((int) var_0)));
        arr_3 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-5474))));
        arr_4 [(unsigned char)10] |= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)57))));
        arr_5 [11U] = ((/* implicit */unsigned short) (~((+(var_1)))));
        arr_6 [i_0] [i_0 + 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2254191021997368893LL)) ? (((/* implicit */int) (unsigned short)8520)) : (((/* implicit */int) arr_1 [i_0 + 1]))));
    }
}
