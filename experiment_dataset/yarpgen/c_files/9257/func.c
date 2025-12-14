/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9257
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [(unsigned short)8] = ((8895648328920988313LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64546))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1918155709)) ? (((/* implicit */unsigned long long int) -1918155709)) : (13643364215711314546ULL)))) || (((/* implicit */_Bool) ((int) var_0)))));
        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_1)))) ? (var_10) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned short)28272)) : (((/* implicit */int) (unsigned short)980))))))))));
    }
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) min((((/* implicit */long long int) (short)(-32767 - 1))), (8089892841998554197LL))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((int) (unsigned short)63984))))) : (((long long int) var_7))));
    var_13 = ((/* implicit */unsigned short) var_3);
    var_14 = ((/* implicit */int) max((var_14), (((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) & (229376))))))) / (((((/* implicit */_Bool) min(((unsigned short)12543), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)28272)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)46316)) >= (((/* implicit */int) (_Bool)0)))))))))));
}
