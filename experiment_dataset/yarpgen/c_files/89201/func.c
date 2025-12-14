/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89201
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
    var_10 = ((/* implicit */unsigned short) (~(1626132102)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)30)) : (var_0)))))) ? (((/* implicit */unsigned int) 1626132102)) : ((~(min((4294967280U), (4194303U))))))))));
        var_12 = ((/* implicit */signed char) ((_Bool) (~(((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */long long int) 15U)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1945239462812421178LL)))))) % (max((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967281U)))))));
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_5 [i_1])) ? ((+(4294967280U))) : (0U))), (((/* implicit */unsigned int) 1626132102)))))));
    }
    var_15 = ((/* implicit */signed char) var_3);
    var_16 = ((/* implicit */signed char) var_5);
    var_17 = ((/* implicit */signed char) var_2);
}
