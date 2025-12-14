/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78565
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
    var_10 = ((/* implicit */unsigned int) var_4);
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_9)))) ? (max((var_4), (((/* implicit */int) var_0)))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-22926))))))) ? (min((((/* implicit */unsigned int) max((var_5), (((/* implicit */int) (short)-18114))))), (((unsigned int) (short)-22918)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)182))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        var_12 = arr_0 [i_0 + 1];
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
    }
}
