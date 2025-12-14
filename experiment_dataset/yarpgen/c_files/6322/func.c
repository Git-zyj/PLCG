/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6322
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_14 = ((long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) / (arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-16778))) : (((unsigned int) (_Bool)1))));
        var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
        var_16 = ((/* implicit */int) var_6);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */long long int) min((((int) var_10)), (((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))))) : ((+(max((((/* implicit */long long int) (short)16796)), (8186456133145026185LL)))))));
            arr_4 [i_0] [i_1] = ((/* implicit */int) var_2);
        }
        var_18 = ((/* implicit */int) var_1);
    }
    var_19 = ((/* implicit */short) var_10);
}
