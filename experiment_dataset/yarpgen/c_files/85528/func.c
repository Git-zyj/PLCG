/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85528
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
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) var_14))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_16 = ((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)19))) : (-953691056964992073LL));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1023)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)125)))))))) : (var_12)));
        var_18 = ((/* implicit */long long int) (+(((/* implicit */int) var_6))));
        var_19 = ((/* implicit */unsigned short) arr_1 [i_0]);
        arr_2 [i_0] = ((/* implicit */short) max((arr_1 [(short)0]), (((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) max((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1]))))) ? (max((var_4), (max((9223372036854775807LL), (137438953440LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned char) -4025099504437370887LL))), (((((/* implicit */_Bool) (short)-18574)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-18577))) : (9223372036854775807LL)))))));
    }
    var_21 = ((/* implicit */unsigned char) ((unsigned short) min(((short)-18577), (((/* implicit */short) (unsigned char)119)))));
}
