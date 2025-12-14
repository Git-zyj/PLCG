/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61983
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
    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [(unsigned char)2] [i_0] = ((/* implicit */short) ((signed char) min((arr_2 [i_0]), (((/* implicit */short) (!(((/* implicit */_Bool) var_1))))))));
        var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((+(arr_1 [i_0] [i_0]))))))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) (~(((unsigned long long int) arr_6 [i_1] [i_1]))));
        arr_8 [i_1] = ((/* implicit */_Bool) max((((arr_5 [i_1] [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) max((var_4), (((/* implicit */short) var_11)))))));
    }
    var_15 = ((/* implicit */unsigned short) ((_Bool) var_4));
}
