/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73980
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
    var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(var_7)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_4 [i_0] = (~(((/* implicit */int) arr_2 [i_0])));
        var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)62499)) > (((/* implicit */int) (unsigned short)16923))));
        var_15 = (unsigned short)48613;
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) (-(max((((int) var_12)), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_1])))))))));
        arr_8 [2ULL] [i_1] = ((/* implicit */unsigned int) ((unsigned char) min((((/* implicit */unsigned short) arr_6 [i_1] [i_1])), (max(((unsigned short)16922), (((/* implicit */unsigned short) (_Bool)1)))))));
        arr_9 [i_1] [i_1] = ((/* implicit */signed char) ((max((((/* implicit */int) arr_6 [i_1] [i_1])), (1639181181))) / ((-(948132255)))));
    }
    for (short i_2 = 4; i_2 < 10; i_2 += 1) 
    {
        arr_14 [i_2] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)3037)) : ((-(((/* implicit */int) ((unsigned char) arr_12 [i_2])))))));
        var_16 = ((/* implicit */unsigned char) arr_12 [i_2 - 1]);
    }
    for (int i_3 = 1; i_3 < 18; i_3 += 1) 
    {
        arr_17 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)48619)))))))) ? (((/* implicit */int) arr_16 [i_3 - 1])) : (((/* implicit */int) var_9))));
        arr_18 [i_3] = ((/* implicit */unsigned long long int) var_6);
    }
}
