/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85554
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
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) var_6);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) var_11));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) -1414136553)) ? ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))))));
        var_18 ^= ((/* implicit */unsigned int) (~((+(((/* implicit */int) (unsigned char)51))))));
        var_19 = -1414136553;
        var_20 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) arr_1 [i_1])) < (16710076591884024867ULL))) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) ((unsigned char) 429888672U)))));
    }
    var_21 = ((/* implicit */unsigned long long int) var_7);
    var_22 = ((/* implicit */short) var_1);
}
