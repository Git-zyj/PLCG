/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67586
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) 17581085702113014278ULL);
        var_11 = ((/* implicit */short) ((10138088197298452069ULL) | (arr_0 [i_0])));
        arr_4 [i_0] [13] = ((/* implicit */unsigned char) ((var_9) < (17936926009526042253ULL)));
        var_12 = ((/* implicit */short) ((var_0) / (arr_1 [i_0])));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_2 [1] [i_0]) << (((((/* implicit */int) (short)-9383)) + (9412)))))) || (((/* implicit */_Bool) 17581085702113014278ULL))));
    }
    var_13 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) min((865658371596537320ULL), (var_9)))) && ((!(((/* implicit */_Bool) 1452481995U)))))));
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (-(var_9))))));
}
