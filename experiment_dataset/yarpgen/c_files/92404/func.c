/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92404
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = (+((-(((/* implicit */int) (unsigned short)0)))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (short)11024)) >> (((((/* implicit */int) arr_1 [i_0] [i_0])) - (146)))))))) - (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))) & (14793782011720960308ULL))) << (0LL)))));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (unsigned short)50226))));
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_0 [i_1])) ? (87479651) : (((/* implicit */int) arr_0 [i_1]))))));
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) var_15))))))))))));
        var_23 = ((/* implicit */unsigned short) 2147483647);
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) -87479652);
    }
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) var_0))))))) ? (var_14) : (((/* implicit */unsigned int) min((87479651), (87479638))))));
    var_25 = ((((/* implicit */_Bool) 87479651)) ? (-87479651) : (87479634));
    var_26 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_15)) : (-87479632))) : (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) -87479650)) ? (((/* implicit */int) (unsigned short)11083)) : (((/* implicit */int) (_Bool)1))))));
    var_27 = ((/* implicit */unsigned short) min((((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (short)32767)), ((-2147483647 - 1))))) || ((!(((/* implicit */_Bool) var_18))))))), (var_3)));
}
