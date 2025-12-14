/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73832
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
    var_17 = (~(max((((long long int) var_8)), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_14))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 6; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (~(var_9)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) (~(((/* implicit */int) arr_0 [(unsigned short)0])))));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_18 += ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) arr_5 [i_1])) | (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) var_13))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_12))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1])))))));
    }
    var_19 |= ((/* implicit */short) (+(((/* implicit */int) var_16))));
}
