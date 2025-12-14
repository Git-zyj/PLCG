/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94174
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
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((unsigned short) (-(var_11)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0 - 2] |= ((/* implicit */unsigned short) ((unsigned long long int) ((int) var_6)));
        var_17 |= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) max((((unsigned short) var_14)), (((/* implicit */unsigned short) (signed char)69)))))) == (((long long int) (!(((/* implicit */_Bool) var_0)))))));
    }
    var_18 |= ((/* implicit */unsigned char) var_11);
}
