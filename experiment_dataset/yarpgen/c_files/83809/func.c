/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83809
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
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        var_11 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((long long int) (signed char)-71)) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_0 - 3] [i_0 - 3])) : (((/* implicit */int) arr_0 [i_0 - 3] [i_0 - 2])))))));
        var_12 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 2]))))) ? (max((((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 3])), (var_8))) : (((/* implicit */int) ((unsigned short) var_0)))));
        var_13 = ((/* implicit */unsigned short) var_9);
        var_14 = ((/* implicit */_Bool) ((((/* implicit */long long int) var_2)) - (-2767799974853034013LL)));
    }
    for (unsigned char i_1 = 2; i_1 < 19; i_1 += 4) 
    {
        var_15 = ((/* implicit */long long int) ((max((arr_2 [i_1 - 1] [i_1]), (arr_2 [i_1 + 2] [i_1]))) ? (((arr_2 [i_1 - 1] [i_1 - 1]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 1]))));
        var_16 *= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 2])) != (((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 2])))))));
    }
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */int) (unsigned char)111)) : (((/* implicit */int) (unsigned char)0)))))));
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_18 = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) 2654167451641400463LL)))))), (((var_0) | (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))))));
        var_19 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) (unsigned short)5860))))) ? (max((-4682463099320630681LL), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))));
    }
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))));
}
