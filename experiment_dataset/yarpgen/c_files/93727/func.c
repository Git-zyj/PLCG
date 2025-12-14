/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93727
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)4])) ? ((-(var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))));
        arr_3 [0LL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) (short)-18529))) | (8494334064767717775LL))))))));
        arr_4 [i_0] = ((unsigned char) max((arr_1 [i_0] [i_0 + 1]), (arr_1 [i_0] [i_0 + 1])));
        arr_5 [(unsigned short)10] = ((/* implicit */_Bool) (+((~(((/* implicit */int) arr_0 [16ULL]))))));
        arr_6 [14LL] = ((/* implicit */long long int) arr_0 [(unsigned short)2]);
    }
    var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) ((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
    var_18 = ((/* implicit */unsigned int) ((short) ((unsigned long long int) var_4)));
}
