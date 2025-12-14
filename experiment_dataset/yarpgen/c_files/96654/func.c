/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96654
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) (short)30590))) | (((((/* implicit */int) ((unsigned short) (short)22130))) << ((((+(((/* implicit */int) (unsigned short)29003)))) - (28997)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_18 += ((/* implicit */unsigned short) var_16);
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) min((((/* implicit */int) arr_1 [(unsigned short)8])), (((((/* implicit */int) arr_1 [(unsigned short)2])) % (((/* implicit */int) arr_0 [(short)0] [i_0 + 1])))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
    }
    var_20 = ((/* implicit */unsigned int) var_13);
}
