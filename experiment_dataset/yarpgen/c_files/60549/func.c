/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60549
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) var_11);
        arr_3 [i_0] [i_0] = var_12;
    }
    for (unsigned char i_1 = 2; i_1 < 20; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((arr_1 [i_1] [13LL]) + (((/* implicit */long long int) ((/* implicit */int) var_9))))) - (((/* implicit */long long int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) (unsigned short)11544))))))))));
        var_15 = ((/* implicit */unsigned short) var_7);
    }
    for (short i_2 = 2; i_2 < 19; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */_Bool) var_10);
        var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((-(-1384979602))), (((arr_8 [i_2]) ? (((/* implicit */int) var_8)) : (var_3))))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        arr_15 [i_3] = ((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) * (((var_6) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))))));
        arr_16 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)3)) - (((/* implicit */int) arr_4 [i_3]))))) == ((~(min((((/* implicit */unsigned int) var_2)), (33554431U)))))));
    }
    var_17 = (~(((((_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) var_0)))))));
}
