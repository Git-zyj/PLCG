/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77729
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
    var_14 = ((/* implicit */unsigned char) var_6);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0 + 1] |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_0 + 4]))));
        arr_3 [(short)13] = ((/* implicit */unsigned short) (short)-25630);
        arr_4 [i_0 - 4] [i_0] |= ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) (short)25627)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (2354642815176171345LL))), (((/* implicit */long long int) min((arr_1 [i_0]), (((/* implicit */int) var_11))))))), (((/* implicit */long long int) var_6))));
        arr_5 [i_0] = ((/* implicit */int) (_Bool)1);
    }
    /* LoopSeq 1 */
    for (int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) (((!(arr_6 [i_1]))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)52)) * ((-(((/* implicit */int) var_6)))))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (-(-1741948091)))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)21171)), (1893458893U)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_1])), (var_11))))) : (-2354642815176171340LL)))));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */_Bool) (short)-3197)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (min((-1434982145), (((/* implicit */int) arr_6 [i_1]))))));
        var_16 ^= ((/* implicit */short) max((((/* implicit */int) var_6)), ((+(((/* implicit */int) (unsigned char)204))))));
    }
}
