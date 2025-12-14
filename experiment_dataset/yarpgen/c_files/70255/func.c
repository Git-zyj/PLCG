/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70255
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
    var_13 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))), (var_7)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0] [i_0])) & (((/* implicit */int) var_6)))))));
        var_15 |= ((/* implicit */unsigned long long int) var_5);
        var_16 = ((/* implicit */long long int) ((var_5) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) var_11))));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) var_8);
        var_18 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65535))));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)20692))) / (-431789509616762510LL)))))))));
        var_20 -= ((/* implicit */int) (unsigned short)65535);
    }
}
