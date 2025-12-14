/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75708
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_15 = ((/* implicit */long long int) ((((((/* implicit */int) arr_2 [i_0 - 1])) | (((/* implicit */int) (unsigned char)64)))) / (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)147)) && (((/* implicit */_Bool) 4707532027241279599LL)))))));
        arr_3 [i_0 - 1] [i_0] = ((/* implicit */_Bool) min(((unsigned char)108), (((/* implicit */unsigned char) (_Bool)1))));
    }
    var_16 = ((/* implicit */_Bool) var_1);
}
