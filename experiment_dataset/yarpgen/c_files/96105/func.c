/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96105
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
    var_10 = min((((/* implicit */unsigned long long int) var_9)), (min((((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned short) var_0))))), (((var_5) ? (12196035093651302938ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0)))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (1757415944));
        var_12 = ((/* implicit */signed char) ((short) var_2));
        var_13 = ((/* implicit */unsigned char) arr_0 [i_0]);
        var_14 = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        arr_6 [i_1] = arr_5 [i_1] [i_1];
        var_15 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) -5661346059299173420LL))) <= (7360291364426943008ULL)));
    }
}
