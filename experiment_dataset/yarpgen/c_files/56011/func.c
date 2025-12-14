/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56011
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
    var_11 = var_4;
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_12 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (_Bool)1))));
            arr_5 [i_1] = ((/* implicit */long long int) var_5);
            arr_6 [i_0] [i_1] = (+(4177936544970757773LL));
        }
        var_13 = ((/* implicit */short) (unsigned short)35834);
        var_14 = ((/* implicit */int) max((var_14), (var_7)));
        var_15 = ((/* implicit */unsigned int) (-2147483647 - 1));
    }
    var_16 = ((/* implicit */int) var_6);
}
