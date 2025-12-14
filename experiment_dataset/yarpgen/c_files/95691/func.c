/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95691
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_4 [i_0] |= ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_5 [i_0] = ((/* implicit */short) max((arr_2 [(short)12] [(short)12]), (((/* implicit */unsigned short) max((((/* implicit */short) arr_0 [i_0] [i_0])), (((short) 16380)))))));
        var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) (unsigned short)42165))));
        var_12 -= ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
    }
    for (unsigned short i_1 = 1; i_1 < 19; i_1 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) arr_6 [i_1] [i_1]);
        arr_9 [i_1] = ((/* implicit */unsigned char) arr_7 [i_1]);
    }
    var_14 ^= ((/* implicit */unsigned long long int) (~(var_2)));
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (+((~(var_1))))))));
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((unsigned int) ((unsigned short) var_7))))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) > (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))) > ((~(((/* implicit */int) var_3)))))))));
}
