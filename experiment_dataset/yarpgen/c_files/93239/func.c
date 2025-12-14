/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93239
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
    var_12 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))));
    var_13 += ((/* implicit */signed char) var_0);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_14 = ((/* implicit */signed char) 4292870144LL);
        var_15 -= ((/* implicit */unsigned char) 4292870169LL);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) 7820738697863727734ULL);
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_1 - 1] [(signed char)2]))));
    }
    for (long long int i_2 = 1; i_2 < 14; i_2 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) var_4);
        arr_11 [14] [i_2] = 4190912234U;
    }
}
