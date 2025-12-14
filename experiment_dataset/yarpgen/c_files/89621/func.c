/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89621
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_12 = (+(((/* implicit */int) (_Bool)1)));
        arr_3 [i_0] = ((/* implicit */unsigned char) (~((+(3844175981910772556ULL)))));
    }
    for (short i_1 = 2; i_1 < 17; i_1 += 2) 
    {
        arr_8 [(unsigned char)15] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(3844175981910772566ULL))))));
        var_13 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) 967373759U)) ? (((/* implicit */int) ((unsigned char) arr_7 [i_1]))) : (((((/* implicit */int) var_1)) * (((/* implicit */int) (unsigned char)244)))))) + ((~(arr_5 [i_1 - 1])))));
    }
    var_14 = ((/* implicit */unsigned short) var_9);
    var_15 = ((/* implicit */unsigned long long int) var_10);
    var_16 = (~(((/* implicit */int) (_Bool)1)));
    var_17 = ((/* implicit */unsigned int) var_11);
}
