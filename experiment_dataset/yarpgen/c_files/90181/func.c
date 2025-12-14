/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90181
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
    var_17 = ((/* implicit */short) (!(var_8)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        var_18 *= ((/* implicit */unsigned char) (((((_Bool)1) ? (var_14) : (((/* implicit */int) var_0)))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) var_0)))))));
        arr_3 [i_0] = ((/* implicit */int) ((_Bool) -883915168));
        var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 + 1])) ^ (((/* implicit */int) (_Bool)0))))) % (((((/* implicit */_Bool) -883915168)) ? (var_11) : (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 21; i_1 += 1) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_1 + 2])) != (((/* implicit */int) arr_5 [i_1 - 2]))));
        arr_6 [i_1 - 2] [i_1 + 2] = ((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_1 - 3]));
        var_21 = ((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_0))))));
    }
    var_22 = ((/* implicit */short) (+((~(((/* implicit */int) var_16))))));
    var_23 += ((/* implicit */int) (_Bool)1);
}
